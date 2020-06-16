/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on September 16, 2019, 9:47 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int input, p, l, t, max, maks, min = 0;

    cout << "masukkan jumlah balok : ";
    cin >> input;
    cout << endl;
    int data[input];

    for (int i = 0; i < input; i++) {
        cout << "masukkan Ukuran balok ke-" << i + 1 << " : " << endl;
        cin >> p;
        cin >> l;
        cin >> t;
        data[i] = p + l + t;
    }
    maks = data[0];
    for (int i = 0; i < input; i++) {
        if (data[i] > maks) {
            max = data[i];
            maks = max - 1;
        }
    }
    cout << "Tinggi Maksimum adalah : " << maks << endl;

    min = data[0];
    for (int i = 0; i < input; i++) {
        if (data[i] < min) {
            min = data[i];
        }
    }
    cout << "Tinggi Minimum adalah : " << min << endl;

    return 0;
}

