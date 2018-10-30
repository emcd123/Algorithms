#include <iostream>
#include <stdlib.h> //To use random number functions
#include "linearSearch.h"

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
   LinearSearch lsearch;
   bool result = lsearch.BoolSearch(array, n, 3);
   int index = lsearch.IndexSearch(array, n, 3);
    if(result == true){
        std::cout << "\nFound, Index:" << index;
    }
    else{
        std::cout << "\nNot Found" ;
    }
}
