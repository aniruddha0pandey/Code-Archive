- Maximum Nodes at Level (i) = <code>2<sup>i</sup></code>
- Maximum Nodes with Tree Depth (d) = <code>2<sup>d</sup> - 1</code>
- Minimum Height with (n) Nodes = <code>log₂(n + 1) - 1</code>
- Minimum Levels with (n) Leaves = <code>log₂(n)</code>
  
    
- breadth-first traversal
  - LevelOrder traversla - (left, right)
- depth-first traversal
  - PreOrder traversal  - (parent, left, right)
  - InOrder traversal   - (left, parent, right)
  - PostOrder traversal - (left, right, parent)
  
- **Edge** – Connection between one node to another.
- **Path** – A sequence of nodes and edges connecting a node with a descendant.
  - The direction of a path is strictly from top (root) to bottom (leaf).
- **Height** – The number of edges on the longest downward path between that node and a leaf.
