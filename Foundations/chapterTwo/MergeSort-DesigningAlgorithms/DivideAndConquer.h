//
// Created by TylerBeck on 7/9/24.
//

#ifndef DIVIDEANDCONQUER_H
#define DIVIDEANDCONQUER_H
#include <iostream>


class DivideAndConquer {
public:
    static void Merge(int* A, int p, int q, int r) {
        const int lengthLeft = q - p + 1; // length of A[p:q]
        const int lengthRight = r - q; //length of A[q + 1:r]

        auto* leftArray = new int[lengthLeft];
        auto* rightArray = new int[lengthRight];

        for(int i = 0; i < lengthLeft; i++) { //copy A[p:q] into the new leftArray
            leftArray[i] = A[p + i];
        }
        for(int j = 0; j < lengthRight; j++) { //copy A[q + 1:r] into the new rightArray
            rightArray[j] = A[q + j + 1];
        }
        int i = 0; //indexes smallest remaining element in leftArray
        int j = 0; //intdexes smallest remaining element in rightArray
        int k = p; //k indexes location in A to fill

        while(i < lengthLeft && j < lengthRight) {
            if(leftArray[i] <= rightArray[j]){
                A[k] = leftArray[i];
                i++;
            }else {
                A[k] = rightArray[j];
                j++;
            }
            k++;
        }
        while(i < lengthLeft) {
            A[k] = leftArray[i];
            i++;
            k++;
        }
        while(j < lengthRight) {
            A[k] = rightArray[j];
            j++;
            k++;
        }
        delete[] leftArray;
        delete[] rightArray;

    }

    static void MergeSort(int* A, int p, int r) {
        if(p >= r) {
            return;
        }
        int q =  p + (r - p)/2; //find the midpoint
        MergeSort(A, p, q); //recursitavly sort A[p:q]
        MergeSort(A,q+1, r); //recursavely sort A[q + 1: r]
        Merge(A,p,q,r); //Merge A[p:q] and A[q + 1:r] into A[p:r]
    }

    static void printArray(int A[], int size)
    {
        for (int i = 0; i < size; i++)
            std::cout << A[i] << " ";
        std::cout << std::endl;
    }

};



#endif //DIVIDEANDCONQUER_H
