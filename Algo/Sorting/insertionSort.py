""" docstring
Input          : A sequence of n numbers ⟨a₁, a₂, a₃, ..., aₙ⟩ or a[1 ... n].
Output         : A permutation (reordering) ⟨a₁, a₂, a₃, ..., aₙ⟩ of the input sequence such that {a₁' ≤ a₂' ≤ a₃' ≤ ... ≤ aₙ'}.
Initialization : The 'loop invariant' holds before the first loop iteration -
                 The subarray a[1 ... j-1] therefore consists of a[0]. Moreover, this subarray is sorted.
Maintenance    : Each iteration maintain the 'loop invariant' -
                 Incrementing 'j' for the next iteration preserves 'loop invriant' in a[1 ... j-1].
Termination    : Observing the subarray a[1 ... j-1] is infact the entire array, we conclude the entire array sorted.
Paradigm       :
Analysis       : 
"""

def insertionSort(list):
    # traversing throughout list
    for index in range(1, len(list)):
        key = list[index]
        pos = index - 1
        # inserting current key into sorted sequence
        while pos >= 0 and list[pos] > key:
            list[pos + 1] = list[pos]
            pos = pos - 1
        list[pos + 1] = key
    return list

if __name__ == "__main__":
    list = [int(i) for i in input("Input Elements: ").split()]
    print(insertionSort(list))
