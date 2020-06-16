/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on September 8, 2019, 12:25 PM
 */

#include<iostream>
#define Nul NULL
#define data(P) P->isidata
#define satu

using namespace std;

typedef int A;
typedef struct b *alamat;

typedef struct b {
    A isidata;
    alamat next;
} i;
typedef alamat daftar;

void pointer(daftar *m) {
    satu(*m) = NULL;
}

daftar Nodebaru(int m) {
    daftar a;
    a = (daftar) malloc(sizeof (i));
    if (a != NULL) {
        a->isidata = m;
        a->next = NULL;
    }
    return a;
}

void pointer(daftar *m, daftar t, daftar p) {
    if (p == NULL) {
        t->next = *m;
        *m = t;
    } else {
        t->next = p->next;
        p->next = t;
    }
}

void tampilpointer(daftar m) {
    daftar s;
    for (s = m; s != Nul; s = s->next) {
        cout << " " << data(s) << " -->";
    }
    cout << " NULL" << endl;
}

int main() {
    daftar i;
    daftar a;
    int j, n, nilai;
    pointer(&i);
    cout << "================================= \n";
    cout << "inputkan Banyak Data = ";
    cin>>n;
    cout << endl;
    for (j = 1; j <= n; j++) {
        cout << "Inputkan Data ke-" << j << " = ";
        cin>>nilai;
        a = Nodebaru(nilai);
        pointer(&i, a, NULL);
    }
    tampilpointer(i);
    return 0;
}




