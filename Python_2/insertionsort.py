def insertion_sort(array):
    for i in range(1, len(array)):
        this_hole_value = array[i]
        this_hole_index = i
        while (this_hole_index > 0 and
               array[this_hole_index-1] > this_hole_value):
            array[this_hole_index] = array[this_hole_index-1]
            this_hole_index -= 1
        array[this_hole_index] = this_hole_value
    return


def swap(array, idx1, idx2):
    temp = array[idx1]
    array[idx1] = array[idx2]
    array[idx2] = temp


if __name__ == '__main__':
    print 'insertion sort practice'
    array = [5, 1, 3, 2, 7, 9]
    print 'before sort: %s' % array
    insertion_sort(array)
    print 'after sort: %s' % array
