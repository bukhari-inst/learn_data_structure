/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on October 31, 2019, 8:26 PM
 */

#include <cstdlib>
#include<iostream>
#include <stdlib.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int n, data[50], cari, a, i, ganjil, genap, data1[50], data2[50];
    cout << endl;
    cout << "Inputkan jumlah data :";
    cin>>n;
    cout << endl;
    cout << "Data random : \n";
    cout << endl;
    for (a = 0; a < n; a++) {
        data[a] = rand();
        cout << endl;
        cout << data[a] << endl;
        cout << endl;
    }
    ganjil = 0;
    genap = 0;

    for (a = 0; a < n; a++) {
        if (data[a] % 2 == 0) {
            genap++;
            data2[genap] = data[a];
        } else {
            ganjil++;
            data1[ganjil] = data[a];
        }
    }

    cout << endl;
    cout << "Data genap ada: " << genap << " :"<<endl;
    for (a = 1; a <= genap; a++)
        cout << data2[a] << endl;
    cout << endl;
    cout << "Data ganjil ada: " << ganjil << " :"<<endl;
    for (a = 1; a <= ganjil; a++)
        cout << data1[a] << endl;
    return 0;
}

