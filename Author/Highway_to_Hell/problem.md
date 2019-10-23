Sachin is an aspiring Android Developer. A hardworking person who help others and live his life full of ethics and aesthetics. One weekday while commuting back from office he took pizza along the way for his bros, but now he is stuck in traffic jam and anymore delay would result in cold pizza which we all agree doesn't taste good 🤮. He decided to overtake the cars in front of him. Help Sachin bro to find all the ways he can do that. 

![Highway to Hell](https://raw.githubusercontent.com/aniruddha0pandey/Code-Archive/master/Author/Highway_to_Hell/res/highway.png "Highway to Hell")

He can only overtake 1 or 2 cars at a time. Print the number of ways he can overtake from nearest to furthest car, thus helping Sachin bro.

### Input:
- First line will contain **T**, number of testcases. Then the testcases follow. 
- Each testcase contains of a single line of input **N**, the number of cars ahead of his car.

### Output:
For each testcase, output in a single line on how many ways there are to overtake cars.

### Constraints
- 1 ≤ **T** ≤ 1000
- 1 ≤ **n** ≤ 100

### Sample Input:
4  
1 2 3 4

### Sample Output:
1 2 3 5

### EXPLANATION:
Considering Sachins' car index to be 0, the nearest car index to be 1 and so on...
#### For test case 1:
**[0 1]** -> 1 way  
**[0 1 2] [0 2]** -> 2 ways  
**[0 1 2 3] [0 1 3] [0 2 3]** -> 3 ways  
**[0 1 2 3 4] [0 1 2 4] [0 1 3 4] [0 2 3 4] [0 2 4]** -> 5 ways  
Hence the answer is **1 2 3 5**.

---------
**Warning (Road Safety)**
- Do not try to overtake unless it is very necessary for you to do so.
- Do not overtake on narrow roads at a bridge and at places where overtaking is prohibited.
- Never overtake unless you are sure that you can do so without endangering yourself or any-one else.
- Allow other vehicles to pass or overtake you, when they desire to, as and when the road and traffic conditions permit you to do so. Unnecessary racing for fun should be avoided.
- Never accelerate when being overtaken.
- Overtake only on the right, unless the driver in front of you has signaled that he is turning right.
- Do not overtake when you cannot see the road ahead, at a corner or a cross-road or around a bend.
- Beware of "Go Ahead" signals given by persons other than the driver.
- Overtake only when there is no on-coming vehicle and when sufficient space lies ahead.
- Overtaking during night is more dangerous, take more care.

