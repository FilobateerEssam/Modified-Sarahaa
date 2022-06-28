#pragma once
#include <string>
#include <map>
#include <deque>
#include <set>
#include <vector>
using namespace std;


class G2
{
public:
    //         msg       con
    deque<pair<string, string>> SentMessages;
    set<string> ListOfContact;
    deque<pair<string, int>> Favorites;
    set<int> ids;
    //  id               msg     fav or not
    map<int, vector<pair<string, bool>>> RecievedMessage;

    string UserName;
    string Email;
    string Password;
    int ID;
    set<string>::iterator it = ListOfContact.begin();
    map<int, vector<pair<string, bool>>>::iterator itr = RecievedMessage.begin();
    
    G2();
    G2(string name, string pass);

    int getId();
    void UploadCon();
    void UploadSentMessages();
    void uploadRecMessages();
    void readFav();

    void DisplayContacts();
    void ViewRecievedMessages(int id);
    void view_sent_Messages();
    void viewFavorites();

    bool Search(string conName);
    bool AddContact(string conName);
    void SentMessageToCon(string msg, string con);
    void undo(string userReceived);
    void addToFavorites(string msg, int id);
    void removeOldest();


    void writeFavorites();
    void witreContacts();
    void writeSentMessages();
    string forget(string search, string username);
    void Logout();
};

class Test {
public:
    static G2 saraha;
};