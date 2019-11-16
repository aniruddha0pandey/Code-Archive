Winter is Coming. It's going to be a harsh supercool slumber for the rodents, and ~tree rats~ squirrels are no exception. The native Indian northern palm squirrel hides nuts by burying them into the ground. These nuts later used as preparation for cold weather when otherwise the food will be scarce. <sub>([Nowak, 1999](https://books.google.co.in/books?id=T37sFCl43E8C&lpg=PR9&ots=rnBe0VYPHY&dq=Nowak%2C%20R.%201999.%20Walker's%20Mam%C2%ADmals%20of%20the%20World.%20Bal%C2%ADti%C2%ADmore%3A%20Johns%20Hop%C2%ADkins%20Uni%C2%ADver%C2%ADsity%20Press.&lr&pg=PR9#v=onepage&q&f=false))</sub>

These squirrels have prepared their annual cache nuts for this winter but unfortunately forgot where they've burrowed them. Help these squirrels by finding the maximum number of nuts while following some *Ground Rules*:
1. Each squirrel can carry only one nut at a time.
2. A squirrel cannot carry any nut which is **k** units away from the squirrel. 

 Happy Squirreling!

## Input:
- First line will contain **t**, number of testcases. Then the testcases follows. 
- Each testcase contains two lines of input. First line contains **k**, unit distant of nut from the squirrel and **n** size of the list, separated by spaces. Second line contains the list containing Squirrels(**S**) and Nuts(**N**).

## Output:
For each testcase, output in a single line the maximum number of nuts that can be found.

## Constraints
- 1 ≤ **t** ≤ 10
- 1 < **n** ≤ 30
- 1 ≤ **k** < **n**

## Sample Input #1:
```
1 5
S N N S N
```

## Sample Output #1:
```
2
```

## Sample Input #2:
```
2 6
N N S S N S
```

## Sample Output #2:
```
3
```

## Sample Input #3:
```
3 6
S N S N N S
```

## Sample Output #3:
```
3
```

## EXPLANATION:
### For Sample Case #1:
Here maximum 2 nuts can be found.
- First squirrel(`index: 0`) carry first nut(`index: 1`).
- Second squirrel(`index: 3`) can carry second nut(`index: 2`) or third nut(`index: 4`).
