//g++  5.4.0
#include "binarySearch.h"

BinarySearch::BinarySearch(void){
}

BinarySearch::~BinarySearch(){
}
/*
int BinarySearch::IndexSearch(int* array, int arrSize, int arg){
    for(int i=0; i<arrSize;i++){
        if(array[i] == arg){
            return i;
        }
    }
    return arrSize+1;
}
*/
bool BinarySearch::BoolSearch(int* array, int arrSize, int arg){
    int midpoint = arrSize/2;
    int newArray[midpoint];
    if(array[midpoint] == arg){
        return true;
    }
    else if(array[midpoint] != arg && arrSize == 1){
        return false;
    }
    else{
        if(array[midpoint]<arg){
            for(int j=0;j<midpoint;j++){
                newArray[j] = array[j];
            }
        }
        else{
            for(int j=0;j<midpoint;j++){
                newArray[j] = array[j+midpoint];
            }
        }
        return BoolSearch(newArray, midpoint, arg);
    }
}