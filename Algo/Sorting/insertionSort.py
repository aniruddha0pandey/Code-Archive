""" docstring
Input          : A sequence of n numbers ⟨a₁, a₂, a₃, ..., aₙ⟩ or a[1 ... n].
Output         : A permutation (reordering) ⟨a₁, a₂, a₃, ..., aₙ⟩ of the input sequence such that {a₁' ≤ a₂' ≤ a₃' ≤ ... ≤ aₙ'}.
Initialization : The 'loop invariant' holds before the first loop iteration:
                 The subarray a[1 ... j-1] therefore consists of a[0]. Moreover, this subarray is sorted.
Maintenance    : Each iteration maintain the 'loop invariant':
                 Incrementing 'j' for the next iteration preserves 'loop invriant' in a[1 ... j-1].
Termination    : Observing the subarray a[1 ... j-1] is infact the entire array, we conclude the entire array sorted.
"""

def insertionSort(list, j = 1):
    # traversing throughout list
    for j in range(len(list)):                            # j   : "current key index".
        key = list[j]                                     # key : "elements also called keys".
        i = j - 1                                         # i   : "evaluated key index".
        # inserting current key into sorted sequence
        while i >= 0 and list[i] > key:
            list[i + 1] = list[i]
            i = i - 1
        list[i + 1] = key
    return list

if __name__ == "__main__":
    list = [int(i) for i in input("Input Elements: ").split()]
    print(insertionSort(list))
