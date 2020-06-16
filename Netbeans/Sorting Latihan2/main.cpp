/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on October 18, 2019, 10:33 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
//Selection Sorting

void SelectionSort(int Array [], const int Size) {
    int i, j, small, temp;
    for (i = 0; i < Size; i++) {
        small = i;
        for (j = 0; j < Size; j++) {
            if (Array [j] > Array[small]) {//untkpembanding
                small = j;
                temp = Array [i];
                Array [i] = Array[small];
                Array[small] = temp;
            }
        }
    }
}

int main(int argc, char** argv) {

    int NumList [10] = {12, 29, 56, 4, 31, 9, 17, 19, 48, 3};
    int temp;
    cout << "Data sebelum diurutkan: \n";
    for (int d = 0; d < 10; d++) {
        cout << setw(3) << NumList[d];
    }
    cout << "\n\n";
    SelectionSort(NumList, 10);
    cout << "Data setelah diurutkan: \n";
    for (int a = 0; a < 10; a++) {
        cout << setw(3) << NumList[a];
    }
    return 0;
}

