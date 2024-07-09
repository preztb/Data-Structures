//
// Created by TylerBeck on 6/21/24.
//

#include "chapter22Questions.h"


int main() {

    chapter22Questions n;
    int arr[5] = {44,3,21,888,5};
    int arr2[7] = {1,22,33,3,0,0,0};

    n.SelectionSort(arr, 5);
    n.printArray(arr, 5);

    n.mergeArr(arr, 5, arr2, 4);
    n.printArray(arr, 9);

    





}