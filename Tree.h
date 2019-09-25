//
// Created by Usuario on 19/09/2019.
//

#ifndef CS2100_TREES_LUISUTEC_TREE_H
#define CS2100_TREES_LUISUTEC_TREE_H

template <typename T>
class Tree{
public:
    Node<T>* root;

    Tree():root(nullptr){}

    void insert(Node<T> node){
        Node<T>* p = root;
        if(root == nullptr){
            *root = node;
        }
        else{
            while((p->right != nullptr)||(p->left != nullptr)){
                while(node.key < p->key){
                    p = p->left;
                    if (node.key < p->key){
                        p->left = node;
                    }
                    if (node.key > p->key){
                        p->right = node;
                    }
                }
                while(node.key > p->key){
                    p = p->right;
                    if (node.key < p->key){
                        p->left = node;
                    }
                    if (node.key > p->key){
                        p->right = node;
                    }
                }
            }
        }
    }
};



#endif //CS2100_TREES_LUISUTEC_TREE_H
