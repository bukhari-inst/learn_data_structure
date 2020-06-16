/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on October 31, 2019, 8:08 PM
 */

#include <stdio.h>
#include <iostream>  
#include <stdlib.h>
#include <string.h>
#include <math.h>

using namespace std;

/*
 * 
 */

int data[100], data2[100], n = 0;
bool u = true;

void SequentialSearch() {
    int i, cari, benar = 0;

    std::cout << std::endl;
    std::cout << "Inputkan data yang dicari : ";

    std::cin>> cari;

    for (i = 0; i < n; i++) {
        if (data[i] == cari) {
            benar = 1;
            break;
        }
    }
    if (benar == 1) {
        std::cout << "Data yang anda cari ditemukan pada index ke- " << i << std::endl;
    } else {
        std::cout << "Data yang anda cari tidak ditemukan!" << std::endl;
        std::cout << std::endl;
    }
}

void BinarySearch() {
    int temp, awal, tengah, akhir, cari, a, i, benar = 0;
    awal = 0;
    akhir = 9;

    std::cout << std::endl;
    std::cout << "Inputkan data yang anda cari : ";
    std::cin>>cari;

    while (awal <= akhir && benar == 0) {
        tengah = (awal + akhir) / 2;
        if (data2[tengah] == cari) {
            benar = 1;
            break;
        } else if (data2[tengah] < cari) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }
    if (benar == 1) {
        std::cout << "Data ditemukan!";
    } else {
        std::cout << "Data tidak ditemukan!";
    }
}

void InterpolationSearch() {
    int data[100];
    int rendah, tinggi, pos, cari, benar = 0;
    float posisi;
    rendah < 100;
    tinggi = 100;

    std::cout << std::endl;
    std::cout << "Inputkan data yang anda cari : ";
    std::cin>> cari;

    do {
        posisi = (float) ((cari - data2[rendah]) / (data2[tinggi] - data2[rendah]))*(tinggi - rendah) + rendah;

        pos = floor(posisi);

        if (data2[pos] == cari) {
            benar = 1; //ditemukan
            break;
        }

        if (data2[pos] > cari) {
            tinggi = pos - 1;
        } else if (data2[pos] < cari) {
            rendah = pos + 1;
        }
    } while (cari >= data2[rendah] && cari <= data2[tinggi]);
    if (benar == 1) {
        std::cout << "Data ditemukan!" << std::endl;
    } else {
        std::cout << "Data tidak ditemukan!" << std::endl;
    }
}

void Input() //input data
{


    std::cout << "Inputkan jumlah data: ";
    std::cin>> n;

    for (int i = 0; i < n; i++) {
        std::cout << std::endl;
        std::cout << "Inputkan data ke- " << i + 1 << " : ";
        std::cin >> data[i];
        data2[i] = data[i];
    }
}

int main(int argc, char** argv) {

    int pilih, i, a, b;


    std::cout << "      Menu Searching     " << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << " 1. Sequential Search       " << std::endl;
    std::cout << " 2. Binary Search           " << std::endl;
    std::cout << " 3. Interpolation Search    " << std::endl;
    std::cout << "-----------------------------" << std::endl;

    std::cout << "Inputkan pilihan Anda: ";
    std::cin>>pilih;
    std::cout << std::endl;

    Input();
    for (a = 0; a <= 4; a++) {
        data2[a] = data[a];
    }
    for (a = 0; a < 4; a++) {
        for (i = a + 1; i <= 4; i++) {
            if (data2[i] < data2[a]) {
                b = data2[i];
                data2[i] = data2[a];
                data2[a] = b;
            }
        }
    }

    switch (pilih) {
        case 1:SequentialSearch();
            break;
        case 2:BinarySearch();
            break;
        case 3:InterpolationSearch();
            break;
        default:
            break;
    }

    return 0;
}


