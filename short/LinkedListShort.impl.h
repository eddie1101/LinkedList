#include "LinkedListShort.h"
#include "LinkedNodeShort.h"


using namespace std;

template <typename T>
LinkedList<T>::LinkedList() {
        head = new LinkedNode<T>();
        tail = head;
}

template <typename T>
void LinkedList<T>::Add(T data) {
        LinkedNode<T>* toAdd = new LinkedNode<T>(data);
        tail -> InsertAfter(toAdd);
        tail = tail -> GetNext();
}

template <typename T>
void LinkedList<T>::Set(int idx, T data) {
        this -> GetNode(idx) -> SetData(data);
}

template <typename T>
T LinkedList<T>::Get(int idx) {
	return this -> GetNode(idx) -> GetData();
}

template <typename T>
LinkedNode<T>* LinkedList<T>::GetNode(int idx) {
        LinkedNode<T>* curr = head -> GetNext();
        int count = 0;
        while(curr != nullptr) {
                if(count == idx)
                        return curr;
                curr = curr -> GetNext();
                count++;
        }
        return nullptr;
}

