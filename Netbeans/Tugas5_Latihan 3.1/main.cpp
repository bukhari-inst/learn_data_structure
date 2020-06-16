/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on October 31, 2019, 8:25 PM
 */

#include <cstdlib>
#include<stdio.h>
#include<iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int data[100];
    int i, cari, n, jumlah = 0;
    cout << endl;
    cout << "Masukkan jumlah array = ";
    cin>>n;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << "Masukkan data ke [" << j << "] = ";
        cin >> data[j];
        cout << endl;
    }

    cout << "Masukkan data yang dicari : ";
    cin>>cari;
    cout << endl;

    std::cout << "Data ditemukan pada indeks ";
    for (i = 0; i < n; i++) {
        if (data[i] == cari) {
            std::cout << "ke- " << i << std::endl;
            jumlah = jumlah + 1;
        }
    }
    cout << endl;
    cout << "Data ditemukan sebanyak " << jumlah << " data.";
    cout << endl;
    return 0;
}

