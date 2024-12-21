#include "Tree.h"
adrNode newNode_103012300239(infotype x){
    adrNode p = new Node;
    info(p) = x;
    left(p) = NULL;
    right(p) = NULL;
    return p;
};
void insertNode_103012300239(adrNode &root, adrNode p){
    if (root == NULL){
        root = p;
    } else if (info(root) > info(p)){
        insertNode_103012300239(left(root), p);
    } else {
        insertNode_103012300239(right(root), p);
    }
};
void deleteNode_103012300239(adrNode &root, adrNode &p){
    if (root == NULL){
        cout << "Root kosong" << endl;
    } else {
        if (info(p) < info(root)){
            deleteNode_103012300239(left(root), p);
        } else if (info(p) > info(root)){
            deleteNode_103012300239(right(root), p);
        } else {
            if (left(root) == NULL && right(root) == NULL) {
                delete root;
                root = NULL;
            } else if (left(root) == NULL) {
                adrNode temp = root;
                root = right(root);
                delete temp;
            } else if (right(root) == NULL) {
                adrNode temp = root;
                root = left(root);
                delete temp;
            } else {
                adrNode temp = findMin(right(root));
                info(root) = info(temp);
                deleteNode_103012300239(right(root), temp);
            }
        }
    }
};
void printInOrder(adrNode root){
    if (root != NULL){
        printInOrder(left(root));
        cout << info(root) << " ";
        printInOrder(right(root));
    }
};
adrNode findMin(adrNode root){
    if (root == NULL){
        return NULL;
    } else if (left(root) == NULL){
        return root;
    } else {
        return findMin(left(root));
    }
};
