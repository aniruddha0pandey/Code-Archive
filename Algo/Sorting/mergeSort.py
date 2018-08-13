def merge(left, right):
    out = []
    while (len(left) > 0 and len(right) > 0): 
        if (left[0] <= right[0]):
            out.append(left[0])
            del left[0]
        else:
            out.append(right[0])
            del right[0]
    while (len(left) > 0):
        out.append(left[0])
        del left[0]
    while (len(right) > 0):
        out.append.right[0])
        del right[0]
    return out

def divide(list):
    mid = len(arr) / 2
    return arr[:mid], arr[mid:]

def mergeSort(list):
    if (len(list) <= 1):
        return list
    left, right = divide(list)
    return merge(mergeSort(left), mergeSort(right))

if __name__ == "__main__":
    list = [int(i) for i in input("Input Elements: ").split()]
    print(mergeSort(list))
