#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include <iostream>
using namespace std;

#define root(L) L.root
#define left(P) P->left
#define right(P) P->right
#define info(P) P->info

typedef int infotype;
typedef struct Node *adr;

struct Node {
    infotype info;
    adr left;
    adr right;
};

struct BinTree {
    adr root;
};

adr newNode_103012300239(infotype x);
adr findNode_103012300239(adr root, infotype x);
void insertNode_103012300239(adr &root, adr p);
void printPreOrder_103012300239(adr root);
void printDescendant_103012300239(adr root, infotype x);
int sumNode_103012300239(adr root);
int countLeaves_103012300239(adr root);
int heightTree_103012300239(adr root);

#endif // TREE_H_INCLUDED
