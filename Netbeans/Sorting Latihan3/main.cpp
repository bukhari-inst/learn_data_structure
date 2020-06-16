/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on October 18, 2019, 10:34 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int array[5];
    int length = 5;
    int i, j, d;
    int tmp, flag;

    //input
    for (i = 0; i < length; i++) {
        cout << "Masukkan Data: ";
        cin >> array[i];
    }
    d = length;
    flag = 1;

    flag = 1;
    while (flag || d > 1) {
        flag = 0;
        d = (d + 1) / 2;
        for (i = 0; i < (length - d); i++) {
            if (array[i + d] > array[i]) {
                tmp = array[i + d];
                array[i + d] = array[i];
                array [i] = tmp;
                flag = 1;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        cout << array[i];
    }
    return 0;
}


