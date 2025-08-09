# Experiment 9 – Pointers in C++

**Name:** Palak Soni  
**Class:** ENTC A3  
**PRN:** 24070123069  
**Title:** Programs on Pointers in C++

---

## Definition of Pointer
A **pointer** in C++ is a variable that stores the memory address of another variable. Instead of holding a data value directly, a pointer holds the location of the data in memory.  
Pointers allow:
- Direct memory access and manipulation
- Dynamic memory allocation
- Efficient array and string handling
- Implementation of data structures like linked lists and trees

---

## Theory
A pointer’s data type determines the type of variable it can point to. The address-of operator (`&`) is used to get the address of a variable, and the dereference operator (`*`) is used to access the value stored at the pointed memory location.

---

## Programs on Pointers

### 1. Basic Arithmetic Pointer – Increment of Pointer
**Algorithm:**
1. Declare variables of different data types (`int`, `bool`, `double`, `float`).
2. Create pointers for each variable type.
3. Assign each pointer the address of its respective variable.
4. Print the initial address stored in the pointer.
5. Increment the pointer and print the new address.
6. Repeat for all data types.


**Explanation:**  
Pointer arithmetic increments the pointer to point to the next memory location based on the size of its data type. The increment value is not always `+1 byte`—it depends on the type it points to.

---


### 2. Addition and Subtraction of Values at Two Different Positions in an Array
**Algorithm:**
1. Initialize an array with integer values.
2. Create two pointers pointing to specific indices of the array.
3. Dereference both pointers to access the values.
4. Perform subtraction and addition of the two values.
5. Display the results.

**Explanation:**  
Two pointers are assigned to different positions in the array. Using dereferencing, the values are fetched and arithmetic operations are performed directly.

---

### 3. Printing Characters of a String Using Pointers
**Algorithm:**
1. Take a string input from the user.
2. Assign a pointer to the first character of the string.
3. Use a loop to print characters one by one by dereferencing the pointer.
4. Increment the pointer until the null terminator (`'\0'`) is reached.


**Explanation:**  
A character pointer is used to iterate through the string until the null terminator is found, printing each character on a new line.

---

### 4. Traversing an Array Using Pointers
**Algorithm:**
1. Initialize an integer array with predefined values.
2. Calculate the array length using `sizeof`.
3. Print the array in original order using indexing.
4. Assign a pointer to the last element of the array.
5. Use a loop to print the array elements in reverse by decrementing the pointer.


**Explanation:**  
By setting the pointer to the last element and decrementing it, the array can be traversed in reverse order.

---

## Conclusion
Pointers are a fundamental feature of C++ that allow direct access to memory addresses, making programs more flexible and efficient.  
From the experiments above, we learned how to:
- Perform arithmetic operations using values pointed by pointers.
- Understand pointer arithmetic and its relation to data type sizes.
- Traverse arrays and strings using pointers.
- Apply pointers to iterate in both forward and reverse directions.



