/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on September 8, 2019, 12:24 PM
 */

#include <iostream>


using namespace std;

/*
 *
 */
struct datapasien {
    string nama;
    string penyakit;
    string dokter;
    string ruang;
};
string daftardokter[4] = {"Bukhori_Inst", "Alfian", "Hasim", "Ilham"};

bool inputulang = true;
string dokter;
datapasien data[50];
int j = 0;
string masuk;

int isidata() {


    for (int i = 0; i <= j; i++) {
        cout << " Nomer pasien \t:" << i + 1 << "\n";
        cout << " Nama		\t: ";
        cin >> data [j].nama;
        cout << " Penyakit	\t: ";
        cin >> data [j].penyakit;
        cout << " Ruang		\t: ";
        cin >> data [j].ruang;
        cout << "\nDaftar Nama Dokter : " << endl;
        for (int a = 0; a < 4; a++) {
            cout << (a + 1) << ". " << daftardokter[a] << endl;
        }
        while (inputulang) {

            cout << "\nMasukkan Nama Dokter \t: ";
            cin >> dokter;

            bool salah = false;
            for (int k = 0; k < 4; k++) {
                if (dokter == daftardokter[k]) {
                    salah = true;
                    break;
                }
            }
            if (salah) {
                data[j].dokter = dokter;
                inputulang = false;
            } else {
                cout << "Maaf Nama Dokter yang anda inputkan tidak sesuai , Silahkan ulangi" << endl;
            }
        }
        cout << " Ada data lagi ? (ya/tidak) ";
        cin >> masuk;
        cout << endl;
        if (masuk == "ya" || masuk == "YA") {
            j++;
            inputulang = true;
        } else if (masuk == "tidak" || masuk == "Tidak") {
            break;
        }
    }
}

int output() {
    cout << "Data Pasien yang telah anda inputkan : \n\n";
    cout << "No Nama Pasien \t Penyakit \t Ruang \t\t Dokter \n";

    for (int i = 0; i <= j; i++) {
        cout << i + 1 << "  " << data[i].nama << "\t\t " << data[i].penyakit << "\t\t " << data[i].ruang << "\t\t " << data[i].dokter << "\n " << endl;
    }
}

int main() {
    isidata();
    output();
}









