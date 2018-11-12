//g++  5.4.0

#include <iostream>
#include <stdlib.h> //To use random number functions
using namespace std;

#include "sort.h"

Sort::Sort(void){
}

Sort::~Sort(){
}

void Sort::Swap(int &p1, int &p2) {
     int temp = p1;
     p1 = p2;
     p2 = temp;
}
