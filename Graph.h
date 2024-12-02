#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
using namespace std;

struct infotypeAnak{
    double km;
    string dest;
};

typedef string infotypeInduk;

typedef struct elmListAnak *adrAnak;
typedef struct elmListInduk *adrInduk;

struct elmListAnak {
    infotypeAnak info;
    adrAnak next;
};

struct listAnak {
    adrAnak first;
};

struct elmListInduk {
    infotypeInduk info;
    adrAnak lanak; 
    adrInduk next;
};

struct listInduk {
    adrInduk first;
};

//innit method
void createListInduk(listInduk &L);
void createListAnak(listAnak &L);

//allocate method
adrInduk alokasiInduk(infotypeInduk X);
adrAnak alokasiAnak(infotypeAnak X);

//deallocate method
adrInduk deAlokasiInduk(infotypeInduk X);
adrAnak deAlokasiAnak(infotypeAnak X);

//add method
void insertLastInduk(listInduk &L, adrInduk P);
void insertLastAnak(listAnak &L, adrAnak P);

//always return delete value on delete method
void deleteAfterInduk(listInduk &L, adrInduk &P, adrInduk Prec);
void deleteAfterAnak(listAnak &L, adrAnak &P, adrAnak Prec);

//search method
adrInduk findInduk(listInduk L, infotypeInduk X);
adrAnak findAnak(listAnak L, infotypeAnak X);

//find least km on child
adrAnak findFastest(listInduk L, string dari, string ke);

void PrintInfoInduk(listInduk L);
void PrintInfoAnak(listAnak L);

#endif
