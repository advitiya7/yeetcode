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
| [3170-find-indices-with-index-and-value-difference-ii](https://github.com/advitiya7/yeetcode/tree/master/3170-find-indices-with-index-and-value-difference-ii) |
## String
|  |
| ------- |
| [0049-group-anagrams](https://github.com/advitiya7/yeetcode/tree/master/0049-group-anagrams) |
| [0516-longest-palindromic-subsequence](https://github.com/advitiya7/yeetcode/tree/master/0516-longest-palindromic-subsequence) |
| [0647-palindromic-substrings](https://github.com/advitiya7/yeetcode/tree/master/0647-palindromic-substrings) |
| [0878-shifting-letters](https://github.com/advitiya7/yeetcode/tree/master/0878-shifting-letters) |
| [1360-maximum-length-of-a-concatenated-string-with-unique-characters](https://github.com/advitiya7/yeetcode/tree/master/1360-maximum-length-of-a-concatenated-string-with-unique-characters) |
| [3267-find-longest-special-substring-that-occurs-thrice-i](https://github.com/advitiya7/yeetcode/tree/master/3267-find-longest-special-substring-that-occurs-thrice-i) |
| [3353-existence-of-a-substring-in-a-string-and-its-reverse](https://github.com/advitiya7/yeetcode/tree/master/3353-existence-of-a-substring-in-a-string-and-its-reverse) |
| [3468-find-the-encrypted-string](https://github.com/advitiya7/yeetcode/tree/master/3468-find-the-encrypted-string) |
## Dynamic Programming
|  |
| ------- |
| [0055-jump-game](https://github.com/advitiya7/yeetcode/tree/master/0055-jump-game) |
| [0516-longest-palindromic-subsequence](https://github.com/advitiya7/yeetcode/tree/master/0516-longest-palindromic-subsequence) |
| [0647-palindromic-substrings](https://github.com/advitiya7/yeetcode/tree/master/0647-palindromic-substrings) |
| [1025-minimum-cost-for-tickets](https://github.com/advitiya7/yeetcode/tree/master/1025-minimum-cost-for-tickets) |
| [1393-maximum-value-of-k-coins-from-piles](https://github.com/advitiya7/yeetcode/tree/master/1393-maximum-value-of-k-coins-from-piles) |
| [1457-minimum-difficulty-of-a-job-schedule](https://github.com/advitiya7/yeetcode/tree/master/1457-minimum-difficulty-of-a-job-schedule) |
| [1488-sort-integers-by-the-power-value](https://github.com/advitiya7/yeetcode/tree/master/1488-sort-integers-by-the-power-value) |
| [1503-reducing-dishes](https://github.com/advitiya7/yeetcode/tree/master/1503-reducing-dishes) |
| [2443-check-if-there-is-a-valid-partition-for-the-array](https://github.com/advitiya7/yeetcode/tree/master/2443-check-if-there-is-a-valid-partition-for-the-array) |
| [2562-count-ways-to-build-good-strings](https://github.com/advitiya7/yeetcode/tree/master/2562-count-ways-to-build-good-strings) |
| [2916-check-if-it-is-possible-to-split-array](https://github.com/advitiya7/yeetcode/tree/master/2916-check-if-it-is-possible-to-split-array) |
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
| [0878-shifting-letters](https://github.com/advitiya7/yeetcode/tree/master/0878-shifting-letters) |
| [1025-minimum-cost-for-tickets](https://github.com/advitiya7/yeetcode/tree/master/1025-minimum-cost-for-tickets) |
| [1360-maximum-length-of-a-concatenated-string-with-unique-characters](https://github.com/advitiya7/yeetcode/tree/master/1360-maximum-length-of-a-concatenated-string-with-unique-characters) |
| [1393-maximum-value-of-k-coins-from-piles](https://github.com/advitiya7/yeetcode/tree/master/1393-maximum-value-of-k-coins-from-piles) |
| [1457-minimum-difficulty-of-a-job-schedule](https://github.com/advitiya7/yeetcode/tree/master/1457-minimum-difficulty-of-a-job-schedule) |
| [1503-reducing-dishes](https://github.com/advitiya7/yeetcode/tree/master/1503-reducing-dishes) |
| [1528-kids-with-the-greatest-number-of-candies](https://github.com/advitiya7/yeetcode/tree/master/1528-kids-with-the-greatest-number-of-candies) |
| [1620-check-if-array-pairs-are-divisible-by-k](https://github.com/advitiya7/yeetcode/tree/master/1620-check-if-array-pairs-are-divisible-by-k) |
| [1626-can-make-arithmetic-progression-from-sequence](https://github.com/advitiya7/yeetcode/tree/master/1626-can-make-arithmetic-progression-from-sequence) |
| [1635-number-of-good-pairs](https://github.com/advitiya7/yeetcode/tree/master/1635-number-of-good-pairs) |
| [1755-defuse-the-bomb](https://github.com/advitiya7/yeetcode/tree/master/1755-defuse-the-bomb) |
| [2443-check-if-there-is-a-valid-partition-for-the-array](https://github.com/advitiya7/yeetcode/tree/master/2443-check-if-there-is-a-valid-partition-for-the-array) |
| [2640-maximum-number-of-integers-to-choose-from-a-range-i](https://github.com/advitiya7/yeetcode/tree/master/2640-maximum-number-of-integers-to-choose-from-a-range-i) |
| [2651-count-ways-to-group-overlapping-ranges](https://github.com/advitiya7/yeetcode/tree/master/2651-count-ways-to-group-overlapping-ranges) |
| [2670-make-k-subarray-sums-equal](https://github.com/advitiya7/yeetcode/tree/master/2670-make-k-subarray-sums-equal) |
| [2916-check-if-it-is-possible-to-split-array](https://github.com/advitiya7/yeetcode/tree/master/2916-check-if-it-is-possible-to-split-array) |
| [3170-find-indices-with-index-and-value-difference-ii](https://github.com/advitiya7/yeetcode/tree/master/3170-find-indices-with-index-and-value-difference-ii) |
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
| [2640-maximum-number-of-integers-to-choose-from-a-range-i](https://github.com/advitiya7/yeetcode/tree/master/2640-maximum-number-of-integers-to-choose-from-a-range-i) |
| [2916-check-if-it-is-possible-to-split-array](https://github.com/advitiya7/yeetcode/tree/master/2916-check-if-it-is-possible-to-split-array) |
## Binary Search
|  |
| ------- |
| [0222-count-complete-tree-nodes](https://github.com/advitiya7/yeetcode/tree/master/0222-count-complete-tree-nodes) |
| [0287-find-the-duplicate-number](https://github.com/advitiya7/yeetcode/tree/master/0287-find-the-duplicate-number) |
| [0658-find-k-closest-elements](https://github.com/advitiya7/yeetcode/tree/master/0658-find-k-closest-elements) |
| [2640-maximum-number-of-integers-to-choose-from-a-range-i](https://github.com/advitiya7/yeetcode/tree/master/2640-maximum-number-of-integers-to-choose-from-a-range-i) |
| [3267-find-longest-special-substring-that-occurs-thrice-i](https://github.com/advitiya7/yeetcode/tree/master/3267-find-longest-special-substring-that-occurs-thrice-i) |
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
| [1635-number-of-good-pairs](https://github.com/advitiya7/yeetcode/tree/master/1635-number-of-good-pairs) |
| [2640-maximum-number-of-integers-to-choose-from-a-range-i](https://github.com/advitiya7/yeetcode/tree/master/2640-maximum-number-of-integers-to-choose-from-a-range-i) |
| [3267-find-longest-special-substring-that-occurs-thrice-i](https://github.com/advitiya7/yeetcode/tree/master/3267-find-longest-special-substring-that-occurs-thrice-i) |
| [3353-existence-of-a-substring-in-a-string-and-its-reverse](https://github.com/advitiya7/yeetcode/tree/master/3353-existence-of-a-substring-in-a-string-and-its-reverse) |
## Counting
|  |
| ------- |
| [1620-check-if-array-pairs-are-divisible-by-k](https://github.com/advitiya7/yeetcode/tree/master/1620-check-if-array-pairs-are-divisible-by-k) |
| [1635-number-of-good-pairs](https://github.com/advitiya7/yeetcode/tree/master/1635-number-of-good-pairs) |
| [3267-find-longest-special-substring-that-occurs-thrice-i](https://github.com/advitiya7/yeetcode/tree/master/3267-find-longest-special-substring-that-occurs-thrice-i) |
## Sliding Window
|  |
| ------- |
| [0219-contains-duplicate-ii](https://github.com/advitiya7/yeetcode/tree/master/0219-contains-duplicate-ii) |
| [0658-find-k-closest-elements](https://github.com/advitiya7/yeetcode/tree/master/0658-find-k-closest-elements) |
| [1755-defuse-the-bomb](https://github.com/advitiya7/yeetcode/tree/master/1755-defuse-the-bomb) |
| [3267-find-longest-special-substring-that-occurs-thrice-i](https://github.com/advitiya7/yeetcode/tree/master/3267-find-longest-special-substring-that-occurs-thrice-i) |
## Sorting
|  |
| ------- |
| [0049-group-anagrams](https://github.com/advitiya7/yeetcode/tree/master/0049-group-anagrams) |
| [0056-merge-intervals](https://github.com/advitiya7/yeetcode/tree/master/0056-merge-intervals) |
| [0658-find-k-closest-elements](https://github.com/advitiya7/yeetcode/tree/master/0658-find-k-closest-elements) |
| [1488-sort-integers-by-the-power-value](https://github.com/advitiya7/yeetcode/tree/master/1488-sort-integers-by-the-power-value) |
| [1503-reducing-dishes](https://github.com/advitiya7/yeetcode/tree/master/1503-reducing-dishes) |
| [1626-can-make-arithmetic-progression-from-sequence](https://github.com/advitiya7/yeetcode/tree/master/1626-can-make-arithmetic-progression-from-sequence) |
| [2640-maximum-number-of-integers-to-choose-from-a-range-i](https://github.com/advitiya7/yeetcode/tree/master/2640-maximum-number-of-integers-to-choose-from-a-range-i) |
| [2651-count-ways-to-group-overlapping-ranges](https://github.com/advitiya7/yeetcode/tree/master/2651-count-ways-to-group-overlapping-ranges) |
| [2670-make-k-subarray-sums-equal](https://github.com/advitiya7/yeetcode/tree/master/2670-make-k-subarray-sums-equal) |
## Heap (Priority Queue)
|  |
| ------- |
| [0658-find-k-closest-elements](https://github.com/advitiya7/yeetcode/tree/master/0658-find-k-closest-elements) |
## Prefix Sum
|  |
| ------- |
| [0878-shifting-letters](https://github.com/advitiya7/yeetcode/tree/master/0878-shifting-letters) |
| [1393-maximum-value-of-k-coins-from-piles](https://github.com/advitiya7/yeetcode/tree/master/1393-maximum-value-of-k-coins-from-piles) |
## Math
|  |
| ------- |
| [1635-number-of-good-pairs](https://github.com/advitiya7/yeetcode/tree/master/1635-number-of-good-pairs) |
| [1806-count-of-matches-in-tournament](https://github.com/advitiya7/yeetcode/tree/master/1806-count-of-matches-in-tournament) |
| [2649-count-total-number-of-colored-cells](https://github.com/advitiya7/yeetcode/tree/master/2649-count-total-number-of-colored-cells) |
| [2670-make-k-subarray-sums-equal](https://github.com/advitiya7/yeetcode/tree/master/2670-make-k-subarray-sums-equal) |
## Memoization
|  |
| ------- |
| [1488-sort-integers-by-the-power-value](https://github.com/advitiya7/yeetcode/tree/master/1488-sort-integers-by-the-power-value) |
## Simulation
|  |
| ------- |
| [1806-count-of-matches-in-tournament](https://github.com/advitiya7/yeetcode/tree/master/1806-count-of-matches-in-tournament) |
## Number Theory
|  |
| ------- |
| [2670-make-k-subarray-sums-equal](https://github.com/advitiya7/yeetcode/tree/master/2670-make-k-subarray-sums-equal) |
<!---LeetCode Topics End-->