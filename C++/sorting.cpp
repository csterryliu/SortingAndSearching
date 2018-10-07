//
//  sorting.cpp
//  SortingAndSearching
//
//  Created by Terry on 2016/6/11.
//  Copyright © 2016年 Terry. All rights reserved.
//

#include "sorting.hpp"
#include <string>

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

void Sorting::MergeSort(unsigned int *array, int size) {
    if (size < 2)
        return;
    int middle = size / 2;
    MergeSort(array, middle);
    MergeSort(array + middle , size - middle);
    merge(array, size, middle);
}
void Sorting::merge(unsigned int* outputArr, int outputArrSize, int middleIdx) {
    unsigned int* temp = new unsigned int[outputArrSize];
    // copy output array
    for (int i = 0; i < outputArrSize; i++) {
        temp[i] = outputArr[i];
    }
    int leftIdx = 0;
    int rightIdx = middleIdx;
    int outputIdx = 0;
    
    while (leftIdx < middleIdx && rightIdx <= outputArrSize-1) {
        if (temp[leftIdx] <= temp[rightIdx]) {
            outputArr[outputIdx] = temp[leftIdx];
            leftIdx++;
        } else {
            outputArr[outputIdx] = temp[rightIdx];
            rightIdx++;
        }
        outputIdx++;
    }
    
    // copy the rest of left side (you don't have to copy the right side since they are already there)
    int remains = middleIdx - leftIdx;
    for (int i = 0; i < remains; i++) {
        outputArr[outputIdx + i] = temp[leftIdx + i];
    }
    delete[] temp;
}

void Sorting::QuickSort(unsigned int *array, int size) {
    if (size < 2) return;
    int pivot = 0;
    pivot = partition(array, size);
    QuickSort(array, pivot);
    QuickSort(array + (pivot + 1), size - pivot - 1);
}

int Sorting::partition(unsigned int *arr, int size) {
    int left = 0;
    int right = size - 1;
    int pivot = arr[left];  // pick the first element as pivot
    while (left < right) {
        while (left < right && arr[right] >= pivot) right--;
        swap(arr[left], arr[right]);
        while (left < right && arr[left] <= pivot) left++;
        swap(arr[left], arr[right]);
    }
    return left;
}