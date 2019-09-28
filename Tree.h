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

    /*Node<T>* search(T value){
        return search(root, value);
    }
    Node<T>* search(Node<T>* node, T value){
        if(value < node->key){
            if(node->left != nullptr){
                return search(node->left, value);
            }
            else{
                return node;
            }
        }
        if(value >= node->key){
            if(node->right != nullptr){
                return search(node->right, value);
            }
            else{
                return node;
            }
        }}*/

    void insertNode(T value){
        if(root != nullptr){
            insertNode(root,value);
        }else{
            root = new Node<T>(value);
        }
    }
    void insertNode(Node<T>* node, T value){
        if(value < node->key){
            if(node->left != nullptr){
                insertNode(node->left, value);
            }else{
                node->left = new Node<T>(value);
            }
        }else if(value >= node->key){
            if(node->right != nullptr){
                insertNode(node->right, value);
            }else{
                node->right = new Node<T>(value);
            }
        }

    }

    void deleteNode(T value){
        delete deleteNode(value, root);
    }
    Node<T>* deleteNode(T value,Node<T>* node)
    {
        if (value < node->key) {
            node->left = deleteNode(value, node->left);
        }
        if (value > node->key){
            node->right = deleteNode(value, node->right);
        }
        else
        {
            if (node->left == nullptr)
            {
                Node<T>* p = node->right;
                delete node;
                return p;
            }
            if ((node->right == nullptr) && (node->left == nullptr))
            {
                delete node;
                return nullptr;
            }
            if (node->left != nullptr){
                Node<T>* p = node->left;
                delete node;
                return p;
            }

        }
    }

    void deleteTree(){
        while (!isempty()){
            deleteNode(root);
        }
    }

    int height() {
        if (root == nullptr){
            return 0;
        }
        else{
            height(root);
        }
    }
    int height(Node<T> node) {
        if (node == nullptr) {return -1;}
        int h1 = height(node->left);
        int h2 = height(node->right);
        if (h1 < h2){ return h2+1;}
        else{ return h1+1;}
    }

    bool isempty(){
        return root == nullptr;
    }


};



#endif //CS2100_TREES_LUISUTEC_TREE_H
