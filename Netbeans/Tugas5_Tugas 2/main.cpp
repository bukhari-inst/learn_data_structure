/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on October 31, 2019, 8:29 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
//#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>

using namespace std;

/*
 * 
 */

int data[100];
int benar = 0, i, banyak, metode;
int a, b = 0;
int awal, akhir, tengah, pos, cari, posisi;
int temp;
char urutkan;
char tampil;

int binary() {
    while (awal <= akhir && benar == 0) {
        tengah = (awal + akhir) / 2;
        if (data[tengah] == cari) {
            benar = 1;
            break;
        } else if (data[tengah] == cari) {
            awal = tengah + 1;

        } else {
            akhir = tengah - 1;

        }
    }
    return 0;
}

int interpolation() {

    awal < 100;
    akhir = 100;
    do {
        posisi = (float) ((cari - data[awal]) / (data[akhir] - data[awal]))*(akhir - awal) + awal;

        pos = floor(posisi);

        if (data[pos] == cari) {
            benar = 1; //ditemukan
            break;
        }

        if (data[pos] > cari) {
            akhir = pos - 1;
        } else if (data[pos] < cari) {
            awal = pos + 1;
        }
    } while (cari >= data[awal] && cari <= data[akhir]);
    return 0;
}

main() {
    cout << endl;

    cout << "Masukkan jumlah data : ";
    cin>>banyak;
    cout << endl;
    cout << "------------------------------------" << endl;
    cout << "Tampilkan Data [Y/T] : ";
    cin>>tampil;
    cout << endl;
    cout << "-------------------------------------" << endl;

    if (tampil == 'Y' || tampil == 'y') {
        for (int j = 0; j < banyak; j++) {
            data[j] = rand() % banyak;
            cout << " " << data[j] << " ";
        }
    } else {

    }
    cout << endl << endl;

    cout << "\n\nUrutkan data [Y/T] : ";
    cin>>urutkan;
    cout << endl;

    if (urutkan == 'Y' || urutkan == 'y') {
        for (int ii = 0; ii < banyak; ii++) {
            if (data[ii] >= data[ii + 1]) {
                temp = data[ii];
                data[ii] = data[ii + 1];
                data[ii + 1] = temp;
                metode = 1;
            }
        }
    } else {
        metode = 0;
    }
    cout << endl;
    cout << "Masukkan data yang akan dicari : ";
    cin>>cari;
    cout << endl << endl;
    if (metode != 0) {

        cout << "Pilih metode pencarian : " << endl;
        cout << "-------------------------" << endl;
        cout << "1 Binary               " << endl;
        cout << "2 Interpolation        " << endl;

        cout << "Pilihan metode : ";
        cin>>metode;
    }

    if (metode == 0) {
        for (i = 0; i < banyak; i++) {
            if (data[i] == cari) {
                benar = 1;
                break;
            }
        }
    } else if (metode == 1) {
        binary();
    } else if (metode == 2) {
        interpolation();
    }
    if (benar == 1) cout << "Data Ditemukan ";
    else cout << "Data Ditemukan ";
    return 0;
}

