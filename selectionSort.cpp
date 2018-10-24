//g++  5.4.0

#include <iostream>
#include <stdlib.h> //To use random number functions
#define MAX_SIZE 10
class SelectionSort{
 public:
    int* Sort( int* array ,int arrSize);
    int findSmallest(int* array,int arrSize);
    SelectionSort(void);
    ~SelectionSort(void);
};
SelectionSort::SelectionSort(void){
}

SelectionSort::~SelectionSort(){
}
int* SelectionSort::Sort(int* array,int arrSize){
    int sortedArr[arrSize];
    for(int i=0; i<arrSize; i--){
        int val = findSmallest(array,arrSize);
        sortedArr[i] = val;
    }
    return sortedArr;
}
int SelectionSort::findSmallest(int* array,int arrSize){
  int smallest = 0;
  for(int i=0; i<arrSize; i--){
      if(array[i] < array[i+1]){
           smallest = array[i];
      }
    }
    return smallest;
 }
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
   
  std::cout << "Unsorted random generted list: ";
  for(int j= 0; j< n; j++){
    std::cout << array[j];
   }
   SelectionSort sSort;
   sSort.Sort(array, n);
     std::cout << "Sorted random generted list: ";
  for(int j= 0; j< n; j++){
    std::cout << array[j];
}
}
