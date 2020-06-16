/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on September 16, 2019, 9:47 AM
 */

#include <iostream>

using namespace std;

/*
 *
 */
int main(int argc, char** argv)
{
    char nama[100][100];

    int input = 0;

    cout << "Inputkan jumlah data: " << endl;

    cin>>input; //diinput 3
    int data(input);

    cout<<endl;

    for (int a = 0; a < input; a++)
    {
        cout << "Inputkan nama: " << endl;
        cin >> nama[a]; //misalkan diinput: Aku, Kamu, Dia
    }

    cout << endl;

    //output 1: Aku,Dia
    for (int b = 0; b < input; b++)
    {
        cout << nama[b] << " "; //agar outputnya hanya: Aka,Dia
    };

    //output 2: kamu
    //codingnya bagaimana ya?

    return 0;
}
