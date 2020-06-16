/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on August 30, 2019, 4:15 PM
 */

#include <iostream>


using namespace std;

/*
 *
 */
struct datapasien
{
    string nama;
    string penyakit;
    string dokter;
    string ruang;
};
string dt;
string daftardokter[4] = {"Bukhori", "Alfian", "Hasim", "Ilham"};

bool inputulang = true;
string dokter;
datapasien data[50];
int j = 0;
string masuk;

int isidata()
{


    for (int i = 0; i <= j; i++)
    {
        cout << " Nomer pasien \t:" << i + 1 << "\n";
        cout << " Nama		\t: ";
        cin >> data [j].nama;
        cout << " Penyakit	\t: ";
        cin >> data [j].penyakit;
        cout << " Ruang		\t: ";
        cin >> data [j].ruang;
        cout << "\nNama Dokter Yang Tersedia : " << endl;
        for (int a = 0; a < 4; a++)
        {
            cout << (a + 1) << ". " << daftardokter[a] << endl;
        }
        while (inputulang)
        {
            cout << "\nMasukkan Nama Dokter \t: ";
            getline(cin,dokter);
            for(int h=0; h<4; h++)
            {
                dt = daftardokter[h];
                if (dokter == daftardokter[h])
                    break;
                {
                    data[j].dokter = dokter;
                    inputulang = false;
                }

                else if(dokter != dt)
                {
                    cout << "Maaf Nama Dokter yang anda inputkan tidak sesuai , Silahkan ulangi\n";
                    break;
                }
            }
        }
        cout << " Ada data lagi ? (ya/tidak) ";
        cin >> masuk;
        cout << endl;
        if (masuk == "ya" || masuk == "YA")
        {
            j++;
            inputulang = true;
        }
        else if (masuk == "tidak" || masuk == "Tidak")
        {
            break;
        }
    }
}

int output()
{
    cout << "Data Pasien yang telah anda inputkan : \n\n";
    cout << "No Nama Pasien \t Penyakit \t Ruang \t\t Dokter \n";

    for (int i = 0; i <= j; i++)
    {
        cout << i + 1 << "  " << data[i].nama << "\t\t " << data[i].penyakit << "\t\t " << data[i].ruang << "\t\t " << data[i].dokter << "\n " << endl;
    }
}

int main()
{
    isidata();
    output();
}


