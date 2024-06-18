#include <vector>
#include <stack>
#include <iostream>

std::vector<int> findNextSmallerIndexes(const std::vector<int>& arr) {
    // Initialize an empty stack
    std::stack<int> stack;
    
    // Initialize nextSmaller vector with -1
    std::vector<int> nextSmaller(arr.size(), -1);

    // Iterate through all the elements of the array
    for (int i = 0; i < arr.size(); ++i) {

        // While loop runs until the stack is not empty AND
        // the element represented by stack top is STRICTLY LARGER than the current element
        while (!stack.empty() && arr[stack.top()] > arr[i]) {
            // Pop out the top of the stack, it represents the index of the item
            int stackTop = stack.top();
            stack.pop();

            // Next smaller element of stackTop is the element at index i
            nextSmaller[stackTop] = i;
        }

        // Push the current element
        stack.push(i);
    }

    return nextSmaller;
}

int main() {
    std::vector<int> arr = {4, 5, 2, 25};
    std::vector<int> result = findNextSmallerIndexes(arr);

    for (int index : result) {
        std::cout << index << " ";
    }

    return 0;
}
