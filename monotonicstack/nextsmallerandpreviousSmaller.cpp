#include <vector>
#include <stack>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> findNextAndPreviousSmallerIndexes(const std::vector<int>& arr) {
    // Initialize an empty stack
    std::stack<int> stack;
    
    // Initialize nextSmaller and previousSmaller vectors with -1
    std::vector<int> nextSmaller(arr.size(), -1);
    std::vector<int> previousSmaller(arr.size(), -1);

    // Iterate through all the elements of the array
    for (int i = 0; i < arr.size(); ++i) {

        // While loop runs until the stack is not empty AND
        // the element represented by stack top is LARGER OR EQUAL to the current element
        while (!stack.empty() && stack.top() >= arr[i]) {
            // Pop out the top of the stack, it represents the index of the item
            int stackTop = stack.top();
            stack.pop();

            // Next smaller element of stackTop is the element at index i
            nextSmaller[stackTop] = i;
        }

        // If the stack is not empty, the index at the stack top refers to the previous smaller element for `i`th index
        if (!stack.empty()) {
            previousSmaller[i] = stack.top();
        }

        // Push the current element
        stack.push(i);
    }

    return {nextSmaller, previousSmaller};
}

int main() {
    std::vector<int> arr = {4, 5, 2, 25};
    auto result = findNextAndPreviousSmallerIndexes(arr);

    std::vector<int> nextSmaller = result.first;
    std::vector<int> previousSmaller = result.second;

    std::cout << "Next Smaller Indexes: ";
    for (int index : nextSmaller) {
        std::cout << index << " ";
    }
    std::cout << std::endl;

    std::cout << "Previous Smaller Indexes: ";
    for (int index : previousSmaller) {
        std::cout << index << " ";
    }
    std::cout << std::endl;

    return 0;
}
