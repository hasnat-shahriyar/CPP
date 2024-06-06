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

Certainly! Let's walk through the provided code step by step, explaining how Selection Sort is implemented to sort an array of `Student` objects based on their marks.

```cpp
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    double marks;
};

int main()
{
    int n;
    cin >> n;

    Student *a = new Student[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
    }

    // Sorting from low to high marks
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j].marks > a[j + 1].marks)
            {
                // Swapping
                swap(a[j], a[j + 1]);
            }
        }
    }

    cout << "Sorted by CGPA (low to high):" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Name: " << a[i].name << " Roll: " << a[i].roll << " CGPA: " << a[i].marks << endl;
    }

    // Sorting from high to low marks
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j].marks < a[j + 1].marks)
            {
                // Swapping
                swap(a[j], a[j + 1]);
            }
        }
    }

    cout << "Sorted by CGPA (high to low):" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Name: " << a[i].name << " Roll: " << a[i].roll << " CGPA: " << a[i].marks << endl;
    }

    delete[] a;
    return 0;
}
```

### Explanation:

1. **Input:**

   - Read the number of students (`n`).
   - Dynamically allocate memory for an array of `Student` objects.

2. **Input Student Information:**

   - Iterate `n` times to input details for each student: name, roll, and marks.

3. **Sorting from low to high marks:**

   - This part of the code sorts the array of students in ascending order of marks.
   - It uses a nested loop to iterate over each element in the array.
   - The outer loop (`i`) controls the number of passes through the array.
   - The inner loop (`j`) iterates from 0 to `n - i - 1` for each pass.
   - Within the inner loop, if the marks of the current student (`a[j]`) are greater than the marks of the next student (`a[j + 1]`), it swaps their positions using the `swap` function.
   - This process continues until the array is sorted in ascending order of marks.

4. **Output Sorted Array (low to high):**

   - After sorting, it outputs the sorted array of students in ascending order of marks.

5. **Sorting from high to low marks:**

   - This part of the code sorts the array of students in descending order of marks.
   - It follows a similar approach to sorting in ascending order but checks if the marks of the current student are less than the marks of the next student to swap their positions.
   - This process continues until the array is sorted in descending order of marks.

6. **Output Sorted Array (high to low):**

   - Finally, it outputs the sorted array of students in descending order of marks.

7. **Memory Cleanup:**
   - Deletes the dynamically allocated memory to prevent memory leaks.

This code implements Selection Sort to sort an array of `Student` objects based on their marks in both ascending and descending order.

Let's explain the sorting process using the Selection Sort algorithm visually.

### Visual Explanation of Selection Sort:

**Given array of objects (students):**

```
[
  {name: "John", roll: 101, marks: 3.5},
  {name: "Alice", roll: 102, marks: 4.0},
  {name: "Bob", roll: 103, marks: 3.2},
  {name: "Emily", roll: 104, marks: 3.8}
]
```

