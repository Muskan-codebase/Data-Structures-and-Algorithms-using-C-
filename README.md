# Data Structures & Algorithms using C++ 🚀

This repository contains my learning and implementation of **Data Structures & Algorithms (DSA)** using **C++**.

I have started with **Arrays**, focusing on **Searching and Sorting algorithms**. Each algorithm is implemented in C++ and explained with **clear logic, pseudocode, and simple time complexity explanations** so that even beginners can understand *why* an algorithm is fast or slow.

This repository will be **continuously updated** as I move forward to advanced data structures like **Stacks, Queues, and Linked Lists**.

---

## 📌 Topics Covered (So Far)

### 🔍 Searching Algorithms

* Linear Search
* Binary Search

### 🔃 Sorting Algorithms

* Bubble Sort
* Selection Sort
* Insertion Sort

---

## ⏱ What is Time Complexity? (Big-O in Simple Words)

**Time Complexity** tells us **how the running time of an algorithm changes** as the input size (**n**) increases.

It does **not** measure time in seconds. Instead, it measures **how many operations** an algorithm performs.

### Common Big-O Notations Used Here

* **O(1)** → Constant time (very fast, no dependency on input size)
* **O(n)** → Linear time (time grows with input size)
* **O(log n)** → Logarithmic time (input size reduces by half each step)
* **O(n²)** → Quadratic time (nested loops, slow for large inputs)

---

## 🔍 Searching Algorithms

### 1️⃣ Linear Search

**How it works:**
Linear Search checks each element **one by one** until the target element is found or the array ends.

**Time Complexity Explained:**

* **Best Case: O(1)**
  The element is found at the **first position**.

* **Worst Case: O(n)**
  The element is found at the **last position** or not present, so every element is checked.

* **Average Case: O(n)**
  On average, the element is found after checking about half the array.

**When to use:**

* Small datasets
* Unsorted arrays

**Pseudocode:**

```
LinearSearch(arr, n, key):
    for i from 0 to n-1:
        if arr[i] == key:
            return i
    return -1
```

---

### 2️⃣ Binary Search

**How it works:**
Binary Search repeatedly divides a **sorted array** into halves and compares the middle element with the target.

⚠️ **Important:** Array must be **sorted**.

**Time Complexity Explained:**

* **Best Case: O(1)**
  The target element is found at the **middle** in the first comparison.

* **Worst Case: O(log n)**
  The array is divided into halves until one element remains.

* **Average Case: O(log n)**
  Most searches require multiple halving steps.

**Why it is fast:**
Each step eliminates **half of the remaining elements**.

**Pseudocode:**

```
BinarySearch(arr, n, key):
    low = 0
    high = n - 1
    while low <= high:
        mid = (low + high) / 2
        if arr[mid] == key:
            return mid
        else if key < arr[mid]:
            high = mid - 1
        else:
            low = mid + 1
    return -1
```

---

## 🔃 Sorting Algorithms

### 3️⃣ Bubble Sort

**How it works:**
Bubble Sort compares **adjacent elements** and swaps them if they are in the wrong order. After each pass, the **largest element bubbles to the end**.

**Time Complexity Explained:**

* **Best Case: O(n)**
  The array is already sorted, so only one pass is needed.

* **Worst Case: O(n²)**
  The array is sorted in reverse order, requiring maximum swaps.

* **Average Case: O(n²)**
  Nested loops cause repeated comparisons.

**Why it is slow:**
Every element is compared multiple times.

**Pseudocode:**

```
BubbleSort(arr, n):
    for i from 0 to n-1:
        for j from 0 to n-i-2:
            if arr[j] > arr[j+1]:
                swap(arr[j], arr[j+1])
```

---

### 4️⃣ Selection Sort

**How it works:**
Selection Sort repeatedly finds the **minimum element** from the unsorted part and places it at the correct position.

**Time Complexity Explained:**

* **Best Case: O(n²)**
* **Worst Case: O(n²)**
* **Average Case: O(n²)**

**Why all cases are O(n²):**
The algorithm always scans the remaining array to find the minimum, regardless of order.

**Pseudocode:**

```
SelectionSort(arr, n):
    for i from 0 to n-1:
        minIndex = i
        for j from i+1 to n-1:
            if arr[j] < arr[minIndex]:
                minIndex = j
        swap(arr[i], arr[minIndex])
```

---

### 5️⃣ Insertion Sort

**How it works:**
Insertion Sort builds the sorted array **one element at a time**, inserting each element into its correct position.

**Time Complexity Explained:**

* **Best Case: O(n)**
  The array is already sorted, so only comparisons are needed.

* **Worst Case: O(n²)**
  The array is reverse sorted, causing maximum shifts.

* **Average Case: O(n²)**

**Why it is useful:**
Very efficient for **small or nearly sorted arrays**.

**Pseudocode:**

```
InsertionSort(arr, n):
    for i from 1 to n-1:
        key = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > key:
            arr[j+1] = arr[j]
            j = j - 1
        arr[j+1] = key
```

---

## 🛠 Language & Tools

* **Language:** C++
* **Concepts Used:** Arrays, Loops, Functions, Conditional.

---

## 📈 Future Plans

* Stack
* Queue
* Linked List
* Recursion
* Trees
* Graphs
* Dynamic Programming

---

## ⭐ Why this Repository?

* Build **strong DSA fundamentals**
* Prepare for **technical interviews**
* Track **consistent learning progress**
* Maintain **clean, well-documented code**

---

Feel free to explore the code and follow along with my DSA journey 🚀

