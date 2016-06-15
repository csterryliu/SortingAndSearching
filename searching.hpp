//
//  searching.hpp
//  SortingAndSearching
//
//  Created by Terry on 2016/6/15.
//  Copyright © 2016年 Terry. All rights reserved.
//

#ifndef searching_hpp
#define searching_hpp

#include <stdio.h>

class Searching {
public:
    Searching();
    ~Searching();
    bool BinarySearch(unsigned int* array, int size, unsigned int target);
};

#endif /* searching_hpp */
