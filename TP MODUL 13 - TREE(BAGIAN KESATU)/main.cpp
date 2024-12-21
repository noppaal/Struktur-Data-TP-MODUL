#include "Tree.h"

int main() {
    int x[9] = {5, 3, 9, 10, 4, 7, 1, 8, 6};

    cout << "======================================================" << endl;
    for (int i = 0; i < 9; i++) {
        cout << x[i] << " ";
    }
    cout << endl;

    BinTree tree;
    root(tree) = NULL;

    for (int i = 0; i < 9; i++) {
        adr newNode = newNode_103012300239(x[i]);
        insertNode_103012300239(root(tree), newNode);
    }

    cout << "\nPre Order:\t";
    printPreOrder_103012300239(root(tree));
    cout << endl;

    cout << "\nDescendant of Node 9:\t";
    printDescendant_103012300239(root(tree), 9);
    cout << endl;

    cout << "\nSum of BST Info:\t" << sumNode_103012300239(root(tree));

    cout << "\nNumber of Leaves:\t" << countLeaves_103012300239(root(tree));

    cout << "\nHeight of Tree:\t\t" << heightTree_103012300239(root(tree)) << endl;

    cout << "======================================================" << endl;
    return 0;
}
