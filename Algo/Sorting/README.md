### Time Complexity

| Techinique   | Worst Case    | Average Case  | Best Case     |
|:-------------|:--------------|:--------------|:--------------|
| Bubble       | `O(n²)`       | `θ(n²)`       | `Ω(n)`        |
| Selection    | `O(n²)`       | `θ(n²)`       | `Ω(n²)`       |
| Insertion    | `O(n²)`       | `θ(n²)`       | `Ω(n)`        |
| Merge        | `O(nlog₂(n))` | `θ(nlog₂(n))` | `Ω(nlog₂(n))` |
| Heap         | `O(nlog₂(n))` | `θ(nlog₂(n))` | `Ω(nlog₂(n))` |
| Quick        | `O(n²)`       | `θ(nlog₂(n))` | `Ω(nlog₂(n))` |

### Facts
- The minimum number of comparisons needed to sort any n items using a comparison-sort is :
```
> log₂(n!)
> By Stirling's approximation ~ √2πn(n/e)ⁿ
> nlog₂(n/e) + log₂(√2πn)
```
  <sub>Thus, the number of comparisons necessary for any comparison-sort is lower-bounded by</sub> `Ω(nlog₂n)`.
- Bubble Sort : `O(n)` for constant highest sorted numbers.
- Selection Sort : `O(n)` for constant lowest sorted numbers.
- Insertion Sort : `O(n)` for constant un-sorted numbers.
- Insertion Sort is faster then Merge Sort for small input sizes.
