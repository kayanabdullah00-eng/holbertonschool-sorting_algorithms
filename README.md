# Sorting Algorithms Project

## 📌 Overview
This project focuses on implementing different sorting algorithms in C and analyzing their efficiency using Big O notation. Each task demonstrates a different sorting technique and its behavior.

---

## 🎯 Objectives
- Understand how sorting algorithms work
- Implement multiple sorting techniques
- Analyze time complexity using Big O notation
- Write clean and efficient code following Betty style

---

## 📂 Tasks

### 🔹 Task 0: Bubble Sort
Implementation of the Bubble Sort algorithm.  
The array is sorted by repeatedly swapping adjacent elements if they are in the wrong order.  
The array is printed after each swap.

**Time Complexity:**
- Best Case: O(n)
- Average Case: O(n²)
- Worst Case: O(n²)

---

### 🔹 Task 1: Insertion Sort
Implementation of the Insertion Sort algorithm.  
Builds the sorted array one element at a time by inserting elements into their correct position.

**Time Complexity:**
- Best Case: O(n)
- Average Case: O(n²)
- Worst Case: O(n²)

---

### 🔹 Task 2: Selection Sort
Implementation of the Selection Sort algorithm.  
Selects the smallest element and places it in the correct position in each iteration.

**Time Complexity:**
- Best Case: O(n²)
- Average Case: O(n²)
- Worst Case: O(n²)

---

### 🔹 Task 3: Quick Sort
Implementation of the Quick Sort algorithm.  
Uses a divide-and-conquer approach by selecting a pivot and partitioning the array.

**Time Complexity:**
- Best Case: O(n log n)
- Average Case: O(n log n)
- Worst Case: O(n²)

---

## 📂 Files

- `sort.h` → Header file with all prototypes
- `0-bubble_sort.c` → Bubble Sort implementation
- `1-insertion_sort_list.c` → Insertion Sort implementation
- `2-selection_sort.c` → Selection Sort implementation
- `3-quick_sort.c` → Quick Sort implementation
- `0-O` → Time complexity of Bubble Sort
- `README.md` → Project documentation

---

## ⚙️ Requirements
- Language: C
- Compiler: gcc
- Flags: -Wall -Werror -Wextra -pedantic -std=gnu89
- OS: Ubuntu 20.04
- Code must follow Betty style
- No global variables

---

## 🚀 Compilation

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o sort
