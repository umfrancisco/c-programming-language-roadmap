# C Programming Language — Complete Learning Roadmap

A structured learning roadmap to study the **C programming language**, from fundamental concepts to advanced programming, memory management, data structures, algorithms, and system programming.

The goal of this repository is to build a strong understanding of C, improve problem-solving skills, and explore how computers work at a lower level.

---

## Table of Contents

- [Learning Objectives](#learning-objectives)
- [1. Development Environment and Fundamentals](#1-development-environment-and-fundamentals)
- [2. Variables, Data Types and Operators](#2-variables-data-types-and-operators)
- [3. Control Flow and Functions](#3-control-flow-and-functions)
- [4. Arrays, Strings and Pointers](#4-arrays-strings-and-pointers)
- [5. Memory Management](#5-memory-management)
- [6. Structs, Enums, Unions and Typedef](#6-structs-enums-unions-and-typedef)
- [7. Data Structures and Algorithms](#7-data-structures-and-algorithms)
- [8. File Handling and System Programming](#8-file-handling-and-system-programming)
- [9. Advanced C Programming](#9-advanced-c-programming)
- [10. Practical Projects](#10-practical-projects)
- [11. Development Tools](#11-development-tools)
- [12. Learning Resources](#12-learning-resources)

---

## Learning Objectives

By completing this roadmap, the main objectives are to:

- Understand the C programming language and its compilation process.
- Develop a strong understanding of variables, data types, and memory representation.
- Master pointers and pointer arithmetic.
- Understand stack and heap memory.
- Learn dynamic memory allocation and deallocation.
- Implement common data structures and algorithms from scratch.
- Understand how C interacts with the operating system.
- Develop debugging and memory analysis skills.
- Build practical command-line applications and system-level software.

---

# 1. Development Environment and Fundamentals

**Level:** Beginner

Start by understanding the development environment and how C programs are compiled and executed.

### Topics

- [x] What is C?
- [x] History and evolution of C.
- [x] Why C is still relevant.
- [x] Compiled vs. interpreted languages.
- [x] C compilation process:
  - [ ] Preprocessing.
  - [ ] Compilation.
  - [ ] Assembly.
  - [ ] Linking.
- [ ] GCC and Clang compilers.
- [x] Header files and source files.
- [x] The `main()` function.
- [x] Standard input and output.
- [ ] Compilation flags and warnings.
- [ ] Basic debugging.

### Important Concepts

| Concept | Description |
|---|---|
| `#include` | Includes header files |
| `main()` | Program entry point |
| `printf()` | Prints formatted output |
| `scanf()` | Reads formatted input |
| `sizeof` | Returns the size of a type or object |
| `gcc` | GNU C compiler |
| `-Wall -Wextra` | Enables common compiler warnings |

### Compilation

Recommended compilation command:

```bash
gcc -Wall -Wextra -Wpedantic -std=c17 -g main.c -o main
```

Understand what each flag does instead of simply memorizing the command.

### Practice Projects

- [x] Hello World.
- [x] Simple calculator.
- [x] Temperature converter.
- [x] Number guessing game.
- [x] Basic command-line menu.

---

# 2. Variables, Data Types and Operators

**Level:** Beginner

Learn how C represents and manipulates data.

### Data Types

- [x] `char`
- [x] `int`
- [x] `float`
- [x] `double`
- [ ] `short`
- [x] `long`
- [ ] `long long`
- [x] `unsigned`
- [ ] `bool`
- [ ] `void`

### Variables and Constants

- [x] Variable declaration and initialization.
- [x] Type conversion.
- [x] Implicit and explicit casting.
- [ ] Constants with `const`.
- [x] Preprocessor macros with `#define`.
- [ ] Integer limits.

### Operators

- [x] Arithmetic operators.
- [x] Assignment operators.
- [x] Comparison operators.
- [x] Logical operators.
- [ ] Bitwise operators.
- [x] Increment and decrement.
- [x] Ternary operator.
- [ ] Operator precedence.

### Additional Concepts

- [x] Signed vs. unsigned integers.
- [ ] Integer overflow.
- [x] Floating-point precision.
- [ ] Integer promotion.
- [x] Type sizes and representation.

### Practice Projects

- [ ] Unit converter.
- [ ] Basic mathematical operations.
- [ ] Number parity checker.
- [ ] Bitwise calculator.
- [x] Binary-to-decimal converter.

---

# 3. Control Flow and Functions

**Level:** Beginner

Learn how to control program execution and organize code into reusable components.

### Control Flow

- [x] `if`, `else if`, `else`.
- [x] `switch`.
- [x] `for`.
- [x] `while`.
- [ ] `do while`.
- [x] `break` and `continue`.
- [ ] Nested loops.

### Functions

- [x] Function declarations and definitions.
- [x] Function parameters.
- [x] Return types.
- [x] `void` functions.
- [ ] Function prototypes.
- [ ] Scope and lifetime.
- [x] Local and global variables.
- [ ] Recursion.
- [x] Passing arguments by value.

### Additional Concepts

- [ ] Call stack.
- [ ] Stack frames.
- [ ] Static variables.
- [ ] Function pointers (introduction).

### Practice Projects

- [ ] Factorial calculator.
- [ ] Fibonacci sequence generator.
- [ ] Prime number checker.
- [ ] Multiplication table.
- [ ] Recursive factorial.
- [ ] CLI calculator organized into functions.

---

# 4. Arrays, Strings and Pointers

**Level:** Beginner to Intermediate

One of the most important stages of learning C.

Unlike JavaScript, C does not provide high-level array and string abstractions. Understanding how these structures relate to memory is essential.

## 4.1 Arrays

- [x] Array declaration and initialization.
- [x] Array indexing.
- [x] Iterating through arrays.
- [x] Multidimensional arrays.
- [x] Array length and `sizeof`.
- [x] Passing arrays to functions.
- [x] Array boundaries.

## 4.2 Strings

C does not have a native string type. Strings are represented as arrays of characters terminated by a null character (`\0`).

Topics:

- [x] Character arrays.
- [x] String termination.
- [x] String literals.
- [x] `strlen()`.
- [x] `strcpy()`.
- [ ] `strncpy()`.
- [ ] `strcmp()`.
- [ ] `strcat()`.
- [ ] `fgets()`.
- [ ] String manipulation.

## 4.3 Pointers

Pointers are fundamental to C programming.

Topics:

- [x] Memory addresses.
- [x] Address-of operator (`&`).
- [x] Dereference operator (`*`).
- [x] Pointer declaration.
- [x] Pointer initialization.
- [x] Null pointers.
- [ ] Pointer arithmetic.
- [x] Pointers and arrays.
- [ ] Pointers and functions.
- [ ] Passing pointers as arguments.
- [ ] Pointers to pointers.
- [ ] `void*`.
- [ ] Const pointers.
- [ ] Dangling pointers.
- [ ] Wild pointers.

### Practice Projects

- [x] Reverse an array.
- [ ] Find the largest and smallest elements.
- [ ] Implement your own `strlen()`.
- [ ] Implement your own `strcmp()`.
- [ ] Reverse a string using pointers.
- [ ] Swap two variables using pointers.
- [ ] Implement a simple string manipulation library.

**Important:** Spend enough time understanding what happens in memory when declaring variables, creating pointers, dereferencing them, and passing them to functions.

---

# 5. Memory Management

**Level:** Intermediate

Learn how C handles memory allocation and deallocation.

This is one of the most important aspects of C because developers are responsible for managing dynamically allocated memory.

## 5.1 Memory Organization

- [ ] Stack memory.
- [ ] Heap memory.
- [ ] Static and global memory.
- [ ] Text/code segment.
- [ ] Stack vs. heap allocation.
- [ ] Object lifetime.

## 5.2 Dynamic Memory Allocation

- [ ] `malloc()`.
- [ ] `calloc()`.
- [ ] `realloc()`.
- [ ] `free()`.

## 5.3 Memory Management Problems

- [ ] Memory leaks.
- [ ] Double free.
- [ ] Use-after-free.
- [ ] Buffer overflow.
- [ ] Out-of-bounds access.
- [ ] Dangling pointers.
- [ ] Uninitialized memory.
- [ ] Undefined behavior.

## 5.4 Debugging Tools

- [ ] GDB.
- [ ] Valgrind.
- [ ] AddressSanitizer.
- [ ] UndefinedBehaviorSanitizer.

### Practice Projects

- [ ] Dynamic array.
- [ ] Dynamic string.
- [ ] Simple input buffer.
- [ ] Resizable character buffer.
- [ ] Dynamic matrix.
- [ ] Memory allocation tracker.

---

# 6. Structs, Enums, Unions and Typedef

**Level:** Intermediate

Learn how to create custom data structures and organize related information.

### Topics

- [x] `struct`.
- [ ] `typedef`.
- [ ] `enum`.
- [ ] `union`.
- [ ] Nested structures.
- [ ] Pointers to structures.
- [ ] Structure padding and alignment.
- [ ] Bit fields.
- [ ] Passing structures to functions.
- [ ] Structure pointers and the `->` operator.

### Practice Projects

- [ ] Student management system.
- [ ] Inventory management system.
- [ ] Contact book.
- [ ] Simple banking system.
- [ ] Library management system.

---

# 7. Data Structures and Algorithms

**Level:** Intermediate

After understanding pointers, memory allocation, and structures, start implementing data structures and algorithms from scratch.

This stage is also important for developing problem-solving skills.

## 7.1 Complexity Analysis

- [ ] Big O notation.
- [ ] Time complexity.
- [ ] Space complexity.
- [ ] Best, average, and worst cases.
- [ ] Amortized complexity.

## 7.2 Data Structures

| Data Structure | Main Concepts |
|---|---|
| Static Array | Indexing, traversal |
| Dynamic Array | Allocation, resizing |
| Linked List | Nodes, pointers |
| Doubly Linked List | Previous and next pointers |
| Stack | LIFO |
| Queue | FIFO |
| Circular Queue | Circular indexing |
| Hash Table | Hashing, collisions |
| Binary Tree | Nodes, traversal |
| Binary Search Tree | Searching, insertion |
| Heap | Priority queues |
| Graph | Vertices, edges |

## 7.3 Algorithms

### Searching

- [ ] Linear search.
- [ ] Binary search.
- [ ] Hash-based lookup.

### Sorting

- [ ] Bubble sort.
- [ ] Selection sort.
- [ ] Insertion sort.
- [ ] Merge sort.
- [ ] Quick sort.
- [ ] Heap sort.
- [ ] Counting sort.
- [ ] Radix sort.

### Graph Algorithms

- [ ] Breadth-first search (BFS).
- [ ] Depth-first search (DFS).
- [ ] Dijkstra's algorithm.

### Additional Topics

- [ ] Recursion.
- [ ] Backtracking.
- [ ] Greedy algorithms.
- [ ] Dynamic programming.

### Recommended Projects

- [ ] Dynamic array implementation.
- [ ] Linked list library.
- [ ] Stack and queue implementation.
- [ ] Hash table with collision handling.
- [ ] Binary search tree.
- [ ] Graph traversal implementation.
- [ ] Sorting algorithm visualizer.

---

# 8. File Handling and System Programming

**Level:** Intermediate

Learn how C interacts with the operating system and filesystem.

## 8.1 File Handling

- [ ] `FILE*`.
- [ ] `fopen()`.
- [ ] `fclose()`.
- [ ] `fread()`.
- [ ] `fwrite()`.
- [ ] `fprintf()`.
- [ ] `fscanf()`.
- [ ] `fgets()`.
- [ ] `fputs()`.
- [ ] `fseek()`.
- [ ] `ftell()`.
- [ ] `rewind()`.
- [ ] Binary vs. text files.

## 8.2 Linux and System Programming

Explore how C interacts with Linux and Unix-like operating systems.

- [ ] POSIX APIs.
- [ ] File descriptors.
- [ ] `open()`.
- [ ] `read()`.
- [ ] `write()`.
- [ ] `close()`.
- [ ] `stat()`.
- [ ] `fork()`.
- [ ] `exec()`.
- [ ] `wait()`.
- [ ] Signals.
- [ ] Environment variables.
- [ ] Process management.
- [ ] Basic inter-process communication.

**Note:** POSIX APIs are not part of standard C, but are widely used on Linux and Unix-like systems.

### Practice Projects

- [ ] File-based contact manager.
- [ ] CSV parser.
- [ ] File copy utility.
- [ ] Directory listing utility.
- [ ] Command-line file search.
- [ ] Basic shell.

---

# 9. Advanced C Programming

**Level:** Advanced

Once comfortable with the previous topics, explore advanced language features and concepts.

### Topics

- [ ] Preprocessor directives.
- [ ] Header guards.
- [ ] Macros.
- [ ] Conditional compilation.
- [ ] Variadic functions.
- [ ] Function pointers.
- [ ] Callback functions.
- [ ] Bit manipulation.
- [ ] Bit fields.
- [ ] `volatile`.
- [ ] `restrict`.
- [ ] `static` and `extern`.
- [ ] Storage duration.
- [ ] Linkage.
- [ ] Translation units.
- [ ] Strict aliasing.
- [ ] Alignment.
- [ ] Undefined behavior.
- [ ] C standard library.
- [ ] C17 and C23 differences.

### Advanced Tooling

- [ ] GDB for debugging.
- [ ] Valgrind for memory analysis.
- [ ] CMake for build configuration.
- [ ] Make for build automation.
- [ ] GCC and Clang.
- [ ] Clang Static Analyzer.
- [ ] Sanitizers.
- [ ] Git and GitHub Actions.

### Practice Projects

- [ ] Custom memory allocator.
- [ ] Generic dynamic array.
- [ ] Generic linked list.
- [ ] Command-line JSON parser.
- [ ] Simple HTTP server.
- [ ] Basic database engine.

---

# 10. Practical Projects

Learning individual concepts is important, but building complete applications is where you consolidate your knowledge.

The following projects provide a progression from beginner to advanced.

## 10.1 CLI Calculator

**Level:** Beginner

Topics:

- Functions and operators.
- Input validation.
- Control flow.

## 10.2 Task Manager

**Level:** Beginner

Topics:

- Structures.
- Arrays.
- File handling.

## 10.3 Text Editor

**Level:** Intermediate

Topics:

- Dynamic memory.
- Strings.
- File operations.

## 10.4 Simple Database

**Level:** Intermediate

Topics:

- Data structures.
- Binary file storage.
- Searching and indexing.

## 10.5 Unix Shell

**Level:** Advanced

Topics:

- Processes.
- System calls.
- Pipes and signals.

## 10.6 HTTP Server

**Level:** Advanced

Topics:

- Sockets.
- Networking.
- HTTP protocol.

---

# 11. Development Tools

Become comfortable with the following tools throughout your learning journey.

| Tool | Purpose |
|---|---|
| GCC | C compiler |
| Clang | Alternative C compiler |
| GDB | Debugging |
| Valgrind | Memory analysis |
| AddressSanitizer | Memory error detection |
| UndefinedBehaviorSanitizer | Undefined behavior detection |
| Make | Build automation |
| CMake | Build configuration |
| Git | Version control |
| Linux | Development environment |

### Recommended Compiler Command

```bash
gcc -Wall -Wextra -Wpedantic -std=c17 -g main.c -o main
```

---

# 12. Learning Resources

| Resource | Description | Link |
|---|---|---|
| beej's guide | Accessible C programming guide | [Website](https://beej.us/guide/bgc/) |
| cppreference | C language and standard library reference | [Website](https://en.cppreference.com/w/c) |

---
