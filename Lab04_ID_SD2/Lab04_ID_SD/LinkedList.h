#pragma once
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "LinkedNode.h"
#include <iostream>
class LinkedList {
private:
	int counter;
	LinkedNode* start;
	LinkedNode* end;
public:
	LinkedList(); //DONE
	~LinkedList(); 

	int getCounter();
	void setCounter();
	void decrementCounter();
	LinkedNode* getStart();
	int getStartValue();
	void setStart(LinkedNode*);
	LinkedNode* getEnd();
	void setEnd(LinkedNode*);
	int getEndValue();

	void createNewList(); //DONE
	void addData(LinkedNode*); //DONE
	void deleteData(int);
	LinkedNode* findData(int); 
	int countDataItems();
	bool isListEmpty();
	void destroyList();
	void printList(); //DONE


};
#endif // !LINKEDLIST_H
