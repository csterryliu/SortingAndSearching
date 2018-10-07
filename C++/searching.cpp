//
//  searching.cpp
//  SortingAndSearching
//
//  Created by Terry on 2016/6/15.
//  Copyright © 2016年 Terry. All rights reserved.
//

#include "searching.hpp"

Searching::Searching() {
    
}
Searching::~Searching() {
    
}
bool Searching::BinarySearch(unsigned int *array, int size, unsigned int target) {
    int median = size / 2;
    int head = 0;
    while (array[head + median] != target) {
        if (size <= 1) {
            printf("not found\n");
            return false;
        }
        if (array[head + median] < target) {
            size = median;
            head += (median + 1);
        } else {
            size = size - median - 1;
        }
        median = size / 2;
    }
    
    printf("target found\n");
    return true;
}