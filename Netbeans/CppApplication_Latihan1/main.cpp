/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on October 3, 2019, 9:28 PM
 */

#include <iostream>

using namespace std;

/* 
 * 
 */
int main(int argc, char** argv) {

    string inputwarnabalon, data2, data3, v;
    int balon = 0;
    string warnabalon[10] = {"merah", "kuning", "hijau", "kelabu", "biru", "hitam", "nila", "ungu", "magenta", "oranye"};

    cout << "Masukkan Jumlah Balon :" << endl;
    cout << endl;
    cin >> balon;
    string data [balon];

        for (int a = 0; a < balon; a++) {
            cout << "Inputkan warna balon: " << endl;
            cin>> inputwarnabalon;
            data [a] = inputwarnabalon;
        }
        cout << endl;

        cout << "Inputkan warna balon meletus : ";
        cin >> v;

        cout << endl;

        bool salah = false;
        for (int k = 0; k < balon; k++) {
            if (inputwarnabalon == warnabalon[k]) {
                salah = true;
                break;
            }
        }
        if (salah) {
            cout << "balonku ada " << balon + 1 << "," << " rupa2 warnanya " << endl;
            for (int b = 0; b < balon; b++) {
                cout << data[b] << " ";
            }
            cout << v;
        }

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
























