#include "LinkedList.h"
#include "Queue.h"
#include "Currency.h"
#include <iostream>
using namespace std;
int main() {
	/*LinkedList myList;
	//ADD NODE FUNCTION
	for (int i = 0; i < 5; i++) {
		LinkedNode* ptrToAddNode = new LinkedNode;
		std::cout << "Enter value of new node to add: ";
		std::cin >> ptrToAddNode->data;
		myList.addData(ptrToAddNode);
	}*/
	cout << "WELCOME TO SUDHIR ISHAAN'S PROJECT" << endl;
	//myList.printList();

	//DELETE FUNCTION
	/*int del;
	cout << "Delete this value: ";
	cin >> del;
	myList.deleteData(del);*/
	

	//FIND NODE FUNCTION
	/*int datum;
	cout << "Enter value you wish to find: " << endl;
	cin >> datum;
	LinkedNode* find = myList.findData(datum);
	cout << "This is the value of what you found: " << find->data << endl;*/

	//NUMBER OF NODES
	/*cout << "Number of nodes: " << myList.countDataItems();*/

	//IS THE LIST EMPTY?
	/*LinkedList list;
	cout << list.isListEmpty() << endl;
	cout << myList.isListEmpty() << endl;*/

	//DESTROY LIST
	/*myList.destroyList();
	cout << "List destroyed" << endl;
	for (int i = 0; i < 5; i++) {
		LinkedNode* ptrToAddNode = new LinkedNode;
		std::cout << "Enter value of new node to add: ";
		std::cin >> ptrToAddNode->data;
		myList.addData(ptrToAddNode);
	}

	myList.printList();*/

	/*LinkedNode* ptrToAddNode = new LinkedNode;
	cout << "Enter value to add to destroyed list: ";
	cin >> ptrToAddNode->data;
	myList.addData(ptrToAddNode);
	myList.printList();*/

	//cout<<"End Value: "<<myList.getEndValue()<<endl;
	//cout << "Start Value: " << myList.getStartValue() << endl;

	Queue query;
	for (int i = 0; i < 5; i++) {
		LinkedNode* test = new LinkedNode;
		cout << "Enter value: ";
		cin >> test->data;
		query.enqueue(test);
	}
	query.printQueue();
	cout << "Dequeing" << endl;

	for (int i = 0; i < 3; i++) {
		query.dequeue();
	}

	query.printQueue();

	return 0;
}