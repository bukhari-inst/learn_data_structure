/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on October 31, 2019, 1:00 AM
 */

#include <cstdlib>
#include <iostream>
//#include <conio.h>
#include <math.h>

using namespace std;

/*
 *
 */
int main(int argc, char** argv)
{

    int n, maks, urut, jumlah = 0, i, r, l = 0;
    float average, rata, d, b, c;

    //input
    cout << "Inputkan jumlah data: ";
    cin >> n;
    cout << endl;
    int data [n];
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "masukkan data ke-" << i + 1 << " : ";
        cin >> data[i];
        cout << endl;

    }

    //data terbesar
    maks = data [0];
    for (int i = 0; i < n; i ++)
    {
        if (data [i] > maks)
        {
            maks = data [i];
        }
    }
    cout << "Data terbesar adalah: " << maks << endl;
    cout << endl;

    //output data secara urut
    cout << "Data yang telah anda inputkan adalah : ";
    for (int f = 0; f < n; f++)
    {
        for (int g = f + 1; g < n; g++)
        {
            if (data[f] > data[g])
            {
                urut = data[g];
                data[g] = data[f];
                data[f] = urut;
            }
        }
        cout << data[f] << " "; //<<endl;
    }
    cout << endl;
    cout << endl;

    //nilai rata-rata
    for(int i = 0; i < n; i++)
    {
        jumlah += data [i];
    }
    average = jumlah /n;
    cout << "Rata-rata dari nilai tersebut adalah : " << average << endl;

    //Simpangan baku
    for(i=0; i<n; i++)
    {
        c = 2;
        r = data[i] - average;
        b = pow(r,c);
        l = l + b;
    }
    d = sqrt(l / (n-1));
    cout << endl;
    cout<<"Simpangan baku : "<< d << endl;
    //getch();
    return 0;
}






