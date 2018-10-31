#ifndef NODE_H_
#define NODE_H_

#include <iostream>

template <typename T>
class Node{
private:
    T value;
    Node* next;
    Node* prev;
    
public:
    Node();
    Node( T );
    Node( T, Node*, Node* );
    T getValue();
    void setValue(T val);
    Node* getNext();
    void setNext(Node*);
	Node* getPrevious();
	void setPrevious(Node*);
};

template<typename T>
Node<T>::Node(void):
next(NULL) {}

template<typename T>
Node<T>::Node(T val):
value(val), next(NULL), prev(NULL) {}

template<typename T>
Node<T>::Node(T val, Node* n, Node* p):
value(val), next(n), prev(p) {}

template<typename T>
T
Node<T>::getValue(void){
    return this->value;
}

template<typename T>
Node<T>*
Node<T>::getNext(void){
    return this->next;
}

template<typename T>
void
Node<T>::setNext(Node<T>* n){
    this->next = n;
}

template<typename T>
Node<T>*
Node<T>::getPrevious(void){
	return this->prev;
}

template<typename T>
void
Node<T>::setPrevious(Node<T>* p){
	this->prev = p;
}


#endif /* defined(__LinkedList__Node__) */
