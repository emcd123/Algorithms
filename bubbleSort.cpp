//g++  5.4.0

#include <iostream>
#include <stdlib.h> //To use random number functions

using namespace std;

#define MAX_SIZE 10
class BubbleSort{
    private:
    
        int *items;
        unsigned int *size;
 public:
    void Swap(int &p1, int &p2 );
    int Sort( void );
    BubbleSort(void);
    BubbleSort(unsigned int arrSize);  // This is the constructor
    ~BubbleSort(void);
};
BubbleSort::BubbleSort(void){
    items = new int[MAX_SIZE];
}

BubbleSort::BubbleSort(unsigned int arrSize){
    size = arrSize;
  items = new int[arrSize];
}
BubbleSort::~BubbleSort(){
  delete [] items;
}
int BubbleSort::Sort(){
  for(int i=(size-1); i>1; i--){
    for(int k=0; k<i; k++){
    //loop through array,
    //check if k > k+1
    //if so swap the index of k and k+1
      if(items[k] > items[k+1]){
        swap(items[k], items[k+1]);
      }
    }
  }
    return items;
}

void BubbleSort::Swap(int &p1, int &p2) {
     int temp = p1;
     p1 = p2;
     p2 = temp;
}
int main()
{
    std::cout << "Hello, world!\n";
}
