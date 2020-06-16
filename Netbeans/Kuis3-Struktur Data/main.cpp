/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on September 16, 2019, 9:48 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    
    int input,A,B,total = 0; //deklarasi variabel
  
  cout << "Inputkan jumlah perwakilan : ";
  
  cin >> input;  cout << endl; //input untuk jumlah perwakilan
  int data[input];
  
  //menggunakan perulangan for untuk input 
  for(int i = 0; i<input; i++){
      cout << "Inputkan Mahasiswa A" << i+1 << " : ";
      cin >> A;
      cout << "Inputkan Mahasiswa B" << i+1 << " : ";
      cin >> B;
      data[i] = input*(A+B);
  }
  
  cout << endl;
  
  for(int i = 0; i<input; i++){
      total += data [i];
  }
    
   cout << "Total Waktu : " << total << endl;

    return 0;
}







