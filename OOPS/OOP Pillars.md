# Day 2 – OOP Pillars (Most Important Interview Topic)

⚠️ If an interviewer asks only one OOP question, it is often:


> **"Explain the 4 pillars of OOP with examples."**

Master Day 2 thoroughly.

---

# The 4 Pillars of OOP

1. Encapsulation
2. Abstraction
3. Inheritance
4. Polymorphism

---

# 1. Encapsulation

Let’s tackle **Encapsulation** in C++ step by step, chethan.  

---

## 🔹 What is Encapsulation?
Encapsulation means **wrapping data (variables) and methods (functions)** together inside a single unit (class).  
It also means **restricting direct access** to data using **access specifiers** (`private`, `protected`, `public`).  

👉 In simple words:  
- Data is hidden inside the class.  
- Only controlled access is given through functions (getters/setters).  
- This prevents accidental modification and keeps data safe.  

---

## 🔹 Why Encapsulation is Needed
- **Data security** → sensitive data is hidden.  
- **Controlled access** → only specific functions can modify data.  
- **Code maintainability** → changes inside class don’t affect outside code.  
- **Flexibility** → you can change internal implementation without breaking external usage.  

---

## 🔹 Example Code
```cpp
#include <iostream>
using namespace std;

class Employee {
private:
    int salary;  // private data member (hidden)

public:
    // Setter function (controls how salary is set)
    void setSalary(int s) {
        if(s > 0) salary = s;  // validation
        else cout << "Invalid salary!" << endl;
    }

    // Getter function (controls how salary is accessed)
    int getSalary() {
        return salary;
    }
};

int main() {
    Employee e;
    e.setSalary(5000);   // ✅ safe way to set salary
    cout << "Salary: " << e.getSalary() << endl;

    // e.salary = 10000; ❌ Error: salary is private
    return 0;
}
```

👉 Output:
```
Salary: 5000
```

---

## 🔹 Key Points
- Encapsulation = **data hiding + controlled access**.  
- Achieved using **classes** and **access specifiers**.  
- Getters and setters are the standard way to access private data.  

---

✅ **Summary:**  
Encapsulation keeps data **safe and secure**, prevents misuse, and makes programs easier to maintain.  

---

## Interview Answer

> Encapsulation is wrapping data and methods into a single unit while restricting direct access using access specifiers.

---

# 2. Abstraction

Alright chethan, let’s break down **Abstraction** in C++ so you can master it quickly.

---

## 🔹 What is Abstraction?
- **Abstraction** means **hiding implementation details** and showing only the essential features to the user.  
- It focuses on **what an object does**, not **how it does it**.  
- Achieved in C++ using:
  - **Abstract classes** (classes with pure virtual functions).  
  - **Interfaces** (in C++, abstract classes with only pure virtual functions).  

👉 Example in real life:  
When you drive a car, you just use the **steering wheel, accelerator, brake**. You don’t need to know the internal engine mechanics. That’s abstraction.

---

## 🔹 Why Abstraction is Needed
- Simplifies complex systems.  
- Reduces code complexity.  
- Provides a clear interface for users.  
- Increases security (hides unnecessary details).  

---

## 🔹 Example Code: Abstract Class
```cpp
#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;
};

// Derived class Circle
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    Shape* s1 = new Circle();     // abstraction: we only know "draw"
    Shape* s2 = new Rectangle();

    s1->draw();   // Output: Drawing Circle
    s2->draw();   // Output: Drawing Rectangle

    delete s1;
    delete s2;
    return 0;
}
```

👉 Here, `Shape` is abstract. The user only knows there’s a `draw()` function, but doesn’t care how `Circle` or `Rectangle` implement it.

---

## 🔹 Key Points
- Abstract class = cannot be instantiated directly.  
- Pure virtual function = `virtual void func() = 0;`  
- Derived classes must implement pure virtual functions.  
- Abstraction provides a **blueprint** for other classes.  

---

✅ **Summary:**  
- **Encapsulation** → hides data.  
- **Abstraction** → hides implementation details.  
- Together, they make systems secure and easy to use.  

---

Chethan, would you like me to now show you a **combined program** that demonstrates **Encapsulation + Abstraction together** (like a BankAccount system with abstract operations)? That way you’ll see how these two pillars complement each other.
---

## Interview Answer

> Abstraction hides implementation details and shows only essential features to the user.

