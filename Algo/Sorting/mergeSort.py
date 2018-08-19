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

def merge(leftList, rightList, newList = []):
    while (len(leftList) > 0 and len(rightList) > 0): 
        if (leftList[0] <= rightList[0]):
            newList.append(leftList[0])
            del leftList[0]
        else:
            newList.append(rightList[0])
            del rightList[0]
    while (len(leftList) > 0):
        newList.append(leftList[0])
        del leftList[0]
    while (len(rightList) > 0):
        newList.append.(rightList[0])
        del rightList[0]
    return newList

def divide(list):
    mid = len(arr) / 2
    return arr[:mid], arr[mid:]

@inline
def end(mainList):
    return len(mainList) <= 1
  
def mergeSort(mainList):
    if end(mainList):
        return mainList
    leftList, rightList = divide(mainList)
    return merge(mergeSort(leftList), mergeSort(rightList))

if __name__ == "__main__":
    list = [int(i) for i in input("Input Elements: ").split()]
    print(mergeSort(list))
