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

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int n,p,l,t,maks,min = 0;
  
  cout << "masukkan jumlah data : ";
  cin >> n;  cout << endl;
  int data[n];
  
  for(int i = 0; i<n; i++){
      cout << "masukkan data ke-" << i+1 << " : "<<endl;
      cin >> p;
      cin >> l;
      cin >> t;
      data[i] = p+l+t;
  }
 maks = data[0]; 
  for(int i = 0; i<n; i++){
      if(data[i] > maks){
          maks = data[i];
	  }
  }cout << "data terbesar adalah : " << maks-1 << endl;
  
  min = data[0];
  for(int i = 0; i<n; i++){
      if(data[i] < min){
          min = data[i];
	  }
  }
  cout << "data terkecil adalah : " << min << endl;

    return 0;
}