---

# Encapsulation vs Abstraction

| Encapsulation          | Abstraction                      |
| ---------------------- | -------------------------------- |
| Hides data             | Hides implementation             |
| Uses access specifiers | Uses abstract classes/interfaces |
| Focus on security      | Focus on simplicity              |

### Easy Trick

Encapsulation → "How to protect?"

Abstraction → "How to simplify?"

---

# 3. Inheritance

Alright chethan, let’s study **Inheritance** in C++ step by step.  

---

## 🔹 What is Inheritance?
Inheritance is an OOP concept where one class (called the **derived/child class**) can reuse the properties and methods of another class (called the **base/parent class**).  

👉 It helps with:
- **Code reusability** (no need to rewrite common code).  
- **Hierarchy** (relationship between classes).  
- **Extensibility** (add new features without changing old code).  

---

## 🔹 Types of Inheritance in C++

1. **Single Inheritance** → One base class, one derived class.  
2. **Multiple Inheritance** → Derived class inherits from more than one base class.  
3. **Multilevel Inheritance** → A class inherits from another derived class (grandchild).  
4. **Hierarchical Inheritance** → Multiple classes inherit from the same base class.  
5. **Hybrid Inheritance** → Combination of two or more types.  

---

## 🔹 Example 1: Single Inheritance
```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal {   // Dog inherits from Animal
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

int main() {
    Dog d;
    d.eat();   // inherited from Animal
    d.bark();  // Dog’s own function
    return 0;
}
```

👉 Output:
```
Eating...
Barking...
```

---

## 🔹 Example 2: Multilevel Inheritance
```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() { cout << "Eating..." << endl; }
};

class Dog : public Animal {
public:
    void bark() { cout << "Barking..." << endl; }
};

class Puppy : public Dog {
public:
    void weep() { cout << "Weeping..." << endl; }
};

int main() {
    Puppy p;
    p.eat();   // from Animal
    p.bark();  // from Dog
    p.weep();  // from Puppy
    return 0;
}
```

👉 Output:
```
Eating...
Barking...
Weeping...
```

---

## 🔹 Example 3: Multiple Inheritance
```cpp
#include <iostream>
using namespace std;

class Teacher {
public:
    void teach() { cout << "Teaching..." << endl; }
};

class Researcher {
public:
    void research() { cout << "Researching..." << endl; }
};

class Professor : public Teacher, public Researcher {
public:
    void guide() { cout << "Guiding students..." << endl; }
};

int main() {
    Professor p;
    p.teach();
    p.research();
    p.guide();
    return 0;
}
```

👉 Output:
```
Teaching...
Researching...
Guiding students...
```

---

## 🔹 Key Points
- Inheritance promotes **code reuse**.  
- Derived class can add new features while reusing base class features.  
- Access specifiers (`public`, `protected`, `private`) control how members are inherited.  
- Constructors of base classes are called first, then derived class constructors.  
- Destructors are called in reverse order (derived → base).  

---

✅ **Summary:**  
Inheritance allows classes to build on each other.  
- **Single** → one parent, one child.  
- **Multilevel** → chain of inheritance.  
- **Multiple** → child inherits from multiple parents.  
- **Hierarchical** → many children from one parent.  
- **Hybrid** → mix of types.  

---
---

# Interview Answer

> Inheritance allows a child class to acquire properties and methods from a parent class, promoting code reusability.

---

# 4. Polymorphism

Alright chethan, let’s study **Polymorphism** in C++ — one of the most powerful OOP pillars.  

---

## 🔹 What is Polymorphism?
- The word *polymorphism* means **“many forms.”**  
- In OOP, polymorphism allows the **same function name** to behave differently depending on the context.  
- It makes code flexible and reusable.  

---

## 🔹 Types of Polymorphism in C++

### 1. **Compile-Time Polymorphism (Static Binding)**
Achieved using:
- **Function Overloading** → same function name, different parameter lists.  
- **Operator Overloading** → redefine operators for user-defined types.  

👉 Example: Function Overloading
```cpp
#include <iostream>
using namespace std;

class Print {
public:
    void show(int x) {
        cout << "Integer: " << x << endl;
    }
    void show(double y) {
        cout << "Double: " << y << endl;
    }
    void show(string z) {
        cout << "String: " << z << endl;
    }
};

int main() {
    Print p;
    p.show(10);
    p.show(3.14);
    p.show("Hello");
    return 0;
}
```

