import random

def bubbleSort(list):
    

if __name__ == "__main__":
    list = [random.randint(0, 1000) for _ in range(10)]
    print("Before Sorting:  {}".format(list))
    bubbleSort(list)
    print("After Sorting:  {}".format(list))
