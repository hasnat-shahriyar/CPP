# Array of Objects

In C++, an array of objects is a collection of instances of a class stored in contiguous memory locations. This concept allows you to manage and manipulate multiple objects efficiently using array indexing. The given code demonstrates the use of an array of objects with the `Student` class.

### Step-by-Step Explanation

1. **Class Definition**:

   ```cpp
   class Student
   {
   public:
       string name;
       int roll;
       double marks;
   };
   ```

   - This defines a class `Student` with three public member variables:
     - `name`: a `string` to store the student's name.
     - `roll`: an `int` to store the student's roll number.
     - `marks`: a `double` to store the student's marks (or CGPA).

2. **Main Function**:

   ```cpp
   int main()
   {
       int n;
       cin >> n;
   ```

   - The `main` function begins by declaring an integer `n`.
   - `cin >> n;` reads the number of students (`n`) from the input.

3. **Dynamic Array Allocation**:

   ```cpp
   Student *a = new Student[n];
   ```

   - This line dynamically allocates an array of `Student` objects of size `n` using the `new` operator.
   - `Student *a` is a pointer to the first element of this dynamically allocated array.

4. **Reading Data into the Array**:

   ```cpp
   for (int i = 0; i < n; i++)
   {
       cin.ignore();
       getline(cin, a[i].name);
       cin >> a[i].roll >> a[i].marks;
   }
   ```

   - This loop iterates `n` times to read data for each student.
     - `cin.ignore();` is used to ignore the newline character left in the input buffer from the previous input operation.
     - `getline(cin, a[i].name);` reads the student's name (including spaces) and stores it in the `name` member of the `i-th` `Student` object.
     - `cin >> a[i].roll >> a[i].marks;` reads the roll number and marks for the `i-th` `Student` object.

5. **Printing Data**:

   ```cpp
   for (int i = 0; i < n; i++)
   {
       cout << "Name: " << a[i].name << " Roll: " << a[i].roll << " CGPA: " << a[i].marks << endl;
   }
   ```

   - This loop iterates `n` times to print the data for each student.
   - `cout << "Name: " << a[i].name << " Roll: " << a[i].roll << " CGPA: " << a[i].marks << endl;` prints the name, roll number, and marks (CGPA) of the `i-th` student.

6. **Deallocating Memory**:

   ```cpp
   delete[] a;
   ```

   - This line deallocates the memory previously allocated for the array of `Student` objects.
   - `delete[] a;` is used to free the entire array, which was allocated with `new`.

### Summary

The code defines a `Student` class and uses it to create a dynamic array of `Student` objects. It reads the number of students, then reads and stores their details in the array. After storing the data, it prints the details of each student and finally deallocates the memory used for the array. This approach allows handling multiple student records efficiently using an array of objects.

# MIN and MAX object from Array

To help visualize how the program finds the student with the minimum and maximum marks, let's break down the process step-by-step with an example. Assume the input data for `n = 3` students is as follows:

```
John
18 8.5
Alice
20 9.3
Bob
19 7.2
```

### Step-by-Step Visualization

1. **Reading Input:**

   - The program reads the number of students, `n = 3`.
   - It dynamically allocates an array `a` of `Student` objects.

2. **Storing Data in Array:**

   - **Iteration 1 (i = 0):**
     - `a[0].name = "John"`
     - `a[0].age = 18`
     - `a[0].marks = 8.5`
   - **Iteration 2 (i = 1):**
     - `a[1].name = "Alice"`
     - `a[1].age = 20`
     - `a[1].marks = 9.3`
   - **Iteration 3 (i = 2):**
     - `a[2].name = "Bob"`
     - `a[2].age = 19`
     - `a[2].marks = 7.2`

3. **Printing the Data:**

   ```
   Output:
   Name: John Age: 18 CGPA: 8.5
   Name: Alice Age: 20 CGPA: 9.3
   Name: Bob Age: 19 CGPA: 7.2
   ```

4. **Finding the Student with Minimum Marks:**

   - Initialize `mn.marks` to `INT_MAX` (a very high value, initially).
   - **Iteration 1 (i = 0):**
     - Compare `a[0].marks` (8.5) with `mn.marks` (INT_MAX).
     - Since 8.5 < INT_MAX, update `mn` to `a[0]` (John).
   - **Iteration 2 (i = 1):**
     - Compare `a[1].marks` (9.3) with `mn.marks` (8.5).
     - Since 9.3 > 8.5, no change.
   - **Iteration 3 (i = 2):**
     - Compare `a[2].marks` (7.2) with `mn.marks` (8.5).
     - Since 7.2 < 8.5, update `mn` to `a[2]` (Bob).
   - **Result:** `mn` is `a[2]` (Bob).

   ```
   Lowest Marked Student:
   Name: Bob Age: 19 CGPA: 7.2
   ```

5. **Finding the Student with Maximum Marks:**
   - Initialize `mx.marks` to `INT_MIN` (a very low value, initially).
   - **Iteration 1 (i = 0):**
     - Compare `a[0].marks` (8.5) with `mx.marks` (INT_MIN).
     - Since 8.5 > INT_MIN, update `mx` to `a[0]` (John).
   - **Iteration 2 (i = 1):**
     - Compare `a[1].marks` (9.3) with `mx.marks` (8.5).
     - Since 9.3 > 8.5, update `mx` to `a[1]` (Alice).
   - **Iteration 3 (i = 2):**
     - Compare `a[2].marks` (7.2) with `mx.marks` (9.3).
     - Since 7.2 < 9.3, no change.
   - **Result:** `mx` is `a[1]` (Alice).
   ```
   Highest Marked Student:
   Name: Alice Age: 20 CGPA: 9.3
   ```

### Final Visualization

The program output based on the given data:

```
Output:
Name: John Age: 18 CGPA: 8.5
Name: Alice Age: 20 CGPA: 9.3
Name: Bob Age: 19 CGPA: 7.2

Lowest Marked Student:
Name: Bob Age: 19 CGPA: 7.2

Highest Marked Student:
Name: Alice Age: 20 CGPA: 9.3
```

This visualizes how the program finds the students with the lowest and highest marks by iterating through the array and comparing the `marks` attribute of each `Student` object.

# Sort Array of Objects using Selection Sort
