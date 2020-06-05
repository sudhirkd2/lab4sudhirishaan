#include "Queue.h"
//Constructors & Destructors
Queue::Queue(){
	createQueue();
}
Queue::~Queue() {
}

//Functions
void Queue::createQueue() {
	this->createNewList();
}
void Queue::enqueue(LinkedNode *ptrToAddNode) {
	/*if (start == NULL && end == NULL) {
		std::cout << "Adding first element:" << std::endl;
		ptrToAddNode->next = NULL;
		start = ptrToAddNode;
		end = ptrToAddNode;
		counter++;
	}
	else {
		ptrToAddNode->next = start;
		start = ptrToAddNode;
		counter++;
	}*/
	if (getStart() == NULL && getEnd() == NULL) {
		ptrToAddNode->next = NULL;
		setStart(ptrToAddNode);
		setEnd(ptrToAddNode);
		setCounter();
	}
	else {
		ptrToAddNode->next = NULL;
		getEnd()->next = ptrToAddNode;
		setEnd(ptrToAddNode);
		setCounter();
	}
	
}

LinkedNode* Queue::dequeue() {
	if (getStart() == NULL && getEnd() == NULL) {
		return NULL;
	}
	LinkedNode* returnTemp = new LinkedNode;
	returnTemp=getStart();
	
	if (getStart()->next == NULL) {
		setStart(NULL);
		setEnd(NULL);
		decrementCounter();
		return returnTemp;
	}

	setStart(getStart()->next);
	returnTemp->next = NULL;
	delete returnTemp->next;
	return returnTemp;
}
LinkedNode* Queue::peekFront() {
	return this->getStart();
}
LinkedNode* Queue::peekRear() {
	return this->getEnd();
}
void Queue::destroyQueue() {
	this->destroyList();
}
void Queue::printQueue() {
	this->printList();
}






