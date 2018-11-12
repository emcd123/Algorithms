#include "sort.h"

class SelectionSort : public Sort{
 public:
    void Sorting( int* array, int arrSize);
    int findSmallest(int* array,int arrSize, int start);
    SelectionSort(void);
    ~SelectionSort(void);
};
