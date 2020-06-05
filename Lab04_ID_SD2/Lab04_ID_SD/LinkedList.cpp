#include "LinkedList.h"

/*Constructors & Destructors*/
LinkedList::LinkedList() {
	createNewList();
}
LinkedList::~LinkedList() {

}

/*Getter and setter functions*/
int LinkedList::getCounter() {
	return counter;
}
void LinkedList::setCounter() {
	counter++;
}
void LinkedList::decrementCounter() {
	counter--;
}
LinkedNode* LinkedList::getStart() {
	return start;
}
void LinkedList::setStart(LinkedNode* node) {
	start = node;
}
int LinkedList::getStartValue() {
	return start->data;
}
LinkedNode* LinkedList::getEnd() {
	return end;
}
void LinkedList::setEnd(LinkedNode* node) {
	end = node;
}
int LinkedList::getEndValue() {
	return end->data;
}

/*Functions*/
void LinkedList::createNewList() {
	start = NULL;
	end = NULL;
	counter = 0;
}
void LinkedList::addData(LinkedNode *ptrToAddNode)
{
	if (start == NULL && end == NULL) {
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
	}	
}
void LinkedList::deleteData(int del) {
	//FUNCTION FAILS WHEN YOU ENTER A VALUE THAT DOESN'T EXIST.
	LinkedNode* traversal = start;
	LinkedNode* previous;

	if (traversal->data == del) {
		start = traversal->next;
		traversal = NULL; //make sure to properly delete node
		return;
	}
	while (traversal->data != del) {
		previous = traversal; 
		traversal = traversal->next;
		if (traversal->data == del) {
			previous->next = traversal->next;
			if (traversal->next == NULL) {
				end = previous;
			}
			traversal->next = NULL; //make sure to properly delete node
		}
	}
	
}
void LinkedList::destroyList() {
	while (start != NULL) {
		LinkedNode* previous = new LinkedNode;
		previous = start;
		start = start->next;
		delete previous;
		counter--;
	}
	createNewList();
}
LinkedNode* LinkedList::findData(int datum) {
	LinkedNode* finder = start;
	while (finder != NULL) {
		if (finder->data == datum) {
			return finder;
		}
		finder = finder->next;
	}
	return NULL;
}
int LinkedList::countDataItems() { //IS THIS CORRECT?
	return getCounter();
}
bool LinkedList::isListEmpty() {
	if (start == NULL && end == NULL) {
		return 1;
	}
	else {
		return 0;
	}
}
void LinkedList::printList() {
	LinkedNode* printer = start;
	while (printer!= NULL) {
		std::cout << printer->data << " " << std::endl;
		printer = printer->next;
	}
}

