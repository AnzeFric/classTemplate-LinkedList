//
// Created by anzef on 24. 04. 2023.
//

#ifndef NALOGA0802_LINKEDLIST_H
#define NALOGA0802_LINKEDLIST_H

#include <iostream>
#include "Node.h"

template<typename T>
class LinkedList {
private:
    Node<T>* head = new Node<T>(-1);
public:
    bool isEmpty() const;
    int getSize() const;
    void add(T value);
    T at(unsigned int index);
    ~LinkedList();
};

template<typename T>
bool LinkedList<T>::isEmpty() const {
    if(LinkedList<T>::head->getNext() == nullptr){
        return true;
    }
    return false;
}

template<typename T>
int LinkedList<T>::getSize() const {
    Node<T>* it = head;
    int counter = 0;

    while (it->getNext() != nullptr){
        counter++;
        it = it->getNext();
    }

    return counter;
}

template<typename T>
void LinkedList<T>::add(T value) {
    Node<T>* new_node = new Node<T>(value);
    Node<T>* it = head;

    while(it->getNext() != nullptr){
        it = it->getNext();
    }

    it->setNext(new_node);
}

template<typename T>
T LinkedList<T>::at(unsigned int index) {
    Node<T>* it = head;
    int counter = 0;

    while (it != nullptr) {
        if (counter == index) {
            return (it->getValue());
        }

        counter++;
        it = it->getNext();
    }

    return -1;
}

template<typename T>
LinkedList<T>::~LinkedList() {
    Node<T>* it = head;

    while(it != nullptr) {
        Node<T>* temp = it;
        it = it->getNext();
        delete temp;
    }
}


#endif //NALOGA0802_LINKEDLIST_H
