

# Q1. Describe the Four Types of Punctuators in C# with Suitable Examples (10 Marks)

## Definition

**Punctuators** are special symbols used in C# to separate program elements, group statements, access members, and define arrays, methods, and blocks. They improve the structure and readability of a program.

---

## 1. Braces `{ }`

### Purpose

* Define the beginning and end of a class, method, loop, or conditional block.

### Example

```csharp
using System;

class Demo
{
    static void Main()
    {
        Console.WriteLine("Hello");
    }
}
```

**Explanation:**

* `{` starts the block.
* `}` ends the block.

---

## 2. Parentheses `( )`

### Purpose

* Used with methods.
* Used in expressions and conditions.
* Used while calling functions.

### Example

```csharp
int sum(int a, int b)
{
    return a + b;
}

if (a > b)
{
    Console.WriteLine("A is greater");
}
```

**Explanation:**

* `(a, b)` represents method parameters.
* `(a > b)` represents a condition.

---

## 3. Square Brackets `[ ]`

### Purpose

* Used to declare arrays.
* Used to access array elements.
* Used with attributes.

### Example

```csharp
int[] numbers = {10,20,30};

Console.WriteLine(numbers[1]);
```

**Output**

```
20
```

---

## 4. Semicolon `;`

### Purpose

* Marks the end of a statement.

### Example

```csharp
int x = 10;
Console.WriteLine(x);
```

**Explanation:**
Every executable statement in C# ends with a semicolon.

---

# Other Common Punctuators (Briefly)

| Punctuator | Purpose                        | Example               |
| ---------- | ------------------------------ | --------------------- |
| `.`        | Member access                  | `Console.WriteLine()` |
| `,`        | Separates variables/parameters | `int a, b;`           |
| `:`        | Base class, labels             | `class B : A`         |
| `"`        | String literal                 | `"Hello"`             |

---

# Conclusion

The four major punctuator types used in C# are:

1. **Braces `{}`** – Define blocks.
2. **Parentheses `()`** – Methods and conditions.
3. **Square Brackets `[]`** – Arrays and indexing.
4. **Semicolon `;`** – Ends statements.

These punctuators are essential for writing correct and well-structured C# programs.

---

----
----
---
---
---
---
---
---
---


# Q6(a) Explain the Different Class Modifiers with Examples.

**(CO1 – Understand – 20 Marks)**

## Definition

A **class modifier** is a keyword that specifies the accessibility and behavior of a class. It determines who can access the class and whether the class can be inherited or instantiated.

A class is a blueprint for creating objects. In C#, modifiers are used before the class name to control how the class behaves. Your notes introduce classes and explain inheritance as one of the core OOP concepts.  

---

# Types of Class Modifiers

## 1. Public Class

### Theory

* Accessible from anywhere.
* Can be used by any class or assembly.
* Mostly used for reusable classes.

### Syntax

```csharp
public class Student
{
}
```

### Simple Program

```csharp
using System;

public class Student
{
    public void Display()
    {
        Console.WriteLine("Public Class");
    }
}

class Program
{
    static void Main()
    {
        Student s = new Student();
        s.Display();
    }
}
```

### Output

```
Public Class
```

---

## 2. Internal Class

### Theory

* Accessible only within the same project (assembly).
* Default modifier for top-level classes.

### Syntax

```csharp
internal class Student
{
}
```

### Simple Program

```csharp
using System;

internal class Student
{
    public void Show()
    {
        Console.WriteLine("Internal Class");
    }
}

class Program
{
    static void Main()
    {
        Student s = new Student();
        s.Show();
    }
}
```

### Output

```
Internal Class
```

---

## 3. Abstract Class

### Theory

* Object cannot be created.
* Used only for inheritance.
* Can contain abstract and normal methods.

### Syntax

```csharp
abstract class Animal
{
}
```

### Simple Program

```csharp
using System;

abstract class Animal
{
    public void Eat()
    {
        Console.WriteLine("Animal Eats");
    }
}

class Dog : Animal
{
}

class Program
{
    static void Main()
    {
        Dog d = new Dog();
        d.Eat();
    }
}
```

### Output

```
Animal Eats
```

---

