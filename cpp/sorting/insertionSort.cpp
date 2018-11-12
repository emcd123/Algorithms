#include "insertionSort.h"

InsertionSort::InsertionSort(void){
}

InsertionSort::~InsertionSort(){
}

void InsertionSort::Sorting(int* array, int arrSize){
    int index = 1;
    while(index < arrSize){
        int testArg = index;
        while(testArg > 0 && array[testArg-1]>array[testArg]){
            Swap(array[testArg], array[testArg-1]);
            --testArg;
        }
        ++index;
    }   
}