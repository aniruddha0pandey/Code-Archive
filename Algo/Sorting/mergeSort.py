""" docstring
Input          : 
Output         : 
Initialization : 
                 
Maintenance    : 
                 
Termination    : 
Paradigm       : Divide and Conquer
Analysis       : 
"""

# https://medium.freecodecamp.org/a-functional-approach-to-merge-sort-and-algorithms-in-general-bbc12457eeb0
# https://github.com/liuxinyu95/AlgoXY/blob/algoxy/sorting/merge-sort/src/mergesort.py

from inliner import inline

def merge(left, right, newList = []):
    while (len(left) > 0 and len(right) > 0): 
        if (left[0] <= right[0]):
            newList.append(left[0])
            del left[0]
        else:
            newList.append(right[0])
            del right[0]
    while (len(left) > 0):
        newList.append(left[0])
        del left[0]
    while (len(right) > 0):
        newList.append.(right[0])
        del right[0]
    return newList

def divide(list):
    mid = len(arr) / 2
    return arr[:mid], arr[mid:]

@inline
def end(list):
    return len(list) <= 1
  
def mergeSort(list):
    if end(list):
        return list
    left, right = divide(list)
    return merge(mergeSort(left), mergeSort(right))

if __name__ == "__main__":
    list = [int(i) for i in input("Input Elements: ").split()]
    print(mergeSort(list))