## 4. Sealed Class

### Theory

* Cannot be inherited.
* Used when further inheritance is not required.

### Syntax

```csharp
sealed class Student
{
}
```

### Simple Program

```csharp
using System;

sealed class Student
{
    public void Show()
    {
        Console.WriteLine("Sealed Class");
    }
}

class Program
{
    static void Main()
    {
        Student s = new Student();
        s.Show();
    }
}
```

### Output

```
Sealed Class
```

---

## 5. Static Class

### Theory

* Contains only static members.
* Object cannot be created.
* Members are accessed using the class name.

### Syntax

```csharp
static class Demo
{
}
```

### Simple Program

```csharp
using System;

static class Demo
{
    public static void Show()
    {
        Console.WriteLine("Static Class");
    }
}

class Program
{
    static void Main()
    {
        Demo.Show();
    }
}
```

### Output

```
Static Class
```

---

# Advantages of Class Modifiers

* Controls accessibility.
* Improves security.
* Supports inheritance.
* Makes programs organized.
* Improves code reusability.

---

# Summary Table

| Modifier | Object Created | Inheritance | Access              |
| -------- | -------------- | ----------- | ------------------- |
| Public   | Yes            | Yes         | Everywhere          |
| Internal | Yes            | Yes         | Same Assembly       |
| Abstract | No             | Yes         | Depends on modifier |
| Sealed   | Yes            | No          | Depends on modifier |
| Static   | No             | No          | Class name only     |

---

# Conclusion

Class modifiers control the accessibility and behavior of classes. Choosing the correct modifier improves program security, maintainability, and object-oriented design.

---

### Notes Referred

* **Classes (Module 1)** 
* **Inheritance (Module 1)** 

---

# Q6(b) Declare Student and Details Classes Using Inheritance

**(CO1 – Apply – 20 Marks)**

## Definition

**Inheritance** is an object-oriented programming concept in which one class acquires the properties and methods of another class. It promotes code reusability and represents an **"is-a" relationship**. Your notes describe inheritance as creating specialized classes from a general class. 

---

# Syntax

```csharp
class Child : Parent
{
}
```

---

# Algorithm

1. Create a base class `Student`.
2. Declare `Name` and `USN`.
3. Create a derived class `Details`.
4. Declare `Address` and `Email`.
5. Create an object of `Details`.
6. Assign values.
7. Display all details.

---

# Program

```csharp
using System;

class Student
{
    public string Name;
    public string USN;
}

class Details : Student
{
    public string Address;
    public string Email;

    public void Display()
    {
        Console.WriteLine("Student Details");
        Console.WriteLine("----------------------");
        Console.WriteLine("Name    : " + Name);
        Console.WriteLine("USN     : " + USN);
        Console.WriteLine("Address : " + Address);
        Console.WriteLine("Email   : " + Email);
    }
}

class Program
{
    static void Main()
    {
        Details d = new Details();

        d.Name = "Chethan";
        d.USN = "4JN22IS001";
        d.Address = "Mysuru";
        d.Email = "chethan@gmail.com";

        d.Display();
    }
}
```

---

# Output

```
Student Details
----------------------
Name    : Chethan
USN     : 4JN22IS001
Address : Mysuru
Email   : chethan@gmail.com
```

---

# Explanation

### Base Class

```csharp
class Student
```

Stores common information:

* Name
* USN

### Derived Class

```csharp
class Details : Student
```

* Inherits `Name` and `USN`.
* Adds:

  * Address
  * Email

### Object Creation

```csharp
Details d = new Details();
```

The object `d` can access both inherited members and its own members.

---

# Advantages of Inheritance

* Code reusability.
* Reduces duplication.
* Easy maintenance.
* Supports hierarchical design.
* Extends existing classes.

---

# Conclusion

Inheritance allows the `Details` class to reuse the members of the `Student` class while adding new data members. This reduces code duplication and is one of the fundamental pillars of object-oriented programming.

---

### Notes Referred

* **Inheritance – "is-a" relationship** 
* **Base class and derived class concepts** 



----
----
---
---
---
---
---
---
---




----
----
---
---
---
---
---
---
---




----
----
---
---
---
---
---
---
---


