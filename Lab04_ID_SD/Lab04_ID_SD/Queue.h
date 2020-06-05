#pragma once
#ifndef QUEUE
#define QUEUE
#include "LinkedList.h"
class Queue:protected LinkedList {
public:
	Queue();
	~Queue();
	
	void createQueue();
	void enqueue(LinkedNode *);
	LinkedNode* dequeue();
	LinkedNode* peekFront();
	LinkedNode* peekRear();
	void destroyQueue();
	void printQueue();
};
#endif // !QUEUE

