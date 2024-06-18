#include <vector>
#include <stack>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> findNextAndPreviousGreaterIndexes(const std::vector<int>& arr) {
    // Initialize an empty stack
    std::stack<int> stack;
    
    // Initialize previousGreater and nextGreater vectors with -1
    std::vector<int> previousGreater(arr.size(), -1);
    std::vector<int> nextGreater(arr.size(), -1);

    // Iterate through all the elements of the array
    for (int i = 0; i < arr.size(); ++i) {

        // While loop runs until the stack is not empty AND
        // the element represented by stack top is SMALLER OR EQUAL to the current element
        while (!stack.empty() && stack.top() <= arr[i]) {
            // Pop out the top of the stack, it represents the index of the item
            int stackTop = stack.top();
            stack.pop();

            // Decide the next greater element for the index popped out from stack
            nextGreater[stackTop] = i;
        }

        // After the while loop, only the elements which are greater than the current element are left in stack
        // this means we can confidently decide the previous greater element of the current element i, that's stack top
        if (!stack.empty()) {
            previousGreater[i] = stack.top();
        }

        // Push the current element
        stack.push(i);
    }

    return {previousGreater, nextGreater};
}

int main() {
    std::vector<int> arr = {4, 5, 2, 25};
    auto result = findNextAndPreviousGreaterIndexes(arr);

    std::vector<int> previousGreater = result.first;
    std::vector<int> nextGreater = result.second;

    std::cout << "Previous Greater Indexes: ";
    for (int index : previousGreater) {
        std::cout << index << " ";
    }
    std::cout << std::endl;

    std::cout << "Next Greater Indexes: ";
    for (int index : nextGreater) {
        std::cout << index << " ";
    }
    std::cout << std::endl;

    return 0;
}
