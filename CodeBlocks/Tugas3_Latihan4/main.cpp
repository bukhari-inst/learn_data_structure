#include <bits/stdc++.h>

using namespace std;

struct dtnilai
{
	string nama;
	string nim;
	int nilai;

};

dtnilai data[10];
int j=0;

int tambah_nilai () {
	char jawab;
	while(1){
		cout << " NIM	: " ; cin >> data [j].nim;
		cout << " Nama	: " ; cin >> data [j].nama;
		cout << " Nilai	: " ; cin >> data [j].nilai;

		cout << " Ada data lagi ? (y/t) " ; cin >> jawab;
		cout << endl;
		if(jawab == 'y' || jawab == 'Y') j++;
		else break;
	}
}
int tampil (){
	cout << "Data Mahasiswa yang diinputkan : \n\n";
	cout << "NIM \t Nama \t Nilai \n";

	for (int i=0;i<=j;i++){
		cout << data[i].nim << "\t" << data[i].nama << "\t" << data[i].nilai << endl;
	}

}
int main(){
	tambah_nilai();
	tampil();
}

