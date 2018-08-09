"""
Input          : A sequence of n numbers ⟨a₁, a₂, a₃, ..., aₙ⟩ or a[1...n].
Output         : A permutation (reordering) ⟨a₁, a₂, a₃, ..., aₙ⟩ of the input sequence such that {a₁' ≤ a₂' ≤ a₃' ≤ ... ≤ aₙ'}.
Explanation    : The elements are also called as keys.
Initialization :
Maintenance    :
Termination    :
"""

list = [int(i) for i in input("Input Elements: ").split()]
for j = 2 to len(list)
  key = list[j]
  i = j - 1
  while i > 0 and list[i] > key
    list[i + 1] = list[i]
    i--
  list[i +1] = key
