# Depth-First Search (DFS)

The algorithm for DFS in trees is as follows:

1. Start at the root of the tree.
2. If the tree is null, return.
3. Visit the root.
4. Recursively perform DFS on the left subtree.
5. Recursively perform DFS on the right subtree.

Here is a cpp code snippet for DFS:
class Node {
public:
    int value;
    Node* left;
    Node* right;
};

void dfs(Node* node) {
    if (node == nullptr) {
        return;
    }

    // Visit the node by printing its value
    // whatever the question will be asked here
    // also the conditions, will be applied here.
    std::cout << node->value << " ";
    // Recurse on the left subtree
    dfs(node->left);

    // Recurse on the right subtree
    dfs(node->right);
}
# Breadth-First Search (BFS)

The algorithm for BFS in trees is as follows:

1. Start at the root of the tree.
2. If the tree is null, return.
3. Visit the root.
4. Visit all the nodes at the current depth before moving on to nodes at the next depth level.

Here is a cpp code snippet for BFS:

#include <queue>

void bfs(Node* root) {
    if (root == nullptr) {
        return;
    }

    std::queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* node = q.front();
        q.pop();

        // Visit the node by printing its value
        std::cout << node->value << " ";

        // Add the node's children to the queue
        if (node->left != nullptr) {
            q.push(node->left);
        }
        if (node->right != nullptr) {
            q.push(node->right);
        }
    }
}
# TODO

- [ ] Binary lifting
- [ ] Deserialize and serialize(worst).
- [ ] More deletion problems.

