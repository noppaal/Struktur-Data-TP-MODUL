#include "Tree.h"

adr newNode_103012300239(infotype x){
/* mengembalikan alamat dari suatu node hasil alokasi, dengan info adalah x
dan left dan right adalah NULL */
    adr p = new Node;
    info(p) = x;
    left(p) = NULL;
    right(p) = NULL;
    return p;
};

adr findNode_103012300239(adr root, infotype x){
/* mengembalikan alamat dari node yang memiliki info sama dengan x, atau NULL
apabila tidak ditemukan, Catatan: implementasikan secara REKURSIF */
    if (root == NULL){
        return NULL;
    } else if (x == info(root)){
        return root;
    } else if (x < info(root)){
        return findNode_103012300239(left(root), x);
    } else {
        return findNode_103012300239(right(root), x);
    }
};

void insertNode_103012300239(adr &root, adr p){
/* I.S. terdefinisi root dari BST (mungkin NULL), dan pointer p yang berisi
alamat node yang mau ditambahkan pada BST
 F.S. elemen yang ditunjuk oleh p ditambahkan sebagai node dari BST
Catatan: implementasikan secara REKURSIF */
    if (root == NULL){
        root = p;
    } else if (info(p) < info(root)){
        insertNode_103012300239(left(root), p);
    } else {
        insertNode_103012300239(right(root), p);
    }
};

void printPreOrder_103012300239(adr root){
/* I.S. terdefinisi root dari BST (mungkin NULL)
 F.S. menampilkan node dari BST secara Preorder atau dengan urutan root, left
dan right
Catatan: implementasikan secara REKURSIF */
    if (root != NULL){
        cout << info(root) << " ";
        printPreOrder_103012300239(left(root));
        printPreOrder_103012300239(right(root));
    }
};

void printDescendant_103012300239(adr root, infotype x){
/* I.S. terdefinisi suatu root dari BST (mungkin NULL), dan infotype x
 F.S. menampilkan subtree atau keturunan dari node yang memiliki info x
Catatan: implementasikan secara REKURSIF */
    adr p = findNode_103012300239(root, x);
    if (p == NULL){
        cout << "Node" << x << "tidak ditemukan" << endl;
    } else {
        if (left(p) != NULL || right(p) != NULL){
            printPreOrder_103012300239(left(p));
            printPreOrder_103012300239(right(p));
        } else {
            cout << "Node " << x << " Tidak memiliki keturunan" << endl;
        }
    }
};

int sumNode_103012300239(adr root){
/* mengembalikan hasil penjumlahan semua info node yang terdapat pada BST
Catatan: implementasikan secara REKURSIF */
    if (root == NULL){
        return 0;
    } else {
        return info(root) + sumNode_103012300239(left(root)) + sumNode_103012300239(right(root));
    }
};

int countLeaves_103012300239(adr root){
/* mengembalikan banyaknya daun atau node yang tidak memiliki anak dari BST
Catatan: implementasikan secara REKURSIF */
    if (root == NULL){
        return 0;
    } else if (left(root) == NULL && right(root) == NULL){
        return 1;
    } else {
        return countLeaves_103012300239(left(root)) + countLeaves_103012300239(right(root));
    }
};

int heightTree_103012300239(adr root){
/* mengembalikan banyaknya edge dari suatu root menuju daun yang terjauh.
Catatan: implementasikan secara REKURSIF */
    if (root == NULL){
        return -1;
    } else {
        int leftHeight = heightTree_103012300239(left(root));
        int rightHeight = heightTree_103012300239(right(root));

        if (leftHeight > rightHeight){
            return 1 + leftHeight;
        } else {
            return 1 + rightHeight;
        }
    }
};
