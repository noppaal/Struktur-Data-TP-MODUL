#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include <iostream>
using namespace std;

#define root(L) L.root
#define left(P) P->left
#define right(P) P->right
#define info(P) P->info

typedef int infotype;
typedef struct Node *adrNode;

struct Node {
    infotype info;
    adrNode left;
    adrNode right;
};

struct BinTree {
    adrNode root;
};

adrNode newNode_103012300239(infotype x);
void insertNode_103012300239(adrNode &root, adrNode p);
void deleteNode_103012300239(adrNode &root, adrNode &p);
void printInOrder(adrNode root);
adrNode findMin(adrNode root);


#endif // TREE_H_INCLUDED
