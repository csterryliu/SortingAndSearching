def bubble_sort(array):
    for _ in range(len(array)-1):
        for i in range(len(array)-1):
            if array[i] > array[i+1]:
                swap(array, i, i+1)


def bubble_sort_optimized(array):
    for k in range(1, len(array)):
        is_swap = False
        for i in range(0, len(array)-k):
            if array[i] > array[i+1]:
                swap(array, i, i+1)
                is_swap = True
        if not is_swap:
            break
    return


def swap(array, idx1, idx2):
    temp = array[idx1]
    array[idx1] = array[idx2]
    array[idx2] = temp


if __name__ == '__main__':
    print 'bubble sort practice'
    array = [5, 1, 3, 2, 7, 9]
    print 'before sort: %s' % array
    bubble_sort(array)
    print 'after sort: %s' % array

    array = [5, 1, 3, 2, 7, 9]
    print 'before sort: %s' % array
    bubble_sort_optimized(array)
    print 'after sort: %s' % array
