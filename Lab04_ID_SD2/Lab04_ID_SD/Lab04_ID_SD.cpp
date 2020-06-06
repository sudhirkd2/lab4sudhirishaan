#include "LinkedList.h"
#include "LinkedList.cpp"
#include "Queue.h"
#include "Queue.cpp"
#include "Stack.h"
#include "Currency.h"
#include "Dollar.h"
#include <iostream>
using namespace std;
int main() {
    cout << "WELCOME TO SUDHIR ISHAAN'S PROJECT" << endl;
    cout << "Testing List of Integers" << endl;
	LinkedList<int> myList;
	
    cout << "Create List and Add Functionality using 5 nodes" << endl;
	for (int i = 0; i < 5; i++) {
		LinkedNode<int>* ptrToAddNode = new LinkedNode<int>;
		std::cout << "Enter value of new node to add: ";
		std::cin >> ptrToAddNode->data;
		myList.addData(ptrToAddNode);
	}
	
    cout << "Printing list.." << endl;
	myList.printList();

	//DELETE FUNCTION
    cout << "Testing delete function" << endl;
	int del;
	cout << "Enter data value to be deleted: ";
	cin >> del;
	myList.deleteData(del);
    cout << "Printing data after deleting" << endl;
    myList.printList();
    cout << "Testing find data " << endl;
    cout << "Enter data value to find: ";
    cin >> del;
    if(myList.findData(del) != NULL) {
    cout << "Data found = " << myList.findData(del)->data << endl;
    }else {
        cout << "Data was not found" << endl;
    }
    cout << "Destroying list" << endl;
    myList.destroyList();
    cout << "Printing after destroying list" << endl;
    myList.printList();
    cout << "Testing isListEmpty" << endl;
    cout << "Is List empty " << myList.isListEmpty() << endl;
    
    cout << "---------------------- List Test Is Done -------------------------" << endl;
    
    
    cout << "---------------------- Queue Testing  -------------------------" << endl;
    
    cout << "Testing Queue of strings" << endl;
    Queue<string> myQueue;
    
    cout << "Create Queue and Enque Functionality using 5 nodes" << endl;
    for (int i = 0; i < 5; i++) {
        LinkedNode<string>* ptrToAddNode = new LinkedNode<string>;
        string str;
        std::cout << "Enter value of new node to add: ";
        std::cin >> str;
        ptrToAddNode->data = str;
        myQueue.enqueue(ptrToAddNode);
    }
    
    cout << "Printing queue.." << endl;
    myQueue.printQueue();

    //DELETE FUNCTION
    cout << "Testing deque function" << endl;
    cout << "Dequed one element " << myQueue.dequeue()->data << endl;
    cout << "Printing data after dequeing" << endl;
    myQueue.printQueue();
    cout << "Peeking Front of the queue" << endl;
    cout << "Peeked node " << myQueue.peekFront()->data << endl;
    cout << "Peeking Rear of the queue" << endl;
    cout << "Peeked node " << myQueue.peekRear()->data << endl;
    cout << "Destroying queue" << endl;
    myQueue.destroyQueue();
    cout << "Printing after destroying queue" << endl;
    myQueue.printQueue();
    cout << "Testing isEmpty" << endl;
    cout << "Is queue empty " << myQueue.isEmpty() << endl;
    
    cout << "---------------------- Queue Test Is Done -------------------------" << endl;
    
    cout << "Testing Stack of Dollar" << endl;
    Stack<Dollar> myStack;
    
    cout << "Create Stack and Push Functionality using 5 nodes" << endl;
    for (int i = 0; i < 5; i++) {
        LinkedNode<Dollar>* ptrToAddNode = new LinkedNode<Dollar>;
        Dollar dollar;
        std::cout << "Enter value of new node to add: ";
        std::cin >> dollar;
        ptrToAddNode->data = dollar;
        myStack.push(ptrToAddNode);
    }
    
    cout << "Printing stack.." << endl;
    myStack.printStack();

    //DELETE FUNCTION
    cout << "Testing pop function" << endl;
    cout << "Popped one element " << myStack.pop()->data << endl;
    cout << "Printing data after popping" << endl;
    myStack.printStack();
    cout << "Peeking at the stack" << endl;
    cout << "Peeked node " << myStack.peek()->data << endl;
    cout << "Destroying Stack" << endl;
    myStack.destroyStack();
    cout << "Printing after destroying stack" << endl;
    myStack.printStack();
    cout << "Testing isEmpty" << endl;
    cout << "Is stack empty " << myStack.isEmpty() << endl;

//
//	return 0;
}
