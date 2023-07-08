# Stack (LIFO)

Implement a stack using a linked list implementation. Each element of the list should contain a key of type int (signed integer) and the necessary pointers required by the stack implementation.

## Program Functionality

Your program should support the following operations:

- **i** - Insert (push) a new element onto the stack.
- **d** - Delete (pop) an element from the stack and print its key on the screen. If underflow occurs (i.e., the stack is empty), print the '!' character.
- **g** - Get an element from the stack at a given position and print its key on the screen. If the given index is greater than or equal to the size of the stack, print the '?' character.
- **q** - Quit the program.

The element at the bottom of the stack should be interpreted as an element at position 0, the second element is at position 1, and so on. The top element of the stack is at index size-1.

## Compilation and Execution

To compile the program, follow these steps:

1. Use a C++ compiler (such as g++) to compile the code:

   ```shell
   g++ -o Stack Stack.cpp
   ```

2. Run the program using the following command:

   ```shell
   ./Stack
   ```

   The program will start running and wait for user input.


## Input

Any number of lines, where each line contains one of the following commands:

- **i \<key>** - Insert a new element with the specified key onto the stack.
- **d** - Delete (pop) an element from the stack.
- **g \<index>** - Get an element from the stack at the given index.
- **q** - Quit the program.

Here:
- **i, d, g, q** are identifiers for the operations.
- **\<index>** is the position of an element in the stack.
- **\<key>** is the key of an element (an integer value to be stored in the element).

The **q** operation will always be the last operation.

## Output

For every **g** and **d** operation, the key of the found (or deleted) element should be printed. If underflow occurs during the **d** operation, print the '!' character. If the given index is out of range in the **g** operation, print the '?' character. Values should be separated by the newline character (std::endl or '\n').

## Example

Input:
```
i 5
i 1
i 2
i 3
i 4
d
g 3
g 0
g 4
d
d
d
d
d
q
```

Output:
```
4
3
5
?
3
2
1
5
!
```

**Note:** The output represents the keys of the found or deleted elements. The '!' character indicates an underflow condition, and the '?' character indicates an out-of-range index. The order of the output corresponds to the order of the **g** and **d** operations.