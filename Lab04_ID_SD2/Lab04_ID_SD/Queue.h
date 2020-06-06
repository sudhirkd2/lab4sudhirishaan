#pragma once
#ifndef QUEUE
#define QUEUE
#include "LinkedList.h"

template <typename T>
class Queue:protected LinkedList<T> {
public:
	Queue<T>();
	~Queue<T>();
	
	void createQueue();
	void enqueue(LinkedNode<T> *);
	LinkedNode<T> * dequeue();
	LinkedNode<T> * peekFront();
	LinkedNode<T> * peekRear();
	void destroyQueue();
	void printQueue();
    bool isEmpty();
};
#endif // !QUEUE

