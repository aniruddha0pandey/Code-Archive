Winter is coming and it's going to be a harsh supercool slumber for the rodents and squirrels ~Tree Rats~ are no exception. The native indian northern palm squirrel hide nuts by burried them into the ground called caching, later use as a preparation for cold weather when otherwise food will be scare. <sub>([Nowak, 1999](https://books.google.co.in/books?id=T37sFCl43E8C&lpg=PR9&ots=rnBe0VYPHY&dq=Nowak%2C%20R.%201999.%20Walker's%20Mam%C2%ADmals%20of%20the%20World.%20Bal%C2%ADti%C2%ADmore%3A%20Johns%20Hop%C2%ADkins%20Uni%C2%ADver%C2%ADsity%20Press.&lr&pg=PR9#v=onepage&q&f=false))</sub>

Sandy the squirrel is preparing her annual burrow for winter.






Help Sandy finding her nuts. Happy Squirreling!

## Input:
- First line will contain **T**, number of testcases. Then the testcases follow. 
- Each testcase contains of a single line of input **N**, the number of cars ahead of his car.

## Output:
For each testcase, output in a single line on how many ways there are to overtake cars.

## Constraints
- 1 ≤ **T** ≤ 100
- 1 ≤ **n** ≤ 30

## Sample Input:
4  
1 2 3 4

## Sample Output:
1 2 3 5

## EXPLANATION:
Considering Sachins' car index to be 0, the nearest car index to be 1 and so on...
### For Sample Case:
**[0 1]** -> 1 way  
**[0 1 2] [0 2]** -> 2 ways  
**[0 1 2 3] [0 1 3] [0 2 3]** -> 3 ways  
**[0 1 2 3 4] [0 1 2 4] [0 1 3 4] [0 2 3 4] [0 2 4]** -> 5 ways  
Hence the answer is **1 2 3 5**.

