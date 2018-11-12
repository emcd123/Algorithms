//g++  5.4.0

#include <iostream>
#include <stdlib.h> //To use random number functions

#include "selectionSort.h"

SelectionSort::SelectionSort(void){
}

SelectionSort::~SelectionSort(){
}

void SelectionSort::Sorting(int* array, int arrSize){
    int start = 0;
    for(int i=0; i<arrSize+1; i++){
        int key = findSmallest(array,arrSize, start);
        start += 1;
        Swap(array[i], array[key]);
    }
}

int SelectionSort::findSmallest(int* array,int arrSize, int start){
  int smallest = start;
  for(int i=start; i<arrSize; i++){
      if(array[i] < array[smallest]){
           smallest = i;
      }
    }
    return smallest;
}

