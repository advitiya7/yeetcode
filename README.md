## Depth-First Search (DFS) for Graph (Revision starts ;))

Follow the steps below to implement DFS on a graph:

1. **Decide the Directions for Traversal:** This could be left to right, top to bottom, etc.

2. **Determine the Starting Point for Traversal:** This could be a specific node or a random node depending on the graph.

3. **Mark the Node as Visited:** Always mark the node as visited in the first step of your DFS.

4. **Create Direction Array:** Depending upon the direction, create a direction array and start the DFS.

[Easy templates for revision ](https://leetcode.com/discuss/study-guide/655708/Graph-For-Beginners-Problems-or-Pattern-or-Sample-Solutions).

## Breadth-First Search (BFS) for Graph

1. **Decide the Directions for Traversal:** This could be left to right, top to bottom, etc.

2. **Determine the Starting Point for Traversal:** This could be a specific node or a random node depending on the graph.

3. **Mark the Node as Visited:** Always mark the node as visited in the first step of your BFS.

4. **Create a Queue:** Initialize a queue and enqueue the starting node.

5. **Dequeue a Node and Examine it:** If the dequeued node is the goal, then we are done. If not, enqueue its adjacent nodes and mark them as visited.

6. **Repeat Step 5 until the Queue is Empty:** If the queue becomes empty, then every reachable node has been examined.

 Comparison Point | DFS | BFS |
|------------------|-----|-----|
| Shortest path | No, not always | Yes, typically |
| Time-based questions | Not preferred | Preferred, as we traverse the graph one by one |
| Intuitiveness | More intuitive | Less intuitive |
| Traversal based on | Edges | Vertices |
| Memory usage | Less, as it uses a stack | More, as it uses a queue |
| Implementation complexity | More complex due to recursion | Simpler, as it uses a queue |
| Use case | Better for decision tree, finding connected components | Better for finding shortest path, peer to peer networks |


create a sperate folder for every ds.

