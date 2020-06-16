/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on October 14, 2019, 7:30 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    string inputwarnabalon, v;
    int balon = 0;

    cout << "Masukkan Jumlah Balon :" << endl;
    cout << endl;
    cin >> balon;
    if (balon >= 0 && balon <= 10) {

    } else {
        cout << "Jumlah balon tidak boleh lebih dari 10!";
        return 0;
    }
    string data [balon];

    for (int a = 0; a < balon; a++) {
        cout << "Inputkan warna balon: ";
        cin>> inputwarnabalon;
        data [a] = inputwarnabalon;
    }
    cout << endl;

    cout << "Inputkan warna balon meletus : ";
    cin >> v;

    cout << endl;

    cout << "balonku ada " << balon + 1 << "," << " rupa2 warnanya " << endl;
    for (int b = 0; b < balon; b++) {
        cout << data[b] << " ";
    }
    cout << v;

    cout << endl;

    cout << "Meletus balon " << v << " dor, hatiku sangat kacau ";

    cout << endl;

    cout << "balon ku tinggal " << balon << ", rupa2 warnanya ";
    for (int b = 0; b < balon; b++) {
        cout << data[b] << " ";
    }
    cout << "kupegang erat-erat." << endl;
    return 0;
}

