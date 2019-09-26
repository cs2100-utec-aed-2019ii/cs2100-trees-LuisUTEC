#include <iostream>
#include "Node.h"
#include "Tree.h"

using namespace std;

int main() {
    Tree<int> tree;

    tree.insertNode(9);
    tree.insertNode(12);
    tree.insertNode(4);
    tree.insertNode(5);
    cout << tree.root->key << endl;
    cout << tree.root->right->key << endl;
    cout << tree.root->left->key << endl;
    cout << tree.root->left->right->key << endl;


    return 0;
}