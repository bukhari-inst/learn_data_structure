/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on October 31, 2019, 8:08 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 *
 */
int main(int argc, char** argv)
{

    int n;

    cout << "Inputkan ukuran ordo matriks A dan B : ";
    cin >> n;


    int matriks_1[n][n], matriks_2[n][n], C[n][n],k ,l ,m;

    cout <<endl;
    cout << "Masukkan nilai matriks A : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < /*2*/ n; j++)
        {
            cout << " baris " << i << " kolom " << j << " : ";
            cin >>  matriks_1[i][j];
        }
    }

    cout << endl;

    cout << "Masukkan nilai matriks B : " << endl;
    for(int i =0; i< n; i++)
    {
        for (int j = 0; j < /*2*/ n; j++)
        {
            cout << " baris " << i << " kolom " << j << " : ";
            cin >>  /*matriks_1*/ matriks_2[i][j];
        }
    }

    cout << endl;
    cout << "Matriks A : " <<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j =0; j < n; j++)
        {
            cout << " " << matriks_1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "===========================" << endl;

    cout << endl;
    cout << "Matriks B : " <<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j =0; j < n; j++)
        {
            cout << " " << matriks_2[i][j] << " ";
        }
        cout << endl;
    }
    //Operasi Perkalian matriks A X B
    for (k = 0; k < n; k++) {
        for (l = 0; l < n; l++) {
            C[k][l] = 0;
            for (m = 0; m < n; m++) {
                C[k][l] += matriks_1[k][m] * matriks_2[m][l];
            }
        }
    }
    //output hasil perkalian matriks A X B
    cout << endl;
    cout << " Hasil Perkalian Matriks A X B: \n";
    cout << "------------------------- \n";
    for (k = 0; k < n; k++) {
        for (l = 0; l < n; l++) {
            cout << " " << C[k][l] << " ";
        }
        cout << endl;
    }
    return 0;
}


