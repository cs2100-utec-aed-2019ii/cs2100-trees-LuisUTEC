//
// Created by Usuario on 19/09/2019.
//
#ifndef CS2100_TREES_LUISUTEC_NODE_H
#define CS2100_TREES_LUISUTEC_NODE_H

template <typename T>

class Node{
public:
    T key;
    Node<T> *left, *right;

    Node(T key){
        this->key = key;
        this->left = this->right = nullptr;
    }

};



#endif //CS2100_TREES_LUISUTEC_NODE_H
