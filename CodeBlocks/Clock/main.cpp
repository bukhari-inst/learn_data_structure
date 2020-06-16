#include <time.h>
#include <conio.h>
#include <iostream>

int main(void) {
    clock_t tStart = clock();
    /* Do your stuff here */
    printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

    //deklarasikan variabel
    char pil;
    int del,cari, data1 = 0, data;

    //panggil fungsi untuk menambah node yang berisi data pada treevalue
    ifstream value;
    value.open("big-data-100k.txt", ifstream::in);

    while (value.good())
    {
        value >> data;
        tambah(&pohon,data);
    }

    cout<< data<< endl;
    value.close();

    if(pohon!=NULL)
    {
        cari = 9163992;
        search(&pohon, cari);
    }
    else
        printf("\nMasih kosong!");
    return 0;
}
