"""
Input          : A sequence of n numbers ⟨a₁, a₂, a₃, ..., aₙ⟩ or a[1...n].
Output         : A permutation (reordering) ⟨a₁, a₂, a₃, ..., aₙ⟩ of the input sequence such that {a₁' ≤ a₂' ≤ a₃' ≤ ... ≤ aₙ'}.
Initialization : 
Maintenance    :
Termination    :
"""

def insertionSort(list):
    for j = 1 to len(list):                 # j   : "current key".
        key = list[j]                       # key : "elements also called keys".
        i = j - 1
        while i > 0 and list[i] > key:
            list[i + 1] = list[i]
            i = i - 1
        list[i + 1] = key
    return list

if __name__ == "__main__":
    list = [int(i) for i in input("Input Elements: ").split()]
    print(insertionSort(list))