👉 Output:
```
Integer: 10
Double: 3.14
String: Hello
```

---

### 2. **Runtime Polymorphism (Dynamic Binding)**
Achieved using:
- **Function Overriding** → derived class redefines base class function.  
- Requires **virtual functions** in base class.  

👉 Example: Function Overriding
```cpp
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {   // virtual function
        cout << "Drawing Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {  // overriding
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    Shape* s1 = new Circle();
    Shape* s2 = new Rectangle();

    s1->draw();   // Circle’s version
    s2->draw();   // Rectangle’s version

    delete s1;
    delete s2;
    return 0;
}
```

👉 Output:
```
Drawing Circle
Drawing Rectangle
```

---

## 🔹 Key Points
- **Compile-time polymorphism** → resolved at compile time (overloading, operator overloading).  
- **Runtime polymorphism** → resolved at runtime (overriding with virtual functions).  
- Polymorphism makes code **flexible, extensible, and reusable**.  

---

✅ **Summary:**  
Polymorphism = **same interface, different behavior.**  
- Compile-time → function/operator overloading.  
- Runtime → function overriding with virtual functions.  

---

---

# Interview Answer

> Polymorphism allows the same interface or function to behave differently depending on the object.

---

# Most Important Difference Tables

## Overloading vs Overriding

| Overloading           | Overriding         |
| --------------------- | ------------------ |
| Same class            | Parent-child class |
| Different parameters  | Same parameters    |
| Compile-time          | Runtime            |
| No inheritance needed | Inheritance needed |

---

## Compile-Time vs Runtime Polymorphism

| Compile-Time  | Runtime         |
| ------------- | --------------- |
| Faster        | Slightly slower |
| Overloading   | Overriding      |
| Early binding | Late binding    |

---

# Frequently Asked Interview Questions

## Easy

1. What are the 4 pillars of OOP?
2. What is encapsulation?
3. What is abstraction?
4. What is inheritance?
5. What is polymorphism?

---

## Medium

6. Encapsulation vs Abstraction?
7. Advantages of inheritance?
8. Types of inheritance?
9. What is function overloading?
10. What is function overriding?

---

## Hard

11. Overloading vs Overriding?
12. Compile-time vs Runtime polymorphism?
13. Why is polymorphism useful?
14. Can we achieve runtime polymorphism without virtual functions?
15. Why is abstraction important?

---

# End of Day 2 Target

You should be able to answer confidently:

✅ What are the 4 pillars of OOP?

✅ Encapsulation vs Abstraction

✅ Inheritance and its types

✅ Polymorphism and its types

✅ Overloading vs Overriding



# Day 2 OOP Interview Questions & Answers

---

# Easy Questions

## 1. What are the 4 pillars of OOP?

### Answer

The four pillars of OOP are:

1. Encapsulation
2. Abstraction
3. Inheritance
4. Polymorphism

These concepts help make code reusable, secure, and maintainable.

---

## 2. What is Encapsulation?

### Answer

Encapsulation is the process of wrapping data and methods together into a single unit (class) and restricting direct access to data.

### Real Example

ATM machine hides internal banking details from users.

### Interview Answer

> Encapsulation is the bundling of data and methods into a single unit while controlling access to the data using access specifiers.

---

## 3. What is Abstraction?

### Answer

Abstraction means showing only essential information and hiding implementation details.

### Real Example

When driving a car, you use the steering wheel and brakes without knowing how the engine works internally.

### Interview Answer

> Abstraction hides implementation details and exposes only the necessary features to the user.

---

## 4. What is Inheritance?

### Answer

Inheritance allows one class to acquire properties and methods from another class.

### Real Example

Dog inherits properties like eat() and sleep() from Animal.

### Interview Answer

> Inheritance is a mechanism where a child class acquires properties and behaviors of a parent class.

---

## 5. What is Polymorphism?

### Answer

Polymorphism means "many forms."

The same function or interface can behave differently depending on the object.

### Real Example

A person can be:

* Student at college
* Son at home
* Employee at office

Same person, different behavior.

### Interview Answer

> Polymorphism allows the same function or interface to perform different actions based on the object.

---

# Medium Questions

---

## 6. Encapsulation vs Abstraction?

