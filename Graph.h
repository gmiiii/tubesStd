#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
using namespace std;


typedef int infotype_anak;
typedef int infotype_induk;

typedef struct elemen_list_anak* adr_anak;

struct elemen_list_anak {
    infotype_anak info;
    adr_anak next;
};

struct list_anak {
    adr_anak first;
};

typedef struct elemen_list_induk* adr_induk;

struct elemen_list_induk {
    infotype_induk info;
    adr_anak lanak; 
    adr_induk next;
};


struct list_induk {
    adr_induk first;
};


void createListInduk(list_induk& L);
void createListAnak(list_anak& L);


adr_induk alokasiInduk(infotype_induk X);
adr_anak alokasiAnak(infotype_anak X);


void insertFirstInduk(list_induk &L, adr_induk P);
void insertLastInduk(list_induk &L, adr_induk P);
void insertAfterInduk(list_induk &L, adr_induk P, adr_induk Prec);

void insertFirstAnak(list_anak &L, adr_anak P);
void insertLastAnak(list_anak &L, adr_anak P);
void insertAfterAnak(list_anak &L, adr_anak P, adr_anak Prec);

void deleteLastInduk(list_induk &L, adr_induk &P);
void deleteAfterInduk(list_induk &L, adr_induk &P, adr_induk Prec);
void deleteLastAnak(list_anak &L, adr_anak &P);
void deleteAfterAnak(list_anak &L, adr_anak &P, adr_anak Prec);

adr_induk FindInduk(list_induk L, infotype_induk X);
adr_anak FindAnak(list_anak L, infotype_anak X);

void PrintInfoInduk(list_induk L);
void PrintInfoAnak(list_anak L);

#endif
