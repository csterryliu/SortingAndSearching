def selection_sort(array):
    for i in range(len(array)-1):
        min_index = i
        for j in range(i+1, len(array)):
            # select the smallest value in unsorted list
            if array[j] < array[min_index]:
                min_index = j
        swap(array, i, min_index)


def swap(array, idx1, idx2):
    temp = array[idx1]
    array[idx1] = array[idx2]
    array[idx2] = temp


if __name__ == '__main__':
    print 'selection sort practice'
    array = [5, 1, 3, 2, 7, 9]
    print 'before sort: %s' % array
    selection_sort(array)
    print 'after sort: %s' % array
