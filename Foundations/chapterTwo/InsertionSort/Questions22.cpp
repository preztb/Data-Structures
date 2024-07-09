//
// Created by TylerBeck on 6/21/24.
//

#include "Questions22.h"


int main() {
    Questions22 n;
    int arr[5] = {3,5,6,9,10};

    std::cout << n.Sum_Array(arr, 5) <<std::endl;

    n.descInsertion(arr, 5);
    n.printArray(arr, 5);


}



