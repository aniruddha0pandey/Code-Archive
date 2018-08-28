import random

def bubbleSort(list):
    for i in range(len(list)):
        for j in range(len(list) - i - 1):
            if(list[j + 1] < list[j]):
                list[j], list[j + 1] = list[j + 1], list[j]

if __name__ == "__main__":
    list = [random.randint(0, 1000) for _ in range(10)]
    print("Before Sorting:  {}".format(list))
    bubbleSort(list)
    print("After Sorting:  {}".format(list))
