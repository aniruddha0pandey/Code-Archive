import numpy as np

def insertionSort(list):
    for i in range(len(list) - 1):
        min = i
        for j in range(i + 1, len(list)):
            if list[j] < list[min]:
                min = j
        list[i], list[min] = list[min], list[i]
    return list

if __name__ == "__main__":
    list = np.random.random_integers(100, size=(100, )).tolist()
    print("Sorted list: ", insertionSort(list))
