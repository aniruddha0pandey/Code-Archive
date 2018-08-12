Time Complexity
- Insertion Sort `n²`
- Merge Sort `nlog₂n`  

Facts
- The minimum number of comparisons needed to sort any n items using a comparison-sort is :
```
> log₂(n!)
> By Stirling's approximation ~ √2πn(n/e)ⁿ
> nlog₂(n/e) + log₂(√2πn)
```
  Thus, the number of comparisons necessary for any comparison-sort is lower-bounded by Ω(nlog₂n).
- Insertion Sort is faster then Merge Sort for small input sizes.
