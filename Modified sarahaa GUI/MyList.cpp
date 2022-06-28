#include "MyList.h"
#include <assert.h>
#include <iostream>

using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


template <class T>
Node<T>::Node() {
	value = 0;
	next = 0;
}


template <class T>
Node<T>::Node(T val) {
	value = val;
	next = 0;
}


template <class T>
MyList<T>::MyList() {
	head = tail = NULL;
	size = 0;
}


template <class T>
void MyList<T>::InsertAt(int pos, T val)
{

	Node<T>* tmp = head;
	Node<T>* newNode = new Node<T>(val);
	if (pos == 0)
	{
		newNode->next = head;
		head = newNode;
	}
	else
	{
		for (int i = 0; i < pos - 1; i++)
			tmp = tmp->next;

		newNode->next = tmp->next;
		tmp->next = newNode;
	}
	size++;
}


template <class T>
void MyList<T>::pushBack(T val)
{
	Node<T>* newNode = new Node<T>(val);
	if (head == 0)
		head = tail = newNode;
	else
	{
		tail->next = newNode;
		tail = newNode;
	}
	size++;
}


template <class T>
T MyList<T>::At(int pos)
{

	Node<T>* tmp = head;
	for (int i = 0; i < pos; i++)
		tmp = tmp->next;
	return tmp->value;
}


template <class T>
void MyList<T>::DeleteAt(int pos)
{
	Node<T>* tmp = head;
	if (pos == 0)
	{
		head = head->next;
		delete tmp;
	}
	else
	{
		for (int i = 0; i < pos - 1; i++)
			tmp = tmp->next;
		Node<T>* del = tmp->next;
		tmp->next = del->next;
		delete del;
		if (pos == size - 1)
			tail = tmp;
	}
	size--;
}


template <class T>
void MyList<T>::Display() {
	Node<T>* temp = head;
	int i = 1;
	while (temp != NULL) {
		temp = temp->next;
		i++;
	}

}


template <class T>
void MyList<T>::pushFront(T val)
{
	InsertAt(0, val);
}


template <class T>
void MyList<T>::popFront()
{
	Node<T>* tmp = head;
	head = head->next;
	delete tmp;
	size--;
}


template <class T>
void MyList<T>::popBack()
{

	Node<T>* tmp = head;
	for (int i = 0; i < size - 2; i++)
		tmp = tmp->next;
	Node<T>* del = tmp->next;
	tmp->next = del->next;
	delete del;
	tail = tmp;
	size--;
}


template <class T>
T MyList<T>::ShowFront() {
	return head->value;
}

template <class T>
MyList<T> MyList<T>::copyData() {

	MyList<T> copidlist;
	Node<T>* temp = head;

	while (temp != NULL) {
		copidlist.pushBack(temp->value);
		temp = temp->next;
	}
	return copidlist;
}
