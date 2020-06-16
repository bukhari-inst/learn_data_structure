/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on October 3, 2019, 9:29 PM
 */

#include <iostream>
#include <math.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int sisi1, sisi2, sisi3, jml = 0;
    int cocok = 0;
    float x, y, z;

    for (int a = 0; a < 2; a++) {
        cout << "Masukkan Nilai : \n";
        cout << "X = ";
        cin>>x;
        cout << "Y = ";
        cin>>y;
        cout << "Z = ";
        cin>>z;

        sisi1 = sqrt(pow(z, 2) - pow(y, 2));
        sisi2 = sqrt(pow(z, 2) - pow(x, 2));
        sisi3 = sqrt(pow(y, 2) + pow(x, 2));


        if (x == sisi1 && y == sisi2 && z == sisi3) {
            cout << "\nDapat" << endl;
        } else {
            cout << "\nTidak dapat" << endl;
        }
        cout << endl;
    }
    return 0;
}








