//
// Created by TylerBeck on 6/21/24.
//

#ifndef CHAPTER22QUESTIONS_H
#define CHAPTER22QUESTIONS_H
#include <unordered_set>
#include <iostream>
#include <vector>


class chapter22Questions {

public:
    static void SelectionSort(int* A, int n) {
        for (int i = 0; i < n - 1; i++) {

            int min = i;
            for (int j = i + 1; j < n; j++) {
                if (A[j] < A[min])
                    min = j;
            }
            if (min != i)
                std::swap(A[min], A[i]);

        }

    }

    static void printArray(int* A, int n)
    {
        int i;
        for (i = 0; i < n; i++)
            std::cout << A[i] << " ";
        std::cout << std::endl;
    }


    static void mergeArr(int* num1 ,int m, int* num2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = n + m - 1;

        while(j >= 0) {
            if(i >= 0 && num1[i] > num2[j]) {
                num1[k] = num1[i];
                i--;
            }else {
                num1[k] = num1[j];
                j--;
            }
            k--;
        }
    }
};



#endif //CHAPTER22QUESTIONS_H
