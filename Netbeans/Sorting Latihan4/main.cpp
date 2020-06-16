/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on October 18, 2019, 10:34 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */

void quickSort(int[], int);
void q_sort(int[], int, int);

int main(int argc, char** argv) {

    int NumList [10] = {12, 29, 56, 4, 31, 9, 17, 19, 48, 3};
    int temp;
    cout << "Data sebelum diurutkan: \n";
    for (int d = 0; d < 10; d++) {
        cout << setw(3) << NumList[d];
    }

    cout << "\n\n";
    quickSort(NumList, 10);
    cout << "Data setelah Diurutkan: \n";

    for (int i = 0; i < 10; i++) {
        cout << setw(3) << NumList[i] << endl;
    }
}

void quickSort(int numbers[], int array_size) {
    q_sort(numbers, 0, array_size - 1);
}

void q_sort(int numbers[], int left, int right) {
    int pivot, l_hold, r_hold;
    l_hold = left;
    r_hold = right;
    pivot = numbers[left];

    while (left < right) {
        while ((numbers[right] >= pivot) && (left < right))
            right--;
        if (left != right) {
            numbers[left] = numbers[right];
            left++;
        }

        while ((numbers[left]) <= pivot && (left < right)) {
            left++;
        }
        if (left != right) {
            numbers[right] = numbers[left];
            right--;
        }
    }
    numbers[left] = pivot;
    pivot = left;
    left = l_hold;
    right = r_hold;
    if (left < pivot)
        q_sort(numbers, left, pivot - 1);

    if (right > pivot)
        q_sort(numbers, pivot + 1, right);

}

