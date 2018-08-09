"""
Input          : A sequence of n numbers ⟨a₁, a₂, a₃, ..., aₙ⟩ or a[1...n].
Output         : A permutation (reordering) ⟨a₁, a₂, a₃, ..., aₙ⟩ of the input sequence such that {a₁' ≤ a₂' ≤ a₃' ≤ ... ≤ aₙ'}.
Explanation    : The elements are also called as keys.
Initialization :
Maintenance    :
Termination    :
"""

def insertionSort(list):
    for j = 2 to len(list)
        key = list[j]
        i = j - 1
        while i > 0 and list[i] > key
          list[i + 1] = list[i]
          i = i - 1
        list[i + 1] = key

if __name__ == "__main__":
    list = [int(i) for i in input("Input Elements: ").split()]
    print(insertionSort(list))
