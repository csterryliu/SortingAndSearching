def quick_sort(array, start_idx, end_idx):
    if start_idx < end_idx:
        p_idx = random_partition(array, start_idx, end_idx)
        quick_sort(array, start_idx, p_idx-1)
        quick_sort(array, p_idx+1, end_idx)
    return


# it is one of the method to avoid worst-case O(n^2)
def random_partition(array, start_idx, end_idx):
    import random
    pivot_idx = random.randint(start_idx, end_idx)
    print 'pivot picked: %s, index: %s' % (array[pivot_idx], pivot_idx)
    swap(array, pivot_idx, end_idx)
    return partition(array, start_idx, end_idx)


def partition(array, start_idx, end_idx):
    # always choose the last index as the pivot
    pivot = array[end_idx]
    # find the correct index which the pivot should be
    # condition:
    # all elements on the left side of the pivot should be lesser than it
    # all elements on the right side of the pivot should be greater than it
    p_idx = start_idx
    for i in range(start_idx, end_idx):
        if array[i] <= pivot:
            swap(array, i, p_idx)
            p_idx += 1
    swap(array, p_idx, end_idx)
    return p_idx


def swap(array, idx1, idx2):
    temp = array[idx1]
    array[idx1] = array[idx2]
    array[idx2] = temp


if __name__ == '__main__':
    print 'quick sort practice'
    array = [7, 2, 1, 6, 8, 5, 3, 4]
    print 'before sort: %s' % array
    quick_sort(array, 0, len(array)-1)
    print 'after sort: %s' % array
