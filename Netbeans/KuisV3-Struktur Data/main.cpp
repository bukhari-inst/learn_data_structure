/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on September 28, 2019, 1:02 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int input, a, b, data = 0;

    cin >> input;
    cout << endl;

    for (int i = 0; i < input; i++) {

        cin >> a;
        data += a;
    }
    for (int j = 0; j < input; j++) {

        cin >> b;
        data += b;
    }

    cout << input*data;
    return 0;
}




