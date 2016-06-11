//
//  sorting.cpp
//  SortingAndSearching
//
//  Created by Terry on 2016/6/11.
//  Copyright © 2016年 Terry. All rights reserved.
//

#include "sorting.hpp"

Sorting::Sorting() {
    
}
Sorting::~Sorting() {
    
}
void Sorting::swap(unsigned int &i, unsigned int &j) {
    unsigned int temp = i;
    i = j;
    j = temp;
}
void Sorting::printAll(unsigned int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%u ", array[i]);
    }
    printf("\n");
}

void Sorting::BubbleSort(unsigned int *array, int size) {
    for (int end = size - 1; end != 0; end--) {
        for (int start = 0; start < end; start++) {
            if (array[start] > array[start+1]) {
                swap(array[start], array[start+1]);
            }
        }
    }
    printAll(array, size);
}

void Sorting::SelectionSort(unsigned int *array, int size) {
    for (int i = 0; i < size; i++) {
        unsigned int minIndex = i;
        for (int j = i+1; j < size; j++) {
            if (array[minIndex] > array[j]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(array[i], array[minIndex]);
        }
    }
    printAll(array, size);
}

void Sorting::InsertionSort(unsigned int *array, int size) {
    unsigned int temp = 0;
    int backIdx = 0;
    for (int i = 1; i < size; i++) {
        temp = array[i];
        for (backIdx = i; backIdx > 0 && temp < array[backIdx-1]; backIdx--) {
            array[backIdx] = array[backIdx-1];  // move forword
        }
        array[backIdx] = temp;
    }
    printAll(array, size);
}



