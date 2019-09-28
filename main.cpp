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
    cout << tree.height() << endl;
    tree.deleteNode(9);
    tree.deleteNode(12);


    return 0;
}