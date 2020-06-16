/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on October 19, 2019, 5:41 AM
 */

#include <iostream>
#include <stdio.h>


using namespace std;

/*
 * 
 */

typedef struct {
    char huruf;
    int angka;
} Data;

Data data [10];

int main(int argc, char** argv) {

    int N = 5;
    for (int i = 0; i < N; i++) {
        
        cout <<" Masukan huruf ke - " << i+1 << ": ";
        cin >> data[i].huruf;
        cout << endl;
        cout <<" Masukan angka ke - " << i+1 << ": ";
        cin >> data[i].angka;
        cout << endl;
    }
    
    cout << ("Data sebelum diurutkan\n");
    for (int i = 0; i < N; i++) {
        printf("  %c", data[i].huruf);
        printf("  %i\n", data[i].angka);
    }
    
    int temp;
    for (int j = 0; j < N - 1; j++) {
        for (int i = j + 1; i < N; i++) {


            if (data[j].huruf > data[i].huruf) {
                temp = data[j].huruf;
                data[j].huruf = data[i].huruf;
                data[i].huruf = temp;
                temp = data[j].angka;
                data[j].angka = data[i].angka;
                data[i].angka = temp;
            }
        }
    }

    cout << ("Data setelah diurutkan\n");
    for (int i = 0; i < N; i++) {
        printf("  %c", data[i].huruf);
        printf("  %i\n", data[i].angka);
    }

    return 0;
}



