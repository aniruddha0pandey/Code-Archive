Time Complexity

| Techinique   | Average Case   | Average Case   | Average Case   |
| ------------ |:--------------:| -------------- | --------------:|
| Bubble       | `O(n²)`        |                |                |
| Selection    | `O(n²)`        |                |                |
| Insertion    | `O(n²)`        |                |                |
| Merge        | `O(nlog₂(n))`  |                |                |

Facts
- The minimum number of comparisons needed to sort any n items using a comparison-sort is :
```
> log₂(n!)
> By Stirling's approximation ~ √2πn(n/e)ⁿ
> nlog₂(n/e) + log₂(√2πn)
```
  <sub>Thus, the number of comparisons necessary for any comparison-sort is lower-bounded by</sub> `Ω(nlog₂n)`.
- Bubble Sort give `O(n)` for constant highest sorted numbers.
- Selection Sort give `O(n)` for constant lowest sorted numbers.
- Insertion Sort give `O(n)` for constant un-sorted numbers.
- Insertion Sort is faster then Merge Sort for small input sizes.
