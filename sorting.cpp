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




