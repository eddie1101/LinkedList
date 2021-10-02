#ifndef _LINKEDNODE_H_
#define _LINKEDNODE_H_

template <typename T>
class LinkedNode {

	public:
		LinkedNode();
		LinkedNode(T data);
		T GetData();
		void SetData(T data);
		LinkedNode<T>* GetNext();
		void InsertAfter(LinkedNode<T>* node);
		void Splice(LinkedNode<T>* node);
		void Print();
		LinkedNode* GetAddr();
	private:	
		T* data;
		LinkedNode<T>* next;

};

#include "LinkedNode.impl.h"

#endif //_LINKEDNODE_H_
