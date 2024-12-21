#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;

typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};
struct List {
    address first;
};

void createList(List &L);
address allocate(infotype x);
void insertFirst(List &L, address P);
void printInfo(List L);
void insertLast(List &L, address P);
void insertAfter(List &L, address prec, address P);
void deleteLast(List &L, address &P);
void deleteAfter(List &L, address prec, address P);
