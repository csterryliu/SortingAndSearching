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
    void printAll(unsigned int* array, int size);
private:
    void swap(unsigned int& i, unsigned int& j);
    
};

#endif /* sorting_hpp */
