//
//  sorting.hpp
//  SortingAndSearching
//
//  Created by Terry on 2016/6/11.
//  Copyright © 2016年 Terry. All rights reserved.
//

#ifndef sorting_hpp
#define sorting_hpp

#include <stdio.h>

class Sorting {
public:
    Sorting();
    ~Sorting();
    void BubbleSort(unsigned int* array, int size);
    void SelectionSort(unsigned int* array, int size);
    void InsertionSort(unsigned int* array, int size);
    void MergeSort(unsigned int* array, int size);
    void QuickSort(unsigned int* array, int left, int right);
    void printAll(unsigned int* array, int size);
private:
    void swap(unsigned int& i, unsigned int& j);
    void merge(unsigned int* outputArr, int outputArrSize, int middleIdx);
    int partition(unsigned int* arr, int left, int right);
    
};

#endif /* sorting_hpp */
