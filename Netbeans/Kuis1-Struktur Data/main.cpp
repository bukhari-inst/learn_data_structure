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
#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int tambah, kali, kuadrat;
    int cocok = 0;
    int a, b, c, x, y, z;
    cout << "inputkan x,y,z" << endl;
    cout << endl;
    cin >> x >> y>> z;
    cout << endl;

    /*7,8,9:24,504,194
    4,5,6:15,120,77
    3,4,5:12,60,50
    4,6,8:18,192,116
     4,7,10:21,280,165
     8,12,16:36,1536,464*/

    for (a = 1; a <= floor(x / 3) - 1; ++a) {
        b = a + 1;
        c = b + 1;

        while (b < c) {
            c = x - (a + b);
            tambah = a + b + c;
            kali = a * b * c;
            kuadrat = a * a + b * b + c*c;

            if (x == tambah && y == kali && z == kuadrat) {
                cout << " a = " << a << "\n" << " " << "b = " << b << "\n" << " " << "c = " << c << endl;
                cocok = 1;
                break;
            }
            b++;
        }
        if (cocok == 1)break;
    }
    if (cocok = 0)cout << "gak ada bro..";
    return 0;
}
