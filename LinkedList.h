#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_

#include "LinkedNode.h"

template <typename T>
class LinkedList {

	public:
		LinkedList();
		T Get(int i);
		void Set(int idx, T data);
		void Add(T data);
		void Remove(int idx);
		void Remove();
		void Insert(int idx, T data);
		int Size();
	private:
		LinkedNode<T>* GetNode(int idx);
		LinkedNode<T>* head;
		LinkedNode<T>* tail;
		int size;

};

#include "LinkedList.impl.h"

#endif //_LINKEDLIST_H_

