//
// Created by TylerBeck on 6/20/24.
//

#ifndef CHAPTER2_H
#define CHAPTER2_H
#include <iostream>


class Chapter2 {
public:
    static void insertionSort(int* A, int n) {
        for(int i = 1; i < n; i++) {
            int key = A[i];
            int j = i - 1;
            while(j >= 0 && A[j] > key) {
                A[j + 1] = A[j];
                j = j - 1;
            }
            A[j + 1] = key;
        }
    }

    static void printArray(int* A, int n)
    {
        int i;
        for (i = 0; i < n; i++)
            std::cout << A[i] << " ";
        std::cout << std::endl;
    }


};



#endif //CHAPTER2_H
