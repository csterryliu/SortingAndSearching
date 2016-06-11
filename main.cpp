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
    return 0;
}
