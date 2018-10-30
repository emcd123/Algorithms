//g++  5.4.0
#include "linearSearch.h"

LinearSearch::LinearSearch(void){
}

LinearSearch::~LinearSearch(){
}

int LinearSearch::IndexSearch(int* array, int arrSize, int arg){
    for(int i=0; i<arrSize;i++){
        if(array[i] == arg){
            return i;
        }
    }
    return arrSize+1;
}

bool LinearSearch::BoolSearch(int* array, int arrSize, int arg){
    for(int i=0; i<arrSize;i++){
        if(array[i] == arg){
            return true;
        }
    }
    return false;   
}