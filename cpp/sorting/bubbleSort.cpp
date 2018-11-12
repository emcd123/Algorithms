//g++  5.4.0

#include <iostream>
#include <stdlib.h> //To use random number functions
using namespace std;

#include "bubblesort.h"

BubbleSort::BubbleSort(void){
}

BubbleSort::~BubbleSort(){
}

void BubbleSort::Sorting(int* array,int arrSize){
  for(int i=(arrSize-1); i>1; i--){
    for(int k=0; k<i; k++){
      if(array[k] > array[k+1]){
        swap(array[k], array[k+1]);
      }
    }
  }
}

