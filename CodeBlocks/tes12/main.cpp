/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on August 26, 2019, 1:28 PM
 */

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

/*
 *
 */
int main(int argc, char** argv) {
    int a[100],i,n,jumlah=0,Xi,totXi=0;
   float rata,d;
   cout<<" Masukkan jumlah data : ";
   cin>>n;
   for(i=0;i<n;i++)
   {
    cout<<" Masukkan data ke-"<<i<<" = ";
      cin>>a[i];
      jumlah = jumlah + a[i];
   }
   rata = jumlah / n;
   cout<<" d = sqrt (Xi - X)^2 / n-1";
   for(i=0;i<n;i++)
   {
    Xi = a[i] - rata;
      totXi = totXi + (Xi*Xi);
   }
   d = sqrt(totXi / (n-1));
   cout<<"\n Simpangan baku : "<<d;
   getch();
    return 0;
}


