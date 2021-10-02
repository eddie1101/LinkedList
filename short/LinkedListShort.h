#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_

#include "LinkedNodeShort.h"

template <typename T>
class LinkedList {

        public:
                LinkedList();
                T Get(int i);
                void Set(int idx, T data);
                void Add(T data);
        private:
                LinkedNode<T>* GetNode(int idx);
                LinkedNode<T>* head;
                LinkedNode<T>* tail;

};

#include "LinkedListShort.impl.h"

#endif //_LINKEDLIST_H_

