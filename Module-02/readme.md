# Dynamic Memory Allocation

Dynamic array allocation in C++ is a way to create arrays whose size can be determined during runtime, unlike static arrays where the size must be known at compile-time. Let's break it down step-by-step.

### Basic Concepts

1. **Static Array**: Fixed size, declared at compile time.

   ```cpp
   int staticArray[10]; // an array of 10 integers
   ```

2. **Dynamic Array**: Size can be determined during runtime using pointers and dynamic memory allocation.

### Dynamic Array Allocation

1. **Pointers**: A pointer is a variable that stores the memory address of another variable.

   ```cpp
   int* ptr; // ptr is a pointer to an integer
   ```

2. **Dynamic Memory Allocation**: Using the `new` operator to allocate memory on the heap.
   ```cpp
   int* dynamicArray = new int[size];
   ```

### Step-by-Step Example

#### Step 1: Declare a Pointer

Declare a pointer that will point to the dynamically allocated array.

```cpp
int* dynamicArray;
```

#### Step 2: Allocate Memory

Use the `new` operator to allocate an array of integers.

```cpp
int size = 5; // for example, size is 5
dynamicArray = new int[size];
```

#### Step 3: Use the Array

You can use the array just like a regular array.

```cpp
for (int i = 0; i < size; i++) {
    dynamicArray[i] = i * 2; // assigning values to the array
}

for (int i = 0; i < size; i++) {
    std::cout << dynamicArray[i] << " "; // printing values
}
```

#### Step 4: Free the Memory

After you're done using the array, free the allocated memory using the `delete[]` operator to avoid memory leaks.

```cpp
delete[] dynamicArray;
```

### Complete Example Code

Here’s a complete program that demonstrates dynamic array allocation, usage, and deallocation:

```cpp
#include <iostream>

int main() {
    int size;

    // Ask the user for the size of the array
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Step 1: Declare a pointer
    int* dynamicArray = nullptr;

    // Step 2: Allocate memory
    dynamicArray = new int[size];

    // Step 3: Use the array
    for (int i = 0; i < size; i++) {
        dynamicArray[i] = i * 2; // initialize the array
    }

    // Print the array
    std::cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;

    // Step 4: Free the memory
    delete[] dynamicArray;

    return 0;
}
```

### Key Points

- **Memory Management**: Always use `delete[]` to free dynamically allocated arrays to prevent memory leaks.
- **Bounds Checking**: Ensure you don't access elements out of the bounds of the array.
- **Null Pointers**: Check if the allocation was successful (e.g., `if (dynamicArray == nullptr)`).

Dynamic array allocation is powerful, especially when you need flexible array sizes that can't be determined at compile time. However, it requires careful memory management to avoid issues like memory leaks and pointer errors.

# Static vs Dynamic Memory

Understanding the differences between static and dynamic memory is essential for efficient programming and memory management in C++. Let's explore these concepts in detail:

### Static Memory Allocation

**Definition**: Static memory allocation refers to the allocation of memory at compile time before the associated program is executed.

**Characteristics**:

- **Size Determination**: The size of the memory must be known at compile time.
- **Lifetime**: The memory is allocated when the program starts and deallocated when the program ends.
- **Scope**: Typically, the scope of the variables is limited to the block in which they are defined.
- **Memory Area**: Static variables are usually stored in the stack (for local variables) or data segment (for global/static variables).

**Examples**:

- Global and static variables:

  ```cpp
  int globalVar; // global variable, lifetime is the entire program execution
  static int staticVar; // static variable, retains its value between function calls
  ```

- Local variables:
  ```cpp
  void func() {
      int localVar = 10; // local variable, lifetime is within the function
  }
  ```

**Advantages**:

- Simplicity: Easy to use and manage.
- Efficiency: No overhead of runtime memory management.

**Disadvantages**:

- Inflexibility: The size must be known at compile time and cannot change.

### Dynamic Memory Allocation

**Definition**: Dynamic memory allocation refers to the allocation of memory during runtime using pointers and dynamic memory management functions.

**Characteristics**:

- **Size Determination**: The size of the memory can be decided during runtime.
- **Lifetime**: The memory is allocated and deallocated manually using `new` and `delete` operators.
- **Scope**: The scope of dynamically allocated memory is managed through pointers.
- **Memory Area**: Dynamically allocated memory is stored in the heap.

**Examples**:

- Allocating an array dynamically:
  ```cpp
  int* dynamicArray = new int[10]; // array of 10 integers
  delete[] dynamicArray; // free the allocated memory
  ```

**Advantages**:

- Flexibility: Memory can be allocated as needed at runtime.
- Efficiency: Can lead to better utilization of memory for varying data sizes.

**Disadvantages**:

- Complexity: Requires manual management of memory (allocation and deallocation).
- Risks: Potential for memory leaks and pointer-related errors if not managed correctly.

### Comparison

| Feature                | Static Memory Allocation                                  | Dynamic Memory Allocation                 |
| ---------------------- | --------------------------------------------------------- | ----------------------------------------- |
| **Timing**             | Compile-time                                              | Runtime                                   |
| **Size Determination** | Fixed, known at compile time                              | Variable, determined at runtime           |
| **Lifetime**           | Entire program execution (global/static) or block (local) | Controlled manually, until `delete`       |
| **Memory Area**        | Stack or Data Segment                                     | Heap                                      |
| **Management**         | Automatic by the compiler                                 | Manual by the programmer                  |
| **Performance**        | Faster, no overhead                                       | Slight overhead due to runtime allocation |
| **Flexibility**        | Less flexible                                             | More flexible                             |
| **Risk of Errors**     | Low (except for stack overflow)                           | Higher (memory leaks, dangling pointers)  |

### Example to Illustrate Both

```cpp
#include <iostream>

int main() {
    // Static array
    int staticArray[5] = {1, 2, 3, 4, 5};
    std::cout << "Static Array: ";
    for (int i = 0; i < 5; i++) {
        std::cout << staticArray[i] << " ";
    }
    std::cout << std::endl;

    // Dynamic array
    int size;
    std::cout << "Enter size of dynamic array: ";
    std::cin >> size;

    int* dynamicArray = new int[size];
    for (int i = 0; i < size; i++) {
        dynamicArray[i] = i * 2;
    }
    std::cout << "Dynamic Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;

    // Free the dynamically allocated memory
    delete[] dynamicArray;

    return 0;
}
```

In this example:

- `staticArray` is allocated statically with a fixed size of 5.
- `dynamicArray` is allocated dynamically with a size specified by the user at runtime.

Understanding these differences helps in choosing the appropriate memory allocation strategy based on the requirements of your program.
