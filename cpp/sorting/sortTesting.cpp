//g++  5.4.0

#include <iostream>
#include <stdlib.h> //To use random number functions
using namespace std;

#include "bubblesort.h"

int main(){
  const int n = 5;
  int array[n];
  /* initialize random seed: */
  srand (time(NULL));
  //populate array with random integers
  for(int i = 0; i< n; i++){
    array[i] = rand() %10;
   }

  cout << "Unsorted random generated list: ";
  for(int j= 0; j< n; j++){
    cout << array[j];
  }

  BubbleSort bsort;
  bsort.Sort(array, n);
  cout << "Sorted random generated list: ";
  for(int j= 0; j< n; j++){
    cout << array[j];
   }
   return 0;
}
