//
// Created by anzef on 24. 04. 2023.
//

#ifndef NALOGA0802_NODE_H
#define NALOGA0802_NODE_H

template<typename T>
class Node{
private:
    T value;
    Node<T>* next;
public:
    Node(T value);
    T getValue() const;
    Node* getNext() const;
    void setValue(T value);
    void setNext(Node<T>* next);
};

template<typename T>
Node<T>::Node(T value) : value(value){
    Node<T>::next = nullptr;
}

template<typename T>
T Node<T>::getValue() const {
    return Node<T>::value;
}

template<typename T>
Node<T>* Node<T>::getNext() const {
    return Node<T>::next;
}

template<typename T>
void Node<T>::setValue(T value) {
    Node<T>::value = value;
}

template<typename T>
void Node<T>::setNext(Node<T>* next) {
    Node<T>::next = next;
}

#endif //NALOGA0802_NODE_H
