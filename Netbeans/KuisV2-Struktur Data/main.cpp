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

    int input,
	maks=0,
	min=0, 
	jumlahBalok, 
	tinggiMaks, 
	tinggiMin;
	
	cout << "Jumlah Balok :";
	cin >> jumlahBalok;
	
	for(int a = 0; a < jumlahBalok; a++) {
			maks = 0;
			min = 1000;
		for(int b = 1; b <= 3; b++) {
			cout << "masukkan panjang sisi balok : " ;
				cin >> input;
				if(input > maks) maks = input;
				if(input < min) min = input;			
		}	
cout << endl;
tinggiMaks += maks;
tinggiMin += min;

	}
	cout << tinggiMaks << endl;
	cout << tinggiMin << endl;
    return 0;
}





