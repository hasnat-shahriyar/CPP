# Class and Object

### Class

A **class** is like a blueprint or a template for creating objects. It defines a type of object, including what properties (data) and behaviors (functions) those objects can have. Think of a class as a recipe for baking a cake. The recipe tells you what ingredients (data) and steps (functions) are needed to make the cake, but it isn't a cake itself.

Here’s a simple example of a class in C++:

```cpp
class Car {
public:
    // Properties
    string brand;
    string model;
    int year;

    // Behaviors (methods)
    void drive() {
        cout << "The car is driving." << endl;
    }

    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};
```

In this example:

- `Car` is the class name.
- `brand`, `model`, and `year` are properties (or member variables) of the class.
- `drive` and `displayInfo` are methods (or member functions) of the class.

### Object

An **object** is an instance of a class. When you create an object, you are making something based on the class blueprint. Using the cake analogy, an object is the actual cake made from the recipe.

Here’s how you create objects from the `Car` class and use them:

```cpp
int main() {
    // Creating objects of the Car class
    Car car1;
    Car car2;

    // Setting properties for car1
    car1.brand = "Toyota";
    car1.model = "Corolla";
    car1.year = 2020;

    // Setting properties for car2
    car2.brand = "Honda";
    car2.model = "Civic";
    car2.year = 2018;

    // Using methods of the Car class
    car1.drive();
    car1.displayInfo();

    car2.drive();
    car2.displayInfo();

    return 0;
}
```

In this example:

- `car1` and `car2` are objects of the `Car` class.
- We set the properties of `car1` and `car2` using the dot `.` operator.
- We call the methods of `car1` and `car2` using the dot `.` operator.

### Summary

- **Class**: A blueprint or template for creating objects. It defines the properties and methods that the objects will have.
- **Object**: An instance of a class. It's created based on the class blueprint and has its own values for the properties defined by the class.

By using classes and objects, you can organize your code in a way that models real-world entities, making it more manageable and reusable.

##

# Constructor

### What is a Constructor?

A constructor is a special member function of a class that is automatically called when an object of the class is instantiated. The main purpose of a constructor is to initialize objects. Constructors have the same name as the class and do not have a return type.

### Breakdown of the Code Example

Let's go through the code step by step to see how the constructor is used.

```cpp
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int age;
    double height;

    // Constructor
    Student(int a, double h)
    {
        age = a;
        height = h;
    }
};

int main()
{
    int age;
    double height;
    char name[100];
    cout << "Enter Name: ";
    cin.getline(name, 100);
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Height: ";
    cin >> height;

    // Create an object of the Student class
    Student mim(age, height);

    cout << endl;
    cout << "Output : " << "Name: " << name << ", Age: " << mim.age << ", Height: " << mim.height << " feet" << endl;
    return 0;
}
```

### Explanation

1. **Class Definition and Members**:

   ```cpp
   class Student
   {
   public:
       int age;
       double height;
   ```

   - `Student` is a class with two public member variables: `age` (an integer) and `height` (a double).

2. **Constructor**:

   ```cpp
   Student(int a, double h)
   {
       age = a;
       height = h;
   }
   ```

   - The constructor `Student(int a, double h)` is defined within the class.
   - This constructor takes two parameters: an integer `a` and a double `h`.
   - Inside the constructor, the member variables `age` and `height` are initialized with the values of `a` and `h`, respectively.

3. **Main Function**:

   ```cpp
   int main()
   {
       int age;
       double height;
       char name[100];
       cout << "Enter Name: ";
       cin.getline(name, 100);
       cout << "Enter Age: ";
       cin >> age;
       cout << "Enter Height: ";
       cin >> height;

       // Create an object of the Student class
       Student mim(age, height);

       cout << endl;
       cout << "Output : " << "Name: " << name << ", Age: " << mim.age << ", Height: " << mim.height << " feet" << endl;
       return 0;
   }
   ```

   - The main function starts by declaring variables `age`, `height`, and `name`.
   - It prompts the user to input their name, age, and height.
   - After getting the inputs, it creates an object `mim` of the `Student` class using the `Student` constructor.
   - The constructor initializes the `mim` object’s `age` and `height` with the user-provided values.
   - Finally, the program prints out the name, age, and height.

### Key Points

- **Constructor Call**:

  ```cpp
  Student mim(age, height);
  ```

  - This line creates an instance of the `Student` class named `mim`.
  - The constructor `Student(int a, double h)` is called with the arguments `age` and `height`.
  - The constructor initializes the member variables `age` and `height` of the `mim` object.

