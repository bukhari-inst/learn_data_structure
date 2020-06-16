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
int main() {

    int NumList [10] = {12, 29, 56, 4, 31, 9, 17, 19, 48, 3};
    int temp;
    cout << "Data Angka Sebelum Diurutkan : \n";
    for (int d = 0; d < 10; d++) {
        cout << setw(3) << NumList[d];
    }
    cout << "\n\n";
    for (int a = 0; a < 10; a++)
        for (int b = 0; b < 10; b++)
            if (NumList [b] >= NumList [b + 1]) {
                temp = NumList [b];
                NumList[b] = NumList [b + 1];
                NumList [b + 1] = temp;
            }
    cout << "Data setelah diurutkan: \n";
    for (int c = 1; c <= 10; c++)
        cout << setw(3) << NumList[c] << " ";
    cout << endl;
    return 0;
}

