#include "LinkedList.h"

/*Constructors & Destructors*/
template <typename T>
LinkedList<T>::LinkedList() {
	createNewList();
}
template <typename T>
LinkedList<T>::~LinkedList() {

}

/*Getter and setter functions*/
template <typename T>
int LinkedList<T>::getCounter() {
	return counter;
}
template <typename T>
void LinkedList<T>::setCounter() {
	counter++;
}
template <typename T>
void LinkedList<T>::decrementCounter() {
	counter--;
}
template <typename T>
LinkedNode<T> * LinkedList<T>::getStart() {
	return start;
}
template <typename T>
void LinkedList<T>::setStart(LinkedNode<T>* node) {
	start = node;
}
template <typename T>
int LinkedList<T>::getStartValue() {
	return start->data;
}
template <typename T>
LinkedNode<T> * LinkedList<T>::getEnd() {
	return end;
}
template <typename T>
void LinkedList<T>::setEnd(LinkedNode<T> * node) {
	end = node;
}
template <typename T>
int LinkedList<T>::getEndValue() {
	return end->data;
}

/*Functions*/
template <typename T>
void LinkedList<T>::createNewList() {
	start = NULL;
	end = NULL;
	counter = 0;
}
template <typename T>
void LinkedList<T>::addData(LinkedNode<T> *ptrToAddNode)
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
template <typename T>
void LinkedList<T>::deleteData(T del) {
	//FUNCTION FAILS WHEN YOU ENTER A VALUE THAT DOESN'T EXIST.
	LinkedNode<T> * traversal = start;
	LinkedNode<T> * previous;

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
template <typename T>
void LinkedList<T>::destroyList() {
	while (start != NULL) {
		LinkedNode<T> * previous = new LinkedNode<T>;
		previous = start;
		start = start->next;
		delete previous;
		counter--;
	}
	createNewList();
}
template <typename T>
LinkedNode<T> * LinkedList<T>::findData(T datum) {
	LinkedNode<T> * finder = start;
	while (finder != NULL) {
		if (finder->data == datum) {
			return finder;
		}
		finder = finder->next;
	}
	return NULL;
}
template <typename T>
int LinkedList<T>::countDataItems() { //IS THIS CORRECT?
	return getCounter();
}
template <typename T>
bool LinkedList<T>::isListEmpty() {
	if (start == NULL && end == NULL) {
		return 1;
	}
	else {
		return 0;
	}
}
template <typename T>
void LinkedList<T>::printList() {
	LinkedNode<T> * printer = start;
	while (printer!= NULL) {
		std::cout << printer->data << " " << std::endl;
		printer = printer->next;
	}
}

