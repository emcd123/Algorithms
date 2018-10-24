//g++  5.4.0

#include <iostream>
#include <stdlib.h> //To use random number functions

#include "selectionSort.h"

int main(){
  const int n = 5;
  int array[n];
  /* initialize random seed: */
  srand (time(NULL));
  //populate array with random integers
  for(int i = 0; i< n; i++){
    array[i] = rand() %10;
   }
  std::cout << "Unsorted random generated list:";
  for(int j= 0; j< n; j++){
    std::cout << array[j];
   }
   SelectionSort sSort;
   sSort.Sort(array, n);
     std::cout << "\n Sorted random generated list: ";
  for(int j= 0; j< n; j++){
    std::cout << array[j];
  }
}
