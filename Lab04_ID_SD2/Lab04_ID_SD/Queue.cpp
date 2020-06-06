#include "Queue.h"
//Constructors & Destructors

template <typename T>
Queue<T>::Queue(){
	createQueue();
}
template <typename T>
Queue<T>::~Queue() {
}

//Functions
template <typename T>
void Queue<T>::createQueue() {
	this->createNewList();
}
template <typename T>
void Queue<T>::enqueue(LinkedNode<T> *ptrToAddNode) {
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
	if (this->getStart() == NULL && this->getEnd() == NULL) {
		ptrToAddNode->next = NULL;
		this->setStart(ptrToAddNode);
		this->setEnd(ptrToAddNode);
		this->setCounter();
	}
	else {
		ptrToAddNode->next = NULL;
		this->getEnd()->next = ptrToAddNode;
		this->setEnd(ptrToAddNode);
		this->setCounter();
	}
	
}

template <typename T>
LinkedNode<T> * Queue<T>::dequeue() {
	if (this->getStart() == NULL && this->getEnd() == NULL) {
		return NULL;
	}
	LinkedNode<T> * returnTemp = new LinkedNode<T>;
	returnTemp=this->getStart();
	
	if (this->getStart()->next == NULL) {
		this->setStart(NULL);
		this->setEnd(NULL);
		this->decrementCounter();
		return returnTemp;
	}

	this->setStart(this->getStart()->next);
	returnTemp->next = NULL;
	delete returnTemp->next;
	return returnTemp;
}
template <typename T>
LinkedNode<T> * Queue<T>::peekFront() {
	return this->getStart();
}
template <typename T>
LinkedNode<T> * Queue<T>::peekRear() {
	return this->getEnd();
}
template <typename T>
void Queue<T>::destroyQueue() {
	this->destroyList();
}
template <typename T>
void Queue<T>::printQueue() {
	this->printList();
}
template <typename T>
bool Queue<T>::isEmpty() {
    return this->isListEmpty();
}





