/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on October 7, 2019, 9:47 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int warnabalon(string balon1, string balon2) {

    if (balon1.compare(balon2) == 0)
        return 1;
    return 0;
}

int main(int argc, char** argv) {
    int N;
    cout << "Inputkan jumlah balon : ";
            cin >> N;
    cout << endl;

    string W[10];
    string V;

    if (N >= 1 && N <= 10) {
        N -= 1;
        W[N];
    } else {
        cout << "Jumlah balon tidak boleh lebih dari 10!";
        return 0;
    }


    for (int i = 0; i <= N; i++) {
        cout << "Inputkan warna balon : ";
        cin >> W[i];
    }
    cout << endl;

    cout << "Inputkan warna balon meletus : ";
    cin >> V;



    cout << "balonku ada " << N + 1
            << " rupa2 warnanya," << endl;
    
    for (int i = 0; i <= N; i++) {
        if (W[i] == "") {

        } else {
            cout << W[i] << ", ";
        }
    }
    cout << "Meletus Balon " << V << " dor, hatiku sangat kacau" << endl;



    for (int i = 0; i <= N; i++) {
        if (warnabalon(W[i], V)) {
            W[i] = "";
        }
    }

    cout << "Balonku Tinggal " << W[N].size() - 1 << ", rupa2 warnanya ";

    for (int i = 0; i <= N; i++) {
        if (W[i] == "") {

        } else {
            cout << W[i] << ", ";
        }
    }
   
    cout << endl << "ku pegang erat-erat";
}



