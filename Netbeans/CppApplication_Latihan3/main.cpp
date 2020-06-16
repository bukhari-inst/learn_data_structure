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

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int n;
    string nama1, nama2;
    cin >> n >> nama1 >> nama2;
    cout << endl;
    nama1 += nama2;
    int leng = nama1.length();
    for (int a = leng - n;; a -= n) {
        int b = n;
        if (a < 0) {
            b = n + a;
            a = 0;
        }
        co
        for (int z = b - 1; z >= 0; --z) {
            cout << nama1[a + z] << ' ';
        }
        if (b == 0) break;
    }
    return 0;
}

