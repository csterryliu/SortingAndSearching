//
//  main.cpp
//  SortingAndSearching
//
//  Created by Terry on 2016/6/11.
//  Copyright © 2016年 Terry. All rights reserved.
//

#include <iostream>
#include "sorting.hpp"

int main(int argc, const char * argv[]) {
    printf("sorting example\n");
    Sorting s;
    printf("bubble sort:\n");
    unsigned int a1[] = {5, 9, 11, 1, 33, 15, 77, 102, 7};
    s.printAll(a1, 9);
    s.BubbleSort(a1, 9);
    // ----------------------
    printf("selection sort:\n");
    unsigned int a2[] = {5, 9, 11, 1, 21, 33, 15, 77, 102, 7};
    s.printAll(a2, 10);
    s.SelectionSort(a2, 10);
    // ----------------------
    printf("insertion sort:\n");
    unsigned int a3[] = {5, 9, 11, 1};
    s.printAll(a3, 4);
    s.SelectionSort(a3, 4);
    // ----------------------
    printf("merge sort:\n");
    unsigned int a4[] = {8, 10, 5, 3, 6, 7, 9};
    s.printAll(a4, 7);
    s.MergeSort(a4, 7);
    s.printAll(a4, 7);
    // ----------------------
    printf("quick sort:\n");
    unsigned int a5[] = {1,43,14,89,16,67,41,42,47,63};
    s.printAll(a5, 10);
    s.QuickSort(a5, 10);
    s.printAll(a5, 10);
    
    return 0;
}