- **Initialization**:
  - The member variables of the `mim` object are set to the values provided by the user input through the constructor.

### Output Example

If the user enters the following inputs:

```
Enter Name: John Doe
Enter Age: 20
Enter Height: 5.9
```

The output will be:

```
Output : Name: John Doe, Age: 20, Height: 5.9 feet
```

This demonstrates how constructors initialize objects with specific values when they are created.

##

# `this` keyword:

The `this` keyword in C++ is a pointer to the current object instance within a class. It is used to differentiate between class members and parameters when they have the same name. Here's the modified version of the code to include the `this` keyword:

```cpp
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int age;
    double height;

    // Constructor with this keyword
    Student(int age, double height)
    {
        // Using this keyword to distinguish member variables from parameters
        this->age = age;
        this->height = height;
    }
};

int main()
{
    int age;
    double height;
    char name[100];
    cout << "Enter Name: ";
    cin.getline(name, 100);
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Height: ";
    cin >> height;

    // Create an object of the Student class
    Student mim(age, height);

    cout << endl;
    cout << "Output : " << "Name: " << name << ", Age: " << mim.age << ", Height: " << mim.height << " feet" << endl;
    return 0;
}
```

### Explanation of the Changes

1. **Constructor with `this` Keyword**:

   ```cpp
   Student(int age, double height)
   {
       // Using this keyword to distinguish member variables from parameters
       this->age = age;
       this->height = height;
   }
   ```

   - The constructor parameters are named `age` and `height`, the same as the class member variables.
   - To distinguish the member variables from the parameters, the `this` keyword is used.
   - `this->age` refers to the class member variable `age`.
   - `this->height` refers to the class member variable `height`.

2. **Usage of `this` Keyword**:
   - The `this` pointer points to the current instance of the class.
   - `this->age = age;` means assign the value of the parameter `age` to the member variable `age` of the current object.
   - Similarly, `this->height = height;` means assign the value of the parameter `height` to the member variable `height` of the current object.

### Key Points

- **Purpose of `this`**:
  - The `this` keyword is particularly useful when member variable names are the same as parameter names, avoiding naming conflicts.
  - It clearly indicates that the member variables are being assigned values from the parameters.

### Output Example

If the user enters the following inputs:

```
Enter Name: John Doe
Enter Age: 20
Enter Height: 5.9
```

The output will be:

```
Output : Name: John Doe, Age: 20, Height: 5.9 feet
```

By using the `this` keyword, the code explicitly shows that the member variables of the `mim` object are being set to the values provided by the user through the constructor parameters.

# Return Object from Function

Returning an object from a function in C++ involves creating an object within the function and then returning it to the caller. Here's the explanation using your provided code:

```cpp
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, int gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

// Function to create and return a Student object
Student func()
{
    int roll;
    int cls;
    double gpa;

    // Getting input for student attributes
    cin >> roll >> cls >> gpa;

    // Creating a Student object named bio with the provided attributes
    Student bio(roll, cls, gpa);

    // Returning the Student object
    return bio;
}

int main()
{
    // Calling func() to get a Student object
    Student output = func();

    // Printing the attributes of the returned Student object
    cout << "Roll: " << output.roll << "; Class: " << output.cls << "; GPA: " << output.gpa << endl;
    return 0;
}
```

### Explanation

1. **Class Definition (Student)**:

   - Defines a class named `Student` with public member variables `roll`, `cls`, and `gpa`.

2. **Constructor**:

   - Defines a constructor for the `Student` class to initialize its member variables.

3. **Function `func()`**:

   - Declares a function named `func()` that returns a `Student` object.
   - Inside the function, it prompts the user to input `roll`, `cls`, and `gpa`.
   - Then it creates a `Student` object named `bio` with the provided attributes using the constructor.
   - Finally, it returns the `bio` object.

4. **Main Function**:
   - Calls the `func()` function, which returns a `Student` object.
   - Stores the returned `Student` object in the `output` variable.
   - Prints the attributes (`roll`, `cls`, `gpa`) of the `output` object.

### Key Points

- **Return Object from Function**:

  - The function `func()` returns a `Student` object.
  - Inside the function, a `Student` object named `bio` is created and initialized with user-provided attributes.
  - This `bio` object is then returned from the function.

- **Usage**:
  - Returning objects from functions can be useful when you want to encapsulate certain operations or calculations within a function and then return the result as an object.

### Output Example

If the user enters the following inputs:

```
101 10 3.8
```

The output will be:

```
Roll: 101; Class: 10; GPA: 3.8
```

This demonstrates how an object is created within a function, initialized, and then returned to the caller for further use.
