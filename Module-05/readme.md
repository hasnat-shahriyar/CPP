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
