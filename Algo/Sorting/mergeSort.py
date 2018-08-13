def divide(list):
    mid = len(arr) / 2
    return arr[:mid], arr[mid:]
    
def mergeSort(list):
    if (len(list) <= 1):
        return arr
    left, right = half(list)
    return merge(mergeSort(left), mergeSort(right))
