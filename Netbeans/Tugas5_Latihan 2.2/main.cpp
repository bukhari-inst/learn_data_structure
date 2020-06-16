/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on October 31, 2019, 8:20 PM
 */

#include <cstdlib>
#include<iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int a, b, data[10][10], baris, kolom, cari, i;
    std::cout << std::endl;

    std::cout << "      Inputkan baris array : ";
    std::cin>>baris;
    std::cout << std::endl;
    std::cout << "      Inputkan kolom array : ";
    std::cin>>kolom;
    std::cout << std::endl;

    for (a = 0; a < baris; a++) {
        for (b = 0; b < kolom; b++) {
            std::cout << "Inputkan angka pada indeks [" << a << "][" << b << "] = ";
            std::cin >> data[a][b];
            std::cout << std::endl;
        }
    }

    std::cout << "Data array yang anda inputkan adalah: " << std::endl;
    for (a = 0; a < baris; a++) {
        for (b = 0; b < kolom; b++)
            cout << setw(3) << data[a][b] << " ";
        std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Inputkan data yang dicari : ";
    std::cin>>cari;
    std::cout << std::endl;
    ;
    i = 0;
    for (a = 0; a < baris; a++) {
        for (b = 0; b < kolom; b++) {
            if (cari == data[a][b]) {
                std::cout << "Data ditemukan pada indeks ke- [" << a << "][" << b << "]\n";
                i++;
            }
        }
    }
    if (i == 0)
        std::cout << "Data tidak ditemukan!" << std::endl;
    return 0;
}

