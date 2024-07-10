//
// Created by TylerBeck on 7/9/24.
//

#include "DivideAndConquer.h"

int main() {

    int arr[] = { 12, 11, 13, 5, 6, 7 };
   const int arr_size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Given array is \n";
    DivideAndConquer::printArray(arr, arr_size);

    DivideAndConquer::MergeSort(arr, 0, arr_size - 1);

    std::cout << "\nSorted array is \n";
    DivideAndConquer::printArray(arr, arr_size);
    return 0;
} //left on page 44
