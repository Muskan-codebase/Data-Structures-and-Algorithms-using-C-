# DSA Practice Repository

This repository contains my practice and implementation of various **Data Structures and Algorithms (DSA)** concepts. The aim of this repository is to strengthen problem-solving skills and prepare for technical interviews by implementing fundamental DSA topics in C++/Java/Python.

---

## Table of Contents

1. [Searching Algorithms](#searching-algorithms)  
2. [Sorting Algorithms](#sorting-algorithms)  
3. [Arrays](#arrays)  
4. [Recursion](#recursion)  
5. [Stack](#stack)  
6. [Queue](#queue)  
7. [Linked List](#linked-list)  

---

## Searching Algorithms

### 1. Linear Search
- **Description:** Checks each element one by one until the target is found.  
- **Time Complexity:**  
  - **Best Case O(1):** Target found at first index.  
  - **Worst Case O(n):** Target found at last index or not found at all.  
  - **Average Case O(n):** Target is somewhere in the middle on average.  
- **Reasoning:** Each element must be compared once in the worst case.  

### 2. Binary Search
- **Description:** Works on **sorted arrays** by repeatedly dividing the search space in half.  
- **Time Complexity:**  
  - **Best Case O(1):** Target is the middle element.  
  - **Worst Case O(log n):** Array size reduces by half each iteration until target is found or interval is empty.  
  - **Average Case O(log n):** Halving continues on average log₂(n) times.  
- **Reasoning:** Every comparison cuts the search space in half → logarithmic time.

---

## Sorting Algorithms

### 1. Insertion Sort
- **Description:** Inserts each element into its correct position in a growing sorted part of the array.  
- **Time Complexity:**  
  - **Best Case O(n):** Array already sorted → only comparisons, no shifts.  
  - **Worst Case O(n²):** Array reversed → each element shifts all previous elements.  
  - **Average Case O(n²):** On average, half of the previous elements are shifted.  
- **Reasoning:** Nested loops; outer loop O(n), inner loop O(n) in worst case → O(n²).  

### 2. Selection Sort
- **Description:** Repeatedly selects the minimum element from unsorted portion and swaps it.  
- **Time Complexity:**  
  - **Best/Worst/Average Case O(n²):** Always scans all remaining unsorted elements.  
- **Reasoning:** Regardless of array state, finding minimum requires scanning remaining elements.  

### 3. Bubble Sort
- **Description:** Repeatedly swaps adjacent elements if in wrong order.  
- **Time Complexity:**  
  - **Best Case O(n):** Optimized version detects no swaps → array already sorted.  
  - **Worst/Average Case O(n²):** Multiple passes and swaps required.  
- **Reasoning:** Nested loops; each pass bubbles largest element → O(n²) in worst case.  

---

## Arrays

### 1. Find Minimum & Maximum Element
- **Description:** Traverse the array once and track min & max.  
- **Time Complexity:** O(n) for all cases.  
- **Reasoning:** Each element is visited exactly once → linear time.  

### 2. Find Second Largest Element
- **Description:** Track largest and second largest while iterating once.  
- **Time Complexity:** O(n).  
- **Reasoning:** Only a single traversal required.  

### 3. Move Zeros to End
- **Description:** Shift non-zero elements forward and fill zeros at end.  
- **Time Complexity:** O(n).  
- **Reasoning:** Each element visited once; swaps/assignments happen linearly.  

### 4. Reverse an Array
- **Iterative:** Swap elements from ends toward center.  
- **Recursive:** Swap first & last, recurse for subarray.  
- **Time Complexity:** O(n)  
- **Reasoning:** Each element is swapped exactly once.  

### 5. Two Pair Sum
- **Description:** Find pairs with sum = target.  
- **Time Complexity:**  
  - **Brute Force O(n²):** Nested loops check all pairs.  
  - **Optimized O(n):** Using hash map → single pass to check complements.  
- **Reasoning:** Brute force examines every pair; hash map stores seen values.  

### 6. Rotate a Subarray
- **Description:** Rotate part of array by k positions.  
- **Time Complexity:** O(n)  
- **Reasoning:** Each element of subarray is moved once.  

### 7. Two Pointer Technique
- **Description:** Solve problems using two pointers (start & end).  
- **Time Complexity:** O(n)  
- **Reasoning:** Each pointer moves at most n steps → linear time.  

---

## Recursion

### 1. Palindrome Check
- **Description:** Compare first & last characters recursively.  
- **Time Complexity:** O(n)  
- **Reasoning:** Each character checked once.  

### 2. Factorial
- **Description:** n! = n * (n-1)!  
- **Time Complexity:** O(n)  
- **Reasoning:** Recursion depth = n.  

### 3. Fibonacci Series
- **Description:** Recursive calculation: F(n) = F(n-1) + F(n-2)  
- **Time Complexity:** O(2ⁿ) naive, O(n) DP optimized  
- **Reasoning:** Naive recursion recomputes subproblems → exponential.  

### 4. Reverse a String
- **Description:** Swap first & last characters recursively.  
- **Time Complexity:** O(n)  
- **Reasoning:** Each character involved in swap once.  

---

## Stack
- **Description:** LIFO (Last In First Out) data structure.  
- **Operations and Complexity:**  
  - Push: O(1)  
  - Pop: O(1)  
  - Peek/Top: O(1)  
- **Reasoning:** Operations affect only top element → constant time.  

---

## Queue

### Circular Queue
- **Description:** Last position connects to first to form a circle.  
- **Operations and Complexity:**  
  - Enqueue: O(1)  
  - Dequeue: O(1)  
  - Peek/Front: O(1)  
- **Reasoning:** No shifting is needed, pointers manage the queue.  

---

## Linked List

### Reverse a Linked List
- **Description:** Reverse list by changing next pointers iteratively or recursively.  
- **Time Complexity:** O(n)  
- **Space Complexity:** O(1) iterative, O(n) recursive (due to call stack)  
- **Reasoning:** Each node pointer is updated once.  

---

## Notes
- This repository contains code examples for each of these topics in **C++/Java/Python**.  
- Time complexities are explained to help understand **why algorithms behave as they do**.  
- These problems are foundational for **coding interviews** and real-world problem-solving.  


