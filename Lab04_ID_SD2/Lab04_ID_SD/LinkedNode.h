#pragma once
#ifndef LINKEDNODE_H
#define LINKEDNODE_H
template <typename T>
struct LinkedNode
{
	T data;
	LinkedNode<T> * next;
};
#endif // !LINKEDNODE_H
