/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on October 31, 2019, 8:28 PM
 */

#include <cstdlib>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <iostream>


using namespace std;

/*
 * 
 */

void sequentialsearch(char data[], int cari, const int size);

int main(int argc, char** argv) {

    char kata[100], data1[50], data2[50], data3[50], cari;
    int i, vokal = 0, numerik = 0, konsonan = 0, size, jml;

    cout << endl;
    cout << "PROGRAM KATA      " << endl;
    cout << endl;
    cout << "Tuliskan Kalimat: "<<endl;
    gets(kata);

    size = strlen(kata);

    for (int a = 0; kata[a]; a++) {
        if (toupper(kata[a]) == 'A' || toupper(kata[a]) == 'I' || toupper(kata[a]) == 'U' || toupper(kata[a]) == 'E' || toupper(kata[a]) == 'O') {
            data1[vokal] = kata[a];
            vokal++;
        } else if (isdigit(kata[a])) {
            data2[numerik] = kata[a];
            numerik++;
        } else if (isspace(kata[a])) {
        } else {
            data3[konsonan] = kata[a];
            konsonan++;
        }
    }
    
    cout << "Huruf Vokal= ";
    for (i = 0; i < vokal; i++) {
        cout << data1[i]<<" ";
    }
    cout << endl;

    cout << "Numerik = ", numerik;
    for (i = 0; i < numerik; i++) {
        cout << data2[i]<<" ";
    }
    cout << endl;

    cout << "Huruf Konsonan :";
    for (i = 0; i < konsonan; i++) {
        cout << data3[i]<<" ";
    }
    cout << endl;

    jml = vokal + numerik + konsonan;
    cout << "Total Kalimat = " << jml;
    cout << endl;

    cout << "Data Yang Ingin Dicari : ";

    cin>> cari;

    sequentialsearch(kata, cari, size);

    return 0;
}

void sequentialsearch(char data[], int cari, const int size) {
    int i, benar = 0;

    for (i = 0; i < size; i++) {
        if (data[i] == cari) {
            benar = 1;
            cout << endl;
            cout << "Data ada pada index ke- " << i<<" ";
        }
    }
    cout << endl;
    if (benar != 1) {
        cout << endl;
        cout << "Data tidak ditemukan !!!";
    }
    cout << endl;
}

