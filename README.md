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


<!---LeetCode Topics Start-->
# LeetCode Topics
## Two Pointers
|  |
| ------- |
| [0287-find-the-duplicate-number](https://github.com/advitiya7/yeetcode/tree/master/0287-find-the-duplicate-number) |
| [0647-palindromic-substrings](https://github.com/advitiya7/yeetcode/tree/master/0647-palindromic-substrings) |
| [0658-find-k-closest-elements](https://github.com/advitiya7/yeetcode/tree/master/0658-find-k-closest-elements) |
## String
|  |
| ------- |
| [0049-group-anagrams](https://github.com/advitiya7/yeetcode/tree/master/0049-group-anagrams) |
| [0516-longest-palindromic-subsequence](https://github.com/advitiya7/yeetcode/tree/master/0516-longest-palindromic-subsequence) |
| [0647-palindromic-substrings](https://github.com/advitiya7/yeetcode/tree/master/0647-palindromic-substrings) |
| [1360-maximum-length-of-a-concatenated-string-with-unique-characters](https://github.com/advitiya7/yeetcode/tree/master/1360-maximum-length-of-a-concatenated-string-with-unique-characters) |
| [3468-find-the-encrypted-string](https://github.com/advitiya7/yeetcode/tree/master/3468-find-the-encrypted-string) |
## Dynamic Programming
|  |
| ------- |
| [0055-jump-game](https://github.com/advitiya7/yeetcode/tree/master/0055-jump-game) |
| [0516-longest-palindromic-subsequence](https://github.com/advitiya7/yeetcode/tree/master/0516-longest-palindromic-subsequence) |
| [0647-palindromic-substrings](https://github.com/advitiya7/yeetcode/tree/master/0647-palindromic-substrings) |
| [1025-minimum-cost-for-tickets](https://github.com/advitiya7/yeetcode/tree/master/1025-minimum-cost-for-tickets) |
| [1457-minimum-difficulty-of-a-job-schedule](https://github.com/advitiya7/yeetcode/tree/master/1457-minimum-difficulty-of-a-job-schedule) |
| [1503-reducing-dishes](https://github.com/advitiya7/yeetcode/tree/master/1503-reducing-dishes) |
## Array
|  |
| ------- |
| [0041-first-missing-positive](https://github.com/advitiya7/yeetcode/tree/master/0041-first-missing-positive) |
| [0049-group-anagrams](https://github.com/advitiya7/yeetcode/tree/master/0049-group-anagrams) |
| [0055-jump-game](https://github.com/advitiya7/yeetcode/tree/master/0055-jump-game) |
| [0056-merge-intervals](https://github.com/advitiya7/yeetcode/tree/master/0056-merge-intervals) |
| [0219-contains-duplicate-ii](https://github.com/advitiya7/yeetcode/tree/master/0219-contains-duplicate-ii) |
| [0287-find-the-duplicate-number](https://github.com/advitiya7/yeetcode/tree/master/0287-find-the-duplicate-number) |
| [0442-find-all-duplicates-in-an-array](https://github.com/advitiya7/yeetcode/tree/master/0442-find-all-duplicates-in-an-array) |
| [0658-find-k-closest-elements](https://github.com/advitiya7/yeetcode/tree/master/0658-find-k-closest-elements) |
| [1025-minimum-cost-for-tickets](https://github.com/advitiya7/yeetcode/tree/master/1025-minimum-cost-for-tickets) |
| [1360-maximum-length-of-a-concatenated-string-with-unique-characters](https://github.com/advitiya7/yeetcode/tree/master/1360-maximum-length-of-a-concatenated-string-with-unique-characters) |
| [1457-minimum-difficulty-of-a-job-schedule](https://github.com/advitiya7/yeetcode/tree/master/1457-minimum-difficulty-of-a-job-schedule) |
| [1503-reducing-dishes](https://github.com/advitiya7/yeetcode/tree/master/1503-reducing-dishes) |
| [1528-kids-with-the-greatest-number-of-candies](https://github.com/advitiya7/yeetcode/tree/master/1528-kids-with-the-greatest-number-of-candies) |
| [1620-check-if-array-pairs-are-divisible-by-k](https://github.com/advitiya7/yeetcode/tree/master/1620-check-if-array-pairs-are-divisible-by-k) |
## Backtracking
|  |
| ------- |
| [1360-maximum-length-of-a-concatenated-string-with-unique-characters](https://github.com/advitiya7/yeetcode/tree/master/1360-maximum-length-of-a-concatenated-string-with-unique-characters) |
## Bit Manipulation
|  |
| ------- |
| [0222-count-complete-tree-nodes](https://github.com/advitiya7/yeetcode/tree/master/0222-count-complete-tree-nodes) |
| [0287-find-the-duplicate-number](https://github.com/advitiya7/yeetcode/tree/master/0287-find-the-duplicate-number) |
| [1360-maximum-length-of-a-concatenated-string-with-unique-characters](https://github.com/advitiya7/yeetcode/tree/master/1360-maximum-length-of-a-concatenated-string-with-unique-characters) |
## Greedy
|  |
| ------- |
| [0055-jump-game](https://github.com/advitiya7/yeetcode/tree/master/0055-jump-game) |
| [1503-reducing-dishes](https://github.com/advitiya7/yeetcode/tree/master/1503-reducing-dishes) |
## Binary Search
|  |
| ------- |
| [0222-count-complete-tree-nodes](https://github.com/advitiya7/yeetcode/tree/master/0222-count-complete-tree-nodes) |
| [0287-find-the-duplicate-number](https://github.com/advitiya7/yeetcode/tree/master/0287-find-the-duplicate-number) |
| [0658-find-k-closest-elements](https://github.com/advitiya7/yeetcode/tree/master/0658-find-k-closest-elements) |
## Tree
|  |
| ------- |
| [0222-count-complete-tree-nodes](https://github.com/advitiya7/yeetcode/tree/master/0222-count-complete-tree-nodes) |
## Binary Tree
|  |
| ------- |
| [0222-count-complete-tree-nodes](https://github.com/advitiya7/yeetcode/tree/master/0222-count-complete-tree-nodes) |
## Hash Table
|  |
| ------- |
| [0041-first-missing-positive](https://github.com/advitiya7/yeetcode/tree/master/0041-first-missing-positive) |
| [0049-group-anagrams](https://github.com/advitiya7/yeetcode/tree/master/0049-group-anagrams) |
| [0219-contains-duplicate-ii](https://github.com/advitiya7/yeetcode/tree/master/0219-contains-duplicate-ii) |
| [0442-find-all-duplicates-in-an-array](https://github.com/advitiya7/yeetcode/tree/master/0442-find-all-duplicates-in-an-array) |
| [1620-check-if-array-pairs-are-divisible-by-k](https://github.com/advitiya7/yeetcode/tree/master/1620-check-if-array-pairs-are-divisible-by-k) |
## Counting
|  |
| ------- |
| [1620-check-if-array-pairs-are-divisible-by-k](https://github.com/advitiya7/yeetcode/tree/master/1620-check-if-array-pairs-are-divisible-by-k) |
## Sliding Window
|  |
| ------- |
| [0219-contains-duplicate-ii](https://github.com/advitiya7/yeetcode/tree/master/0219-contains-duplicate-ii) |
| [0658-find-k-closest-elements](https://github.com/advitiya7/yeetcode/tree/master/0658-find-k-closest-elements) |
## Sorting
|  |
| ------- |
| [0049-group-anagrams](https://github.com/advitiya7/yeetcode/tree/master/0049-group-anagrams) |
| [0056-merge-intervals](https://github.com/advitiya7/yeetcode/tree/master/0056-merge-intervals) |
| [0658-find-k-closest-elements](https://github.com/advitiya7/yeetcode/tree/master/0658-find-k-closest-elements) |
| [1503-reducing-dishes](https://github.com/advitiya7/yeetcode/tree/master/1503-reducing-dishes) |
## Heap (Priority Queue)
|  |
| ------- |
| [0658-find-k-closest-elements](https://github.com/advitiya7/yeetcode/tree/master/0658-find-k-closest-elements) |
<!---LeetCode Topics End-->