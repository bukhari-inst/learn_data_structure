#include <iostream>
#include <numeric>
#include <math.h>

using namespace std;

int totalpangkat (int a[], int n){
    int jumlah = 0;
    return accumulate(a, a+n, jumlah);
}


int main()
{
    int jumlah;
    cout<< "Inputkan Jumlah Data : ";
    cin>> jumlah;
    cout<<endl;

    int simpanAngka[jumlah];
    int simpanHasilPangkat2[jumlah];
    int simpanHasilPangkat3[jumlah];

    int hasilJumlahpangkat2,hasilJumlahpangkat3;

    for(int a = 0; a<jumlah; a++){
        cout<< "Inputkan Suku ke " << a+1  << " : ";
        cin >> simpanAngka[a];
    }

    // pangkat 2
    for(int a = 0; a < jumlah; a++){
        simpanHasilPangkat2[a] = pow(simpanAngka[a],2);
    }
    cout<< endl;
    hasilJumlahpangkat2 = totalpangkat(simpanHasilPangkat2, jumlah);
    cout<< "Hasil Pangkat 2 = " << hasilJumlahpangkat2<<endl;

    // pangkat 3
    for(int a = 0; a < jumlah; a++){
        simpanHasilPangkat3[a] = pow(simpanAngka[a],3);
    }
    hasilJumlahpangkat3 = totalpangkat(simpanHasilPangkat3, jumlah);
    cout<<endl;
    cout<< "Hasil Pangkat 3 = " << hasilJumlahpangkat3<<endl;
    cout<<endl;
    cout<< "Hasil Sigma = "<< hasilJumlahpangkat2 - hasilJumlahpangkat3<<endl;
    return 0;
}
