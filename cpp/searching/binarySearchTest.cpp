#include <iostream>
#include <stdlib.h> //To use random number functions
#include "binarySearch.h"

int main()
{
    const int n = 5;
  int array[n];
  /* initialize random seed: */
  srand (time(NULL));
  //populate array with random integers
  for(int i = 0; i< n; i++){
    array[i] = rand() %10;
   }
  std::cout << "Searching For: " << 3 << "\n";
  std::cout << "Unsorted random generated list:";
  for(int j= 0; j< n; j++){
    std::cout << array[j];
   }
   BinarySearch bsearch;
   bool result = bsearch.BoolSearch(array, n, 3);
   int index;
   //index = bsearch.IndexSearch(array, n, 3);
   index = 0;
    if(result == true){
        std::cout << "\nFound, Index:" << index;
    }
    if(result == false){
        std::cout << "\nNot Found" ;
    }
}
