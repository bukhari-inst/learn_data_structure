/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on October 31, 2019, 8:12 PM
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
    int i, cari, n;
    std::cout << "Masukkan jumlah data = ";
    std::cin>>n;
    std::cout << std::endl;
    ;
    for (int j = 0; j < n; j++) {
        std::cout << "Masukkan data ke [" << j << "] = ";
        std::cin >> data[j];
        std::cout << std::endl;
    }

    std::cout << "Masukkan data yang ingin dicari : ";
    std::cin>> cari;
    std::cout << std::endl;

    std::cout << "Data ditemukan pada indeks ";
    for (i = 0; i < n; i++) {
        if (data[i] == cari)
            std::cout << "ke- " << i << " ";
    }
    return 0;
}

