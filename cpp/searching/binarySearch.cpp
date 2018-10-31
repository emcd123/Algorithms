//g++  5.4.0
#include "binarySearch.h"

BinarySearch::BinarySearch(void){
}

BinarySearch::~BinarySearch(){
}

int BinarySearch::IndexSearch(int* array, int arrSize, int arg){
    int bottom = 0;
    int top = arrSize-1;

    while(bottom <= top){
        int midpoint = (bottom+top)/2;
        if(array[midpoint]<arg){
            bottom = midpoint+1;
        }
        else if(array[midpoint] >arg){
            top = midpoint-1;
        }
        else{
            return midpoint;
        }
    }
    return arrSize;
}

bool BinarySearch::BoolSearch(int* array, int arrSize, int arg){
    int bottom = 0;
    int top = arrSize-1;

    while(bottom <= top){
        int midpoint = (bottom+top)/2;
        if(array[midpoint]<arg){
            bottom = midpoint+1;
        }
        else if(array[midpoint] >arg){
            top = midpoint-1;
        }
        else{
            return true;
        }
    }
    return false;
}