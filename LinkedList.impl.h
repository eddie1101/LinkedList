#include "LinkedList.h"
#include "LinkedNode.h"

#include <iostream>

using namespace std;

template <typename T>
LinkedList<T>::LinkedList() {
	head = new LinkedNode<T>();
	tail = head;
	curr = tail;
	size = 0;
}

template <typename T>
int LinkedList<T>::Size() {
	return this -> size;
}

template <typename T>
void LinkedList<T>::Add(T* data) {
	LinkedNode<T>* toAdd = new LinkedNode<T>(data);
	tail -> InsertAfter(toAdd);
	tail = tail -> GetNext();
	size++;
}

template <typename T>
void LinkedList<T>::Set(int idx, T* data) {

	if(idx < 0 || idx >= size)
		return;

	this -> GetNode(idx) -> SetData(data);
}

template <typename T>
T* LinkedList<T>::Get(int idx) {

	if(idx < 0 || idx >= size)
		return NULL;

	return this -> GetNode(idx) -> GetData();
}

template <typename T>
void LinkedList<T>::Insert(int idx, T* data) {
	LinkedNode<T>* toInsert = new LinkedNode<T>(data);
	GetNode(idx - 1) -> InsertAfter(toInsert);
	size++;
}

template <typename T>
LinkedNode<T>* LinkedList<T>::GetNode(int idx) {

	if(idx == -1)
		return head;

	curr = head -> GetNext();
	int count = 0;
	while(curr != nullptr) {
		if(count == idx)
			return curr;
		curr = curr -> GetNext();
		count++;
	}
	return nullptr;
}

template <typename T>
void LinkedList<T>::Remove() {
	delete tail;
	tail = GetNode(size - 2);
	size--;
}

template <typename T>
void LinkedList<T>::Remove(int idx) {

	if(idx < 0 || idx >= size)
		return;

	if(idx == size - 1) {
		Remove();
		return;
	}

	LinkedNode<T>* before = GetNode(idx - 1);
	LinkedNode<T>* remove = before -> GetNext();
	LinkedNode<T>* after = remove -> GetNext();

	delete remove;

	before -> Splice(after);
	size--;
}

template <typename T>
void LinkedList<T>::Print() {
	for(int i = 0; i < this -> size; i++) {
		this -> GetNode(i) -> Print();
	}
}

template <typename T>
LinkedList<T>* LinkedList<T>::operator+(LinkedList<T>* o) {

	this -> tail -> Splice(o -> GetNode(0));
	return this;

}





