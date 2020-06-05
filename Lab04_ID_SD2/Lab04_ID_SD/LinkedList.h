#pragma once
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "LinkedNode.h"
#include <iostream>

template <typename T>
class LinkedList {
private:
	int counter;
	LinkedNode<T> * start;
	LinkedNode<T>* end;
public:
	LinkedList<T>(); //DONE
	~LinkedList<T>();

	int getCounter();
	void setCounter();
	void decrementCounter();
	LinkedNode<T> * getStart();
	int getStartValue();
	void setStart(LinkedNode<T> *);
	LinkedNode<T> * getEnd();
	void setEnd(LinkedNode<T> *);
	int getEndValue();

	void createNewList(); //DONE
	void addData(LinkedNode<T>* node); //DONE
	void deleteData(T);
	LinkedNode<T> * findData(T);
	int countDataItems();
	bool isListEmpty();
	void destroyList();
	void printList(); //DONE


};
#endif // !LINKEDLIST_H
