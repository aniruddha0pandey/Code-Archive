Winter is Coming. It's going to be a harsh supercool slumber for the rodents, and <strike>tree rats</strike> squirrels are no exception. The native Indian northern palm squirrel hides nuts by burying them into the ground. These nuts later used as preparation for cold weather when otherwise the food will be scarce. <sub>(<a href="https://books.google.co.in/books?id=T37sFCl43E8C&printsec=frontcover">Nowak, 1999</a>)</sub>


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
- 1 ≤ **t** ≤ 100
- 1 < **n** ≤ 30
- 1 ≤ **k** < **n**

## Sample Cases
<table>
  <thead>
    <tr>
      <th>S.R. </th>
      <th>INPUT</th>
      <th>OUTPUT</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>#1</td>
      <td><pre>1 5
S N N S N</pre></td>
      <td><pre>    2</pre></td>
    </tr>
    <tr>
      <td>#2</td>
      <td><pre>2 6
N N S S N S</pre></td>
      <td><pre>    3</pre></td>
    </tr>
    <tr>
      <td>#3</td>
      <td><pre>3 6
S N S N N S</pre></td>
      <td><pre>    3</pre></td>
    </tr>
  </tbody>
</table>

## EXPLANATION:
### For Sample Case #1:
Here maximum 2 nuts can be found.
- First squirrel(`index: 0`) carry first nut(`index: 1`).
- Second squirrel(`index: 3`) can carry second nut(`index: 2`) or third nut(`index: 4`).
