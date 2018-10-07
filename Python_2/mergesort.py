def merge_sort(array):
    if len(array) < 2:
        return
    middle_idx = len(array) / 2
    larray = array[0:middle_idx]
    rarray = array[middle_idx:]
    print '%s %s' % (larray, rarray)
    merge_sort(larray)
    merge_sort(rarray)
    merge(larray, rarray, array)
    return


def merge(larray, rarray, output):
    l_idx = r_idx = o_idx = 0
    while l_idx < len(larray) and r_idx < len(rarray):
        if larray[l_idx] < rarray[r_idx]:
            output[o_idx] = larray[l_idx]
            l_idx += 1
        else:
            output[o_idx] = rarray[r_idx]
            r_idx += 1
        o_idx += 1
    while l_idx < len(larray):
        output[o_idx] = larray[l_idx]
        l_idx += 1
        o_idx += 1
    while r_idx < len(rarray):
        output[o_idx] = rarray[r_idx]
        r_idx += 1
        o_idx += 1
    return output


if __name__ == '__main__':
    print 'merge sort practice'
    array = [5, 3, 1, 7, 4, 8, 2]
    print 'before sort: %s' % array
    merge_sort(array)
    print 'after sort: %s' % array
