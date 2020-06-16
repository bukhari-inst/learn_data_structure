//header file
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

//pendeklarasian struct sebuah tree awal
typedef struct Node
{
    int data;
    Node *kiri;
    Node *kanan;
};

Node *pohon = NULL;

//fungsi untuk menambahkan node baru
void tambah (Node **root, int databaru)
{
    //jika root masih kosong
    if ((*root)==NULL)
    {
        //pembuatan node baru
        Node *baru;
        //pengalokasian memori dari node yang telah dibuat
        baru = new Node;
        //inisialisasi awal node yang baru dibuat
        baru->data=databaru;
        baru->kiri=NULL;
        baru->kanan=NULL;
        (*root) = baru;
        (*root) -> kiri = NULL;
        (*root) -> kanan = NULL;
    }
    //jika data yang akan dimasukkan lebih kecil daripada elemen root, maka akan diletakkan di node sebelah kiri.
    else if (databaru<(*root)->data)
        tambah(&(*root)->kiri,databaru);
    //jika data yang akan dimasukkan lebih besar daripada elemen root, maka akan diletakkan di node sebelah kanan
    else if (databaru>(*root)->data)
        tambah(&(*root)->kanan,databaru);
    //jika saat dicek data yang akan dimasukkan memiliki nilai yang sama dengan data pada root
    else if (databaru==(*root)->data);

}

//fungsi yang digunakan untuk melakukan pencarian data
void search(Node **root, int cari)
{
    if((*root) == NULL)
    {
        printf("Data tidak ditemukan!");
    }
    //jika data yang dicari lebih kecil dari isi root
    else if(cari < (*root)->data)
        search(&(*root)->kiri,cari);
    //jika data yang dicari lebih besar dari isi root
    else if(cari > (*root)->data)
        search(&(*root)->kanan,cari);
    //jika data yang dicari sama dengan isi dari variabel root
    else if(cari == (*root)->data)
        printf("Data ditemukan!");
}

void waktu()
{
    clock_t tStart = clock();
    /* Do your stuff here */
    printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
}

int main(void)
{


    //deklarasikan variabel
    char pil;
    int del,cari, data1 = 0, data;

    //panggil fungsi untuk menambah node yang berisi data pada treevalue
    ifstream value;
    value.open("big-data-7M.txt", ifstream::in);

    while (value.good())
    {
        value >> data;
        tambah(&pohon,data);
    }

    //cout<< data<< endl;
    value.close();

    if(pohon!=NULL)
    {
        cari = 9163992;
        search(&pohon, cari);
    }
    else
        printf("\nMasih kosong!");
        cout<< endl;
    //clock_t tStart = clock();

    //printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

    return 0;
}
