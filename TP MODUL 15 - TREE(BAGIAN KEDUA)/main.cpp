#include "Tree.h"
#include <iostream>

using namespace std;

int main(){
    BinTree Tree;
    root(Tree) = NULL;

    int x[9] = {8, 6, 7, 15, 17, 12, 4, 13, 9};
    for (int i = 0; i < 9; i++){
        adrNode newNode = newNode_103012300239(x[i]);
        insertNode_103012300239(root(Tree), newNode);
    }

    printInOrder(root(Tree));
    cout << endl;

    int h[9] = {8, 9, 12, 13, 15, 17, 7, 6, 4};
    for (int i = 0; i < 9; i++){
        cout << "\nHapus " << h[i] << " : ";
        adrNode newNode = newNode_103012300239(h[i]);
        deleteNode_103012300239(root(Tree), newNode);
        printInOrder(root(Tree));
        cout << endl;
    }


    return 0;
}
