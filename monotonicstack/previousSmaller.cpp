#include <vector>
#include <stack>
#include <iostream>

std::vector<int> findPreviousSmallerIndexes(const std::vector<int>& arr) {
    // Initialize an empty stack
    std::stack<int> stack;
    
    // Initialize previousSmaller vector with -1
    std::vector<int> previousSmaller(arr.size(), -1);

    // Iterate through all the elements of the array
    for (int i = 0; i < arr.size(); ++i) {

        // While loop runs until the stack is not empty AND
        // the element represented by stack top is LARGER OR EQUAL to the current element
        while (!stack.empty() && stack.top() >= arr[i]) {
            // Pop out the top of the stack, it represents the index of the item
            stack.pop();
        }

        // If the stack is not empty, the index at the stack top refers to the previous smaller element for `i`th index
        if (!stack.empty()) {
            previousSmaller[i] = stack.top();
        }

        // Push the current element
        stack.push(i);
    }

    return previousSmaller;
}

int main() {
    std::vector<int> arr = {4, 5, 2, 25};
    std::vector<int> result = findPreviousSmallerIndexes(arr);

    for (int index : result) {
        std::cout << index << " ";
    }

    return 0;
}
