""" docstring
Input          : 
Output         : 
Initialization : 
                 
Maintenance    : 
                 
Termination    : 
Paradigm       : Divide and Conquer
Analysis       : 
"""

######################################################################## pure-functional
from inliner import inline

@inline
def end(list):
    return len(list) <= 1

def merge1(leftList, rightList, newList = []):
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
        newList.append(rightList[0])
        del rightList[0]
    return newList

def divide1(mainList):
    mid = len(mainList) / 2
    return mainList[:mid], mainList[mid:]
  
def mergeSort1(mainList):
    if end(mainList):
        return mainList
    leftList, rightList = divide1(mainList)
    return merge1(mergeSort1(leftList), mergeSort1(rightList))

######################################################################## functional with sentinel
from inliner import inline

@inline
def increment(i):
    return i = i + 1
  
def merge2(leftList, rightList, newList = [], iLeft = 0, iRight = 0):
    while (iLeft < len(leftList) and iRight < len(rightList)): 
        if (leftList[iLeft] <= rightList[iRight]):
            newList.append(leftList[iLeft])
            increment(iLeft)
        else:
            newList.append(rightList[iRight])
            increment(iRight)
    while (iLeft < len(leftList)):
        newList.append(leftList[iLeft])
        increment(iLeft)
    while (iRight < len(rightList)):
        newList.append(rightList[iRight])
        increment(iRight)
    return newList

def divide2(mainList):
    mid = len(mainList) / 2
    return mainList[:mid], mainList[mid:]
  
def mergeSort2(mainList):
    if len(mainList) <= 1:
        return mainList
    leftList, rightList = divide2(mainList)
    return merge2(mergeSort2(leftList), mergeSort2(rightList))
  
######################################################################## verbose version
from inliner import inline

@inline
def increment(i):
    return i = i + 1
  
def merge3(leftList, rightList, newList = [], i = 0):
    while leftList != [] and rightList != []: 
        newList[i] = leftList.pop(0) if leftList[0] < rightList[0] else rightList.pop(0)
        increment(i)
    newList[i:] = leftList if leftList != [] else rightList
    return newList

def divide3(mainList):
    return len(mainList) / 2
  
def mergeSort3(mainList):
    if len(mainList) <= 1:
        return mainList
    leftList = [x for x in mainList[:divide3(mainList)]]
    rightList = [x for x in mainList[divide3(mainList):]]
    return merge3(mergeSort3(leftList), mergeSort3(rightList))
  
######################################################################## bottom-up approach

def merge4(leftList, rightList, newList = []):
    while leftList != [] and rightList != []: 
        newList.append(leftList.pop(0) if leftList[0] < rightList[0] else rightList.pop(0))
    return newList + (leftList if leftList != [] else rightList)

def mergeSort4(mainList):
    slaveList = [[x] for x in mainList]
    while len(slaveList) > 1:
        slaveList.append(merge4(slaveList.pop(0), slaveList.pop(0)))
    return [] if slaveList == [] else slaveList.pop(0)
  
######################################################################## main

if __name__ == "__main__":
    list = [int(i) for i in input("Input Elements: ").split()]
    print(mergeSort1(list))
    print(mergeSort2(list))
    print(mergeSort3(list))
    print(mergeSort4(list))
    