| Encapsulation          | Abstraction                      |
| ---------------------- | -------------------------------- |
| Hides data             | Hides implementation             |
| Focus on security      | Focus on simplicity              |
| Uses access specifiers | Uses abstract classes/interfaces |
| "How to protect?"      | "How to simplify?"               |

### Interview Answer

> Encapsulation protects data from unauthorized access, while abstraction hides implementation complexity from users.

---

## 7. Advantages of Inheritance?

### Answer

1. Code Reusability
2. Reduced Code Duplication
3. Easy Maintenance
4. Better Extensibility
5. Faster Development

### Interview Answer

> Inheritance improves code reusability and reduces redundancy by allowing child classes to reuse parent class features.

---

## 8. Types of Inheritance?

### Answer

### 1. Single Inheritance

```text
A → B
```

### 2. Multilevel Inheritance

```text
A → B → C
```

### 3. Multiple Inheritance

```text
A
 \
  C
 /
B
```

### 4. Hierarchical Inheritance

```text
    A
   / \
  B   C
```

### 5. Hybrid Inheritance

Combination of multiple inheritance types.

---

## 9. What is Function Overloading?

### Answer

Function overloading means having multiple functions with the same name but different parameters.

### Example

```cpp
add(int a, int b)
add(int a, int b, int c)
```

### Interview Answer

> Function overloading allows multiple functions with the same name but different parameter lists.

---

## 10. What is Function Overriding?

### Answer

Function overriding occurs when a child class provides its own implementation of a parent class method.

### Example

```cpp
class Animal
{
public:
    void sound()
    {
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
    }
};
```

### Interview Answer

> Function overriding allows a derived class to redefine a method already defined in the base class.

---

# Hard Questions

---

## 11. Overloading vs Overriding?

| Overloading             | Overriding           |
| ----------------------- | -------------------- |
| Same class              | Parent-child class   |
| Different parameters    | Same parameters      |
| Compile-time            | Runtime              |
| No inheritance required | Inheritance required |

### Interview Answer

> Overloading uses the same function name with different parameters, while overriding redefines a parent class function in a child class.

---

## 12. Compile-Time vs Runtime Polymorphism?

| Compile-Time         | Runtime                  |
| -------------------- | ------------------------ |
| Function Overloading | Function Overriding      |
| Early Binding        | Late Binding             |
| Faster               | Slightly slower          |
| Decided by compiler  | Decided during execution |

### Interview Answer

> Compile-time polymorphism is resolved by the compiler, whereas runtime polymorphism is resolved while the program is running.

---

## 13. Why is Polymorphism Useful?

### Answer

Polymorphism provides:

1. Flexibility
2. Reusability
3. Extensibility
4. Cleaner Code

### Example

A single interface can work with different objects.

### Interview Answer

> Polymorphism allows writing generic and reusable code that can work with different object types.

---

## 14. Can We Achieve Runtime Polymorphism Without Virtual Functions?

### Answer

In C++, **true runtime polymorphism requires virtual functions**.

Without virtual functions, function calls are resolved at compile time.

### Interview Answer

> No. Runtime polymorphism in C++ is achieved using function overriding together with virtual functions.

---

## 15. Why is Abstraction Important?

### Answer

Abstraction helps:

1. Reduce complexity
2. Improve security
3. Simplify usage
4. Improve maintainability

### Real Example

Using a smartphone without knowing how the processor works internally.

### Interview Answer

> Abstraction hides unnecessary implementation details and allows users to focus only on essential functionality.

---

# Most Important 5 Questions for Placements

### Q1. What are the 4 pillars of OOP?

**Encapsulation, Abstraction, Inheritance, Polymorphism.**

---

### Q2. Encapsulation vs Abstraction?

**Encapsulation hides data, abstraction hides implementation.**

---

### Q3. What is Polymorphism?

**One interface, many forms.**

---

### Q4. Overloading vs Overriding?

**Overloading → Compile Time**
**Overriding → Runtime**

---

### Q5. Why is Inheritance Used?

**To achieve code reusability and reduce duplication.**

These 5 questions alone cover a large portion of OOP theory questions asked in fresher interviews.


These are among the most frequently asked OOP questions in placement interviews. Tomorrow (Day 3) focuses on Advanced OOP: Virtual Functions, Dynamic Binding, Abstract Classes, Interfaces, and frequently asked tricky OOP questions.