1. **Sorting from low to high marks:**

   **Pass 1:**  
   Start with the first student. Assume it has the lowest marks initially.  
   Compare its marks with all other students.  
   If we find a student with lower marks, swap their positions.  
   After the first pass, the student with the lowest marks will be at index 0.

   **Visualization:**  
   ![Selection Sort Pass 1](https://i.imgur.com/WUV2yLt.png)

   **Pass 2:**  
   Move to the next student (at index 1) and repeat the process.  
   Find the student with the lowest marks among the remaining students.  
   Swap positions if necessary.

   **Visualization:**  
   ![Selection Sort Pass 2](https://i.imgur.com/Jz3VGms.png)

   **Pass 3:**  
   Repeat the process for the remaining students until the second-last student.  
   At the end of this pass, the array will be sorted in ascending order of marks.

2. **Sorting from high to low marks:**

   After sorting in ascending order, we'll sort in descending order.

   **Visualization:**  
   It's essentially the same process as sorting in ascending order, but this time we look for the highest marks and swap accordingly.

   ![Selection Sort Descending](https://i.imgur.com/gdjnwDk.png)

   At the end of this process, the array will be sorted both in ascending and descending order of marks.

### Summary:

Selection Sort repeatedly selects the minimum (or maximum) element from the unsorted part of the array and moves it to the beginning (or end). This process continues until the array is sorted. Each pass through the array selects the next element to be placed in its correct position.

# Counting Sort

### Code Explanation:

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int frq[26] = {0};

    for (char c : s)
    {
        frq[c - 'a']++;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        for (int j = 0; j < frq[i - 'a']; j++)
        {
            cout << i;
        }
    }
    return 0;
}
```

#### Step-by-Step Explanation:

1. **Include Necessary Headers:**

   ```cpp
   #include <bits/stdc++.h>
   using namespace std;
   ```

   This includes all the standard library headers. `using namespace std;` allows us to avoid prefixing standard library names with `std::`.

2. **Main Function:**

   ```cpp
   int main()
   {
       string s;
       cin >> s;
   ```

   - Declare a string variable `s`.
   - Read input into `s`.

3. **Frequency Array Initialization:**

   ```cpp
   int frq[26] = {0};
   ```

   - Declare an array `frq` of size 26, initialized to 0. This array will store the frequency of each letter in the string.

4. **Count Frequencies:**

   ```cpp
   for (char c : s)
   {
       frq[c - 'a']++;
   }
   ```

   - Iterate over each character `c` in the string `s`.
   - Increment the corresponding element in the `frq` array. `c - 'a'` converts the character to an index (0 for 'a', 1 for 'b', ..., 25 for 'z').

5. **Output Sorted Characters:**

   ```cpp
   for (char i = 'a'; i <= 'z'; i++)
   {
       for (int j = 0; j < frq[i - 'a']; j++)
       {
           cout << i;
       }
   }
   ```

   - Iterate over each letter from 'a' to 'z'.
   - For each letter, print it `frq[i - 'a']` times, where `i - 'a'` gives the index corresponding to the letter in the `frq` array.

6. **Return Statement:**
   ```cpp
   return 0;
   }
   ```
   - End the main function and return 0.

### Visual Explanation:

Let's consider the input string `"examples"`.

1. **Input:**

   ```
   s = "examples"
   ```

2. **Initialize Frequency Array:**

   ```
   frq = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
   ```

3. **Count Frequencies:**

   - For `c = 'e'`, `frq['e' - 'a']++` → `frq[4]++` → `frq[4] = 1`
   - For `c = 'x'`, `frq['x' - 'a']++` → `frq[23]++` → `frq[23] = 1`
   - For `c = 'a'`, `frq['a' - 'a']++` → `frq[0]++` → `frq[0] = 1`
   - For `c = 'm'`, `frq['m' - 'a']++` → `frq[12]++` → `frq[12] = 1`
   - For `c = 'p'`, `frq['p' - 'a']++` → `frq[15]++` → `frq[15] = 1`
   - For `c = 'l'`, `frq['l' - 'a']++` → `frq[11]++` → `frq[11] = 1`
   - For `c = 'e'`, `frq['e' - 'a']++` → `frq[4]++` → `frq[4] = 2`
   - For `c = 's'`, `frq['s' - 'a']++` → `frq[18]++` → `frq[18] = 1`

   Updated `frq` array:

   ```
   frq = [1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0]
   ```

4. **Output Sorted Characters:**

   - For `i = 'a'` (`frq[0] = 1`): output `'a'`
   - For `i = 'e'` (`frq[4] = 2`): output `'ee'`
   - For `i = 'l'` (`frq[11] = 1`): output `'l'`
   - For `i = 'm'` (`frq[12] = 1`): output `'m'`
   - For `i = 'p'` (`frq[15] = 1`): output `'p'`
   - For `i = 's'` (`frq[18] = 1`): output `'s'`
   - For `i = 'x'` (`frq[23] = 1`): output `'x'`

   Final output:

   ```
   aeeelmpsx
   ```

### Visual Method:

**Input String:**

```
examples
```

**Frequency Array (Initial State):**

```
a: 0, b: 0, c: 0, d: 0, e: 0, f: 0, g: 0, h: 0, i: 0, j: 0, k: 0, l: 0, m: 0, n: 0, o: 0, p: 0, q: 0, r: 0, s: 0, t: 0, u: 0, v: 0, w: 0, x: 0, y: 0, z: 0
```

**After Counting Frequencies:**

```
a: 1, b: 0, c: 0, d: 0, e: 2, f: 0, g: 0, h: 0, i: 0, j: 0, k: 0, l: 1, m: 1, n: 0, o: 0, p: 1, q: 0, r: 0, s: 1, t: 0, u: 0, v: 0, w: 0, x: 1, y: 0, z: 0
```

**Output Sorted Characters:**

```
a: 1 → a
e: 2 → ee
l: 1 → l
m: 1 → m
p: 1 → p
s: 1 → s
x: 1 → x
```

**Final Output:**

```
aeeelmpsx
```

This visualization helps in understanding how the frequency array is used to construct the sorted output by iterating over each character from 'a' to 'z' and printing them according to their frequencies.
