/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on October 18, 2019, 10:35 AM
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
//#include <conio.h>

using namespace std;

/*
 * 
 */

void radix(int byte, long N, long *source, long *dest) {
    long count[256];
    long index[256];
    //int i;
    memset(count, 0, sizeof (count));
    for (int i = 0; i < N; i++) count[((source[i])>>(byte * 8))&0xff]++;

    index[0] = 0;
    for (int i = 1; i < 256; i++) index [i] = index[i - 1] + count[i - 1];
    for (int i = 0; i < N; i++) dest [index[(source[i]>>(byte * 8))&0xff]++] = source[i];

}

void radixsort(long *source, long*temp, long N) {
    radix(0, N, source, temp);
    radix(1, N, temp, source);
    radix(2, N, source, temp);
    radix(3, N, temp, source);
}

void make_random(long *data, long N) {
    for (int i = 0; i < N; i++) data [i] = rand() | (rand() << 16);
}

long data [100];
long temp [100];

int main(void) {
    make_random(data, 100);
    radixsort(data, temp, 100);
    for (int i = 0; i < 100; i++) cout << data[i] << '\n';
}


