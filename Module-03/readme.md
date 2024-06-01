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
