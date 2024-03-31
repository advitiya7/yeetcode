## Depth-First Search (DFS) for Graph (Revision starts ;))

Follow the steps below to implement DFS on a graph:

1. **Decide the Directions for Traversal:** This could be left to right, top to bottom, etc.

2. **Determine the Starting Point for Traversal:** This could be a specific node or a random node depending on the graph.

3. **Mark the Node as Visited:** Always mark the node as visited in the first step of your DFS.

4. **Create Direction Array:** Depending upon the direction, create a direction array and start the DFS.

[Easy templates for revision ](https://leetcode.com/discuss/study-guide/655708/Graph-For-Beginners-Problems-or-Pattern-or-Sample-Solutions).

 Comparison Point | DFS | BFS |
|------------------|-----|-----|
| Shortest path | No, not always | Yes, typically |
| Time-based questions | Not preferred | Preferred, as we traverse the graph one by one |
| Intuitiveness | More intuitive | Less intuitive |
| Traversal based on | Edges | Vertices |
| Memory usage | Less, as it uses a stack | More, as it uses a queue |
| Implementation complexity | More complex due to recursion | Simpler, as it uses a queue |
| Use case | Better for decision tree, finding connected components | Better for finding shortest path, peer to peer networks |

