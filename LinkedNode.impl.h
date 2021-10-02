#include <iostream>

#include "LinkedNode.h"

template <typename T>
LinkedNode<T>::LinkedNode() {
	this -> data = nullptr;
	this -> next = nullptr;
}

template <typename T>
LinkedNode<T>::LinkedNode(T data) {
	this -> data = &data;
	this -> next = nullptr;
}

template <typename T>
T LinkedNode<T>::GetData() {
	return *data;
}

template <typename T>
void LinkedNode<T>::SetData(T data) {
	this -> data = &data;
}

template <typename T>
LinkedNode<T>* LinkedNode<T>::GetNext() {
	return this -> next;
}

template <typename T>
void LinkedNode<T>::InsertAfter(LinkedNode<T>* node) {
	LinkedNode<T>* tmp = this -> next;
	this -> next = node;
	node -> next = tmp;
}

template <typename T>
void LinkedNode<T>::Splice(LinkedNode<T>* node) {
	this -> next = node;
}

template <typename T>
void LinkedNode<T>::Print() {
	std::cout << "Data: " << this -> GetData() << std::endl;
}

template <typename T>
LinkedNode<T>* LinkedNode<T>::GetAddr() {
	return this;
}
