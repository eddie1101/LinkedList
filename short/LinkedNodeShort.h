#ifndef _LINKEDNODE_H_
#define _LINKEDNODE_H_

template <typename T>
class LinkedNode {

        public:
                LinkedNode();
                LinkedNode(T data);
                T GetData();
                void SetData(T data);
		void InsertAfter(LinkedNode<T>* node);
                LinkedNode<T>* GetNext();
        private:        
                T* data;
                LinkedNode<T>* next;

};

#include "LinkedNodeShort.impl.h"

#endif //_LINKEDNODE_H_

