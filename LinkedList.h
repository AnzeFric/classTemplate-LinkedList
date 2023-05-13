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
    Node<T> *head = new Node<T>(-1);
public:
    bool isEmpty() const {
        return (LinkedList<T>::head == nullptr);
    };

    int getSize() const {
        Node<T> *it = head;
        int counter = 0;

        while (it->getNext() != nullptr) {
            counter++;
            it = it->getNext();
        }

        return counter;
    };

    void add(T value) {
        Node<T> *new_node = new Node<T>(value);
        Node<T> *it = head;

        while (it->getNext() != nullptr) {
            it = it->getNext();
        }

        it->setNext(new_node);
    };

    T at(unsigned int index) {
        Node<T> *it = head;
        int counter = 0;

        while (it != nullptr) {
            if (counter == index) {
                return (it->getValue());
            }

            counter++;
            it = it->getNext();
        }

        return -1;
    };

    bool remove(unsigned int index) {
        if (LinkedList<T>::isEmpty() || index <= 0) {
            return false;
        }

        Node<T> *previous = nullptr;
        Node<T> *it = head;

        for (int i = 0; it != nullptr && i != index; i++) {
            previous = it;
            it = it->getNext();
        }

        if (it == nullptr) {
            return false;
        }

        previous->setNext(it->getNext());
        delete it;
        return true;
    };

    ~LinkedList() {
        Node<T> *it = head;

        while (it != nullptr) {
            Node<T> *temp = it;
            it = it->getNext();
            delete temp;
        }
    };
};


#endif //NALOGA0802_LINKEDLIST_H
