//g++  5.4.0

#include <iostream>
#include <stdlib.h> //To use random number functions

class SelectionSort{
 public:
    void Swap(int &p1, int &p2 );
    void Sort( int* array, int arrSize);
    int findSmallest(int* array,int arrSize, int start);
    SelectionSort(void);
    ~SelectionSort(void);
};
SelectionSort::SelectionSort(void){
}
SelectionSort::~SelectionSort(){
}

void SelectionSort::Sort(int* array, int arrSize){
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
void SelectionSort::Swap(int &p1, int &p2) {
     int temp = p1;
     p1 = p2;
     p2 = temp;
}

int main(){
  const int n = 5;
  int array[n];
  /* initialize random seed: */
  srand (time(NULL));
  //populate array with random integers
  for(int i = 0; i< n; i++){
    array[i] = rand() %10;
   }
  std::cout << "Unsorted random generated list:";
  for(int j= 0; j< n; j++){
    std::cout << array[j];
   }
   SelectionSort sSort;
   sSort.Sort(array, n);
     std::cout << "\n Sorted random generated list: ";
  for(int j= 0; j< n; j++){
    std::cout << array[j];
  }
}
