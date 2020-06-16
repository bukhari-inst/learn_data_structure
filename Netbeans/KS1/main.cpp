/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on September 15, 2019, 5:28 PM
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int tambah, kali, kuadrat;
    int sesuai = 0;
    float a, b, c;
    float x = 12, y = 60, z = 50;

    for (a = 1; a = float(x / 3) - 1; a++) {
        b = a + 1;
        c = b + 1;

        while (b) {
            c = x - (a + b);
            tambah = a + b + c;
            kali = a * b*c;
            kuadrat = a * a + b * b + c*c;

            if (x == tambah && y == kali && z == kuadrat) {
                cout << a << " " << b << " " << c << endl;
                sesuai = 1;
                break;
            } else {
                cout << "gak ada bro..";
                break;
            }
            b++;
        }
        if (sesuai = 1);
        break;
    }//if(sesuai!=1){ cout<<"gak ada..";
    //}

    return 0;
}




