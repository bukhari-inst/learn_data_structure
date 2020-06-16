#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

// membuat Typedef Struct
typedef struct
 {
     char huruf;
     int angka;
 }Data;
 
int main()
{
  // deklarasi variabel
  int i, j, N;
  
 // input jumlah data
 cout<< "Inputkan Jumlah Data Yang Diinginkan!: ";
 cin >> N;
 
 // input data huruf & angka
 Data inputdata[N];
 for(i=0; i<N; i++)
 {
    cout << "Masukkan data ke- " << i + 1;
    cout << endl;
    
    cout << "Masukan huruf : ";
    cin >> inputdata[i].huruf;
    
    cout << "Masukan angka : ";
    cin >> inputdata[i].angka;
    cout<<endl;
    
 }
 
 // output sebelum diurutkan
 cout<<"Data sebelum diurutkan:\n";
 for(i=0; i<N; i++)
 {
     cout<<"  "<<inputdata[i].huruf;
     cout<<"  "<<inputdata[i].angka<< "\n";
     cout<<endl;
 }
 
 // mengurutkan data
 int temp;
 for(j=0; j<N-1; j++)
 {
    for(i=j+1; i<N; i++)
    {
    if(inputdata[j].huruf > inputdata[i].huruf)
    {
        temp = inputdata[j].huruf;
        inputdata[j].huruf = inputdata[i].huruf;
        inputdata[i].huruf = temp;
        temp = inputdata[j].angka;
        inputdata[j].angka = inputdata[i].angka;
        inputdata[i].angka = temp;
    }
    }
 }
 
 // output setelah diurutkan
 cout<<"Data setelah diurutkan:\n";
 for(i=0; i<N; i++)
 {
     cout<<"  "<<inputdata[i].huruf;
     cout<<"  "<<inputdata[i].angka<< "\n";
 }
 return 0;
}
