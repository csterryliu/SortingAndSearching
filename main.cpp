//
//  main.cpp
//  SortingAndSearching
//
//  Created by Terry on 2016/6/11.
//  Copyright © 2016年 Terry. All rights reserved.
//

#include <iostream>
#include "sorting.hpp"
#include "searching.hpp"

int main(int argc, const char * argv[]) {
    printf("sorting example\n");
    Sorting s;
    printf("bubble sort:\n");
    unsigned int a1[] = {5, 9, 11, 1, 33, 15, 11, 77, 102, 7};
    s.printAll(a1, 10);
    s.BubbleSort(a1, 10);
    // ----------------------
    printf("selection sort:\n");
    unsigned int a2[] = {5, 9, 11, 1, 21, 9, 33, 15, 77, 102, 7};
    s.printAll(a2, 11);
    s.SelectionSort(a2, 11);
    // ----------------------
    printf("insertion sort:\n");
    unsigned int a3[] = {5, 5, 9, 11, 1};
    s.printAll(a3, 5);
    s.SelectionSort(a3, 5);
    // ----------------------
    printf("merge sort:\n");
    unsigned int a4[] = {8, 10, 5, 7, 3, 6, 7, 9};
    s.printAll(a4, 8);
    s.MergeSort(a4, 8);
    s.printAll(a4, 8);
    // ----------------------
    printf("quick sort:\n");
    unsigned int a5[] = {1,43,14,89,16,67,43,41,42,47,63};
    s.printAll(a5, 11);
    s.QuickSort(a5, 11);
    s.printAll(a5, 11);
    // ----------------------
    printf("Searching example\n");
    printf("binary search:\n");
    unsigned int a6[] = {5, 1, 8, 101, 22, 43, 11, 99, 199, 14, 63, 20};
    Searching sc;
    s.printAll(a6, 12);
    s.SelectionSort(a6, 12);
    for (int i = 0; i < 12; i++) {
        printf("find %u: \n", a6[i]);
        sc.BinarySearch(a6, 12, a6[i]);
    }
    sc.BinarySearch(a6, 12, 30);
    sc.BinarySearch(a6, 12, 15);
    sc.BinarySearch(a6, 12, 1);
    sc.BinarySearch(a6, 12, 100);
    
    
    return 0;
}
