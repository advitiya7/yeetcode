#include <vector>
#include <stack>
#include <iostream>

std::vector<int> findPreviousGreaterIndexes(const std::vector<int>& arr) {
    // Initialize an empty stack
    std::stack<int> stack;

    // Initialize previousGreater vector with -1
    std::vector<int> previousGreater(arr.size(), -1);

    // Iterate through all the elements of the array
    for (int i = 0; i < arr.size(); ++i) {

        // While loop runs until the stack is not empty AND
        // the element represented by stack top is SMALLER OR EQUAL to the current element
        while (!stack.empty() && arr[stack.top()] <= arr[i]) {
            // Pop out the top of the stack, it represents the index of the item
            stack.pop();
        }

        // After the while loop, only the elements which are greater than the current element are left in stack
        // this means we can confidently decide the previous greater element of the current element i, that's stack top
        if (!stack.empty()) {
            previousGreater[i] = stack.top();
        }

        // Push the current element
        stack.push(i);
    }
    return previousGreater;
}

int main() {
    std::vector<int> arr = {4, 5, 2, 25};
    std::vector<int> result = findPreviousGreaterIndexes(arr);

    for (int index : result) {
        std::cout << index << " ";
    }

    return 0;
}
