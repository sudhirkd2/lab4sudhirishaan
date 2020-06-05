
//
//  Stack.h
//  lab4local
//
//  Created by Sudhir Dharmadhikari on 6/3/20.
//  Copyright © 2020 Sudhir Dharmadhikari. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

#include "LinkedList.h"
template<typename T>
class Stack : protected LinkedList<T> {

    public :
    void createStack();
    void printStack();
    void push(LinkedNode<T> *ptrToAddNode);
    LinkedNode<T> * pop();
    LinkedNode<T> * peek();
    void destroyStack();
};

template <typename T>
void Stack<T>::createStack() {
    this->createNewList();
}

template <typename T>
void Stack<T>::printStack() {
    this->printList();
}

template <typename T>
void Stack<T>::push(LinkedNode<T> *ptrToAddNode) {
    this->addData(ptrToAddNode);
}

template <typename T>
LinkedNode<T> * Stack<T>::pop() {
    LinkedNode<T> * temp = this->getStart();
    this->setStart(this->getStart()->next);
    return temp;
}

template <typename T>
LinkedNode<T> * Stack<T>::peek() {
    return this->getStart();
}

template <typename T>
void Stack<T>::destroyStack() {
    this->destroyList();
}
#endif /* Stack_h */


