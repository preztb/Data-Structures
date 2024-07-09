//
// Created by TylerBeck on 6/21/24.
//

#ifndef QUESTIONS22_H
#define QUESTIONS22_H
#include <iostream>



class Questions22 {
public:
   static int Sum_Array(int* A, int n){
      int sum = 0;
      for (int i = 0; i < n; i++) {
         sum = sum + A[i];
      }
      return sum;

   }

   static void descInsertion(int* A, int n) {
      for(int j = 1; j < n; j++ ) {
         int key = A[j];
         int i = j - 1;
         while (i >= 0 && i < key) {
            A[i + 1] = A[i];
            i = i - 1;
         }
         A[i + 1] = key;
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



#endif //QUESTIONS22_H
