# C++ Data Structures and Algorithms

This repository contains implementations of various Data Structures and Algorithms in C++. It is organized by topic to help with learning and reference.

## Structure

The project is organized into the following directories:

*   **ARRAY**: Array-based problems and algorithms.
*   **binarySearch**: Binary search implementations and problems.
*   **bit_manipulation**: Bit manipulation techniques.
*   **DP**: Dynamic Programming solutions.
*   **Graphs**: Graph algorithms (traversals, shortest paths, etc.).
*   **hashing**: Hashing and hash map implementations.
*   **heap**: Heap data structures and priority queues.
*   **linkedList**: Singly, doubly, and circular linked lists.
*   **OOPS**: Object-Oriented Programming concepts in C++.
*   **queue**: Queue implementations.
*   **recursion**: Recursion examples and problems.
*   **Sliding_window**: Sliding window technique problems.
*   **stack**: Stack implementations and problems.
*   **STL**: Standard Template Library usage examples.
*   **string**: String manipulation algorithms.
*   **trees**: Tree data structures (Binary Trees, BST, etc.).
*   **leetcode**: Solutions to LeetCode problems.
*   **practice**: General practice problems.
*   **assignment**: Assignment related code.
*   **summer_intern_2025**: Preparation materials for summer internships.

## Data Structures & Algorithms Guide

Here is a quick guide on when to use different data structures and algorithms found in this repository:

### Data Structures

*   **Arrays (`ARRAY`)**
    *   **What**: A collection of elements stored at contiguous memory locations.
    *   **When to use**: When you need fast access to elements using an index and the size of the collection is fixed or known in advance.

*   **Linked Lists (`linkedList`)**
    *   **What**: A linear data structure where elements are not stored at contiguous memory locations.
    *   **When to use**: When you need constant-time insertions/deletions and don't know the size of the data beforehand.

*   **Stacks (`stack`)**
    *   **What**: A LIFO (Last In First Out) data structure.
    *   **When to use**: For function call management (recursion), undo mechanisms in editors, and expression parsing.

*   **Queues (`queue`)**
    *   **What**: A FIFO (First In First Out) data structure.
    *   **When to use**: For task scheduling, handling requests in a server, and Breadth-First Search (BFS) in graphs.

*   **Trees (`trees`)**
    *   **What**: A hierarchical data structure consisting of nodes connected by edges.
    *   **When to use**: To represent hierarchical data (like file systems), for fast search/insert/delete (BST), and for network routing algorithms.

*   **Heaps (`heap`)**
    *   **What**: A specialized tree-based data structure that satisfies the heap property.
    *   **When to use**: For implementing priority queues, scheduling processes, and finding the k-th smallest/largest element.

*   **Hashing (`hashing`)**
    *   **What**: A technique to map data to a fixed-size table (Hash Table) for fast lookups.
    *   **When to use**: When you need average constant-time O(1) search, insertion, and deletion (e.g., caching, symbol tables).

*   **Graphs (`Graphs`)**
    *   **What**: A collection of nodes (vertices) and edges connecting them.
    *   **When to use**: To represent networks (social, maps, internet), dependencies, and for finding shortest paths.

### Algorithms & Techniques

*   **Binary Search (`binarySearch`)**
    *   **When to use**: To find an element in a *sorted* array or search space in O(log n) time.

*   **Dynamic Programming (`DP`)**
    *   **When to use**: For optimization problems that have overlapping subproblems and optimal substructure (e.g., Fibonacci, Knapsack).

*   **Recursion (`recursion`)**
    *   **When to use**: When a problem can be broken down into smaller, similar sub-problems (e.g., tree traversals, sorting).

*   **Sliding Window (`Sliding_window`)**
    *   **When to use**: For finding subarrays or substrings that satisfy a certain condition in a linear array/string.

*   **Bit Manipulation (`bit_manipulation`)**
    *   **When to use**: For low-level optimization, setting/clearing flags, and mathematical operations using binary representation.

## Usage

To compile and run any of the C++ files, you can use a C++ compiler like `g++`.

```bash
g++ path/to/file.cpp -o output
./output
```

For example, to run a file in the `ARRAY` directory:

```bash
cd ARRAY
g++ some_array_problem.cpp -o problem
./problem
```

## Requirements

*   A C++ compiler (GCC, Clang, MSVC) supporting C++11 or later.

## Owner

*   **Name**: Anurag Singh
*   **GitHub**: [anuragSingh2jz](https://github.com/anuragsingh2jz)
