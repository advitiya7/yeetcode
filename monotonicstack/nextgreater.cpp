#include <vector>
#include <stack>
#include <iostream>

std::vector<int> findNextGreaterIndexes(const std::vector<int>& arr) {
    // Initialize an empty stack
    std::stack<int> stack;

    // Initialize nextGreater vector with -1
    std::vector<int> nextGreater(arr.size(), -1);

    // Iterate through all the elements of the array
    for (int i = 0; i < arr.size(); ++i) {

        // While loop runs until the stack is not empty AND
        // the element represented by stack top is STRICTLY SMALLER than the current element
        while (!stack.empty() && stack.top() < arr[i]) {

            // Pop out the top of the stack, it represents the index of the item
            int stackTop = stack.top();
            stack.pop();

            // As given in the condition of the while loop above,
            // nextGreater element of stackTop is the element at index i
            nextGreater[stackTop] = i;
        }

        // Push the current element
        stack.push(arr[i]);
    }
    return nextGreater;
}

int main() {
    std::vector<int> arr = {4, 5, 2, 25};
    std::vector<int> result = findNextGreaterIndexes(arr);

    for (int index : result) {
        std::cout << index << " ";
    }

    return 0;
}
