#pragma once

using namespace System;

template <class T>
class Node {
public:
	T value;
	Node<T>* next;
	Node();
	Node(T value);
};

template <class T>
class MyList
{
	Node<T>* head;
	Node<T>* tail;
public:
	T ShowFront();
	int size;
	MyList();
	void pushFront(T val);
	void pushBack(T val);
	void InsertAt(int pos, T val);
	void DeleteAt(int pos);
	void Display();
	void popBack();
	void popFront();
	T At(int pos);
	MyList<T> copyData();
};

