#include "G2.h"
#include <iostream>
#include <fstream>
#include<iostream>
#include <iterator>
#include<string>
#include <sstream>
#include <ctime>
#include <direct.h>
#include "pages.h"


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;


G2 Test::saraha;

G2::G2(string name, string pass)
{
    ID = getId();
    string s = to_string(ID);
    UserName = name + s;
    Password = pass;
}


G2::G2() {
    UserName = "";
    Password = "";
}

bool G2::AddContact(string conName)
{
 
    if (ListOfContact.find(conName) != ListOfContact.end())
    {
        MessageBox::Show("this contact already exists");
        return false;
    }
    else {
        ifstream chek;
        chek.open("Users\\" + conName + "\\Data.txt");
        if (chek.is_open())
        {
            ListOfContact.insert(conName);
            return true;
        }
        else
        {
            MessageBox::Show("there isn't a user with this name");
            return false;
        }
    }
}



bool G2::Search(string conName)
{
    if (ListOfContact.find(conName) == ListOfContact.end())
    {
        MessageBox::Show("this contact is NOT found");
        return false;
    }

    else
        return true;
    
}


void G2::SentMessageToCon(string msg, string contact_Name) {
    SentMessages.push_front(make_pair(msg, contact_Name)); //sender
    
    ofstream save_Message;
    save_Message.open("Users\\" + contact_Name + "\\Recieved\\idData.txt", ios::app | ios::out);
    save_Message << ID << endl;
    save_Message.close();
    
    save_Message.open("Users\\" + contact_Name + "\\Recieved\\" + to_string(ID) + ".txt", ios::app | ios::out); // Recieved
    save_Message << msg << endl << "0" << endl;
    save_Message.close();
}


void G2::UploadSentMessages() {
  
    string message, conName;
    ifstream write;
    write.open("Users\\" + UserName + "\\Send Messages.txt"); 
    while (getline(write, message), getline(write, conName)) {
        SentMessages.push_back(make_pair(message, conName));
    }

}



void G2::ViewRecievedMessages(int id) {
    ifstream file;
    file.open("Users\\" + UserName + "\\Recieved\\" + to_string(id) + ".txt", ios::app | ios::out); 

    string line,bol;
    while (getline(file, line), getline(file, bol))
    {
        if(bol == "0")
            RecievedMessage[id].push_back(make_pair(line, false));
        else
            RecievedMessage[id].push_back(make_pair(line, true));
    }

    file.close();

}

   /*
void G2::DisplayContacts()
{
    set<string>::iterator itr;

    for (itr = ListOfContact.begin(); itr != ListOfContact.end(); ++itr) {
        cout << '\t' << *itr << '\n';

    }
}
*/

void G2::uploadRecMessages() {

    string store;
    ifstream save_Message;
   
    save_Message.open("Users\\" + UserName + "\\Recieved\\idData.txt", ios::app | ios::out);
    while (getline(save_Message, store))
        ids.insert(stoi(store));

   save_Message.close();
}


// removing username and take the class username
void G2::UploadCon() {
    
    string store;
    ifstream uploadData;
    uploadData.open("Users\\" + UserName + "\\Contacts.txt");

    while (getline(uploadData, store)) 
        ListOfContact.insert(store);
    
    uploadData.close();
}
       
void G2::undo(string userReceived)
{
    
    
    map<int, vector<pair<string, bool>>> RecievedMessagetmp;

    ifstream  save_Message;
    save_Message.open("Users\\" + userReceived + "\\Recieved\\" + to_string(ID) + ".txt", ios::app | ios::out);
    int cntr = 0;
    string line, bol1;
    if (save_Message.is_open()) {
        while (getline(save_Message, line), getline(save_Message, bol1)) {
            cntr++;
            if (bol1 == "0")
                RecievedMessagetmp[ID].push_back(make_pair(line, false));
            else
                RecievedMessagetmp[ID].push_back(make_pair(line, true));
        }

    }
    save_Message.close();
    RecievedMessagetmp[ID].pop_back();
    ofstream write;
    write.open("Users\\" + userReceived + "\\Recieved\\" + to_string(ID) + ".txt");


    for (int i = 0; i < cntr-1; ++i) {
        if (RecievedMessagetmp[ID][i].second)
            write << RecievedMessagetmp[ID][i].first << endl << "1" << endl;
        else
            write << RecievedMessagetmp[ID][i].first << endl << "0" << endl;
        //RecievedMessagetmp.erase(idSender);
    }
    write.close();


    SentMessages.pop_front();
}
                

int G2::getId()
{
    int randomNumber = 0;
    srand(time(0));//seed the rand function

    randomNumber = rand();
    return randomNumber;
}


void G2::readFav()
{
    // trying to find an easier way so we will limit the number of chars the user uses to 1000 so his message doesn't excude one line in the txt file

    ifstream fin("Users\\" + UserName + "\\Favourites Messages.txt");

    string line, msg, tmp;
    stringstream ss;
    int id;

    while (getline(fin, line))
    {
        int index_str;

        if ((index_str = line.find("$ID: ")) != string::npos) //check if this string exists in the line ==> this is the id line
        {
            tmp = line.substr(5); //put the substring which contains the id into tmp

            id = stoi(tmp); //converts the tmp string to int

            Favorites.push_back(make_pair(msg, id));
        }
        else
            msg = line;
    }
}

/*
void G2::viewFavorites()
{
    deque<pair<string, int>> temp;
    temp = Favorites;

    while (temp.size() != 0)
    {
        cout << temp.front().first << " " << temp.front().second << endl;
        temp.pop_front();
    }

}
*/

void G2::addToFavorites(string msg, int id)
{
    Favorites.push_back(make_pair(msg, id));
}


void G2::removeOldest()
{
    Favorites.pop_front();
}


void G2::writeFavorites()
{
    fstream favs;
    favs.open("Users\\" + UserName + "\\Favourites Messages.txt");


    while (Favorites.size() != 0)
    {
        favs << Favorites.front().first << "\n" << "$ID: " << Favorites.front().second << "\n";
        Favorites.pop_front();
    }
    favs.close();
}

string G2::forget(string search, string username) {

    int Search_exist1 = 0;

    string Search_Email, sp1, se1;

    Search_Email = search;

    ifstream Forget("Users\\" + username + "\\Data.txt");
    for (int i = 0; i < 3; i++)
        getline(Forget, sp1);
    while (getline(Forget, se1)) {
        if (se1 == Search_Email)
        {
            Search_exist1 = 1;
            break;
        }
    }

    Forget.close();

    if (Search_exist1 == 1)
        return sp1;

    else
        return "error";

}

void G2:: Logout() {
                 
    fstream save;


    //Send Messages
    save.open("Users\\" + UserName + "\\Send Messages.txt");
    for (int i = 0; i < SentMessages.size(); i++)
        save << SentMessages[i].first << "\n" + SentMessages[i].second << endl;

    save.close();
   
    SentMessages.~deque();


    // Favourite
    fstream favs;
    save.open("Users\\" + UserName + "\\Favourites Messages.txt");
    while (Favorites.size() != 0)
    {
        favs << Favorites.front().first << "\n" << "$ID: " << Favorites.front().second << "\n";
        Favorites.pop_front();
    }
    save.close();



    // List of Contact
    save.open("Users\\" + UserName + "\\Contacts.txt");
    for (it = ListOfContact.begin(); it != ListOfContact.end(); it++)
        save << *it << endl;


    save.close();

    // Remove Deque

    ListOfContact.clear();
}