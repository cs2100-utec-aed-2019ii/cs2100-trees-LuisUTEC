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

    Node<T>* search(T value){
        return search(root, value);
    }
    Node<T>* search(Node<T> node, T value){
        if(value < node->key){
            if(node->left != nullptr){
                search(node->left, value);
            }else{
                return node->left;
            }
        }else if(value >= node->key){
            if(node->right != nullptr){
                search(node->right, value);
            }else{
                return node->right;
            }
        }
    }

    void insertNode(T key){
        if(root != nullptr){
            insertNode(root,key);
        }else{
            root = new Node<T>(key);
        }
    }
    void insertNode(Node<T>* node, T key){
        if(key < node->key){
            if(node->left != nullptr){
                insertNode(node->left, key);
            }else{
                node->left = new Node<T>(key);
            }
        }else if(key >= node->key){
            if(node->right != nullptr){
                insertNode(node->right, key);
            }else{
                node->right = new Node<T>(key);
            }
        }

    }


    void deleteNode(T value){
         delete search(value);
    }
    void deleteNode(Node<T>* p){
        delete p;
    }

    void deleteTree(){
        while (!isempty()){
            deleteNode(root);
        }
    }

    bool isempty(){
        return root == nullptr;
    }

};



#endif //CS2100_TREES_LUISUTEC_TREE_H
