
# **Q. Explain Generics with an Example**

**(CO2 – Understand – 20 Marks Answer)**

---

# Definition

**Generics** means **parameterized types**. Generics allow us to create **classes, methods, interfaces, structures, and delegates** that work with **different data types** while maintaining **type safety**.

Instead of writing separate code for each data type, one generic class or method can work with multiple types.

According to your notes:

* Generics are **parameterized types**.
* They enable a single class or method to work with different data types.
* They improve **code reusability**, **type safety**, and eliminate unnecessary type casting. 

---

# Introduction

Before Generics were introduced, programmers used the **object** type to store different kinds of data.

Example:

```csharp
object x = 100;
object y = "Hello";
```

Although this works, it requires **type casting**, which can lead to runtime errors.

Generics solve this problem by allowing the compiler to know the exact data type during compilation, making the program safer and faster. 

---

# Need for Generics

Generics are used because they:

* Eliminate duplicate code.
* Improve code reusability.
* Provide compile-time type checking.
* Eliminate explicit type casting.
* Improve performance.
* Reduce runtime errors.

---

# Features of Generics

According to your notes:

* Generics use **type parameters**.
* A single generic class works with multiple data types.
* Type safety is maintained.
* No explicit casting is required.
* Code becomes reusable and easier to maintain. 

---

# Syntax

## Generic Class

```csharp
class ClassName<T>
{
    T data;
}
```

Where

* `T` is called a **Type Parameter**.
* It acts as a placeholder for any data type.

---

# Simple Generic Class Example

```csharp
using System;

class Sample<T>
{
    T value;

    public Sample(T v)
    {
        value = v;
    }

    public void Display()
    {
        Console.WriteLine("Value = " + value);
    }
}

class Program
{
    static void Main()
    {
        Sample<int> s1 = new Sample<int>(100);
        s1.Display();

        Sample<string> s2 = new Sample<string>("Hello");
        s2.Display();
    }
}
```

---

# Output

```
Value = 100
Value = Hello
```

---

# Explanation

```csharp
class Sample<T>
```

* `T` is a **type parameter**.
* It represents any data type.

```csharp
Sample<int>
```

Here `T` becomes **int**.

```csharp
Sample<string>
```

Here `T` becomes **string**.

Thus the same class works with different data types.

---

# Generic Calculator Example (Very Important for Exam ⭐⭐⭐)

This type of example is specifically mentioned in your question bank.

## Program

```csharp
using System;

class Calculator<T>
{
    public void Display(T a, T b)
    {
        dynamic x = a;
        dynamic y = b;

        Console.WriteLine("Addition = " + (x + y));
    }
}

class Program
{
    static void Main()
    {
        Calculator<int> c1 = new Calculator<int>();
        c1.Display(10, 20);

        Calculator<double> c2 = new Calculator<double>();
        c2.Display(12.5, 7.5);
    }
}
```

---

# Output

```
Addition = 30
Addition = 20
```

---

# Generic Method

Generics can also be used with methods.

## Syntax

```csharp
public void Display<T>(T value)
{
}
```

## Example

```csharp
using System;

class Demo
{
    public void Show<T>(T value)
    {
        Console.WriteLine(value);
    }
}

class Program
{
    static void Main()
    {
        Demo d = new Demo();

        d.Show(100);

        d.Show("Welcome");

        d.Show(5.5);
    }
}
```

---

# Output

```
100
Welcome
5.5
```

---

# Advantages of Generics

1. Code Reusability
2. Type Safety
3. Eliminates Type Casting
4. Better Performance
5. Compile-Time Error Checking
6. Easy Maintenance
7. Reduces Duplicate Code
8. Supports Multiple Data Types

---

# Applications of Generics

* Generic Collections
* Generic Classes
* Generic Methods
* Generic Interfaces
* Generic Delegates
* Generic Structures

---

# Difference Between Object and Generics

| Object                  | Generics              |
| ----------------------- | --------------------- |
| Requires Type Casting   | No Type Casting       |
| Less Safe               | Type Safe             |
| Runtime Errors Possible | Compile-Time Checking |
| Lower Performance       | Better Performance    |
| Less Reusable           | Highly Reusable       |

---

# Conclusion

Generics are one of the most powerful features of C#. They allow programmers to write a single class or method that works with multiple data types. This improves **code reusability, type safety, performance, and maintainability**, making programs more efficient and reliable.

---

# Notes Referred

This answer is based on your uploaded **"7 Generics.pdf"**:

* Definition of Generics, parameterized types, and their purpose. 
* Why Generics are needed and how they improve type safety over `object`. 
* Generic class syntax and example using `Gen<T>`. 

### **Exam Tip ⭐**

For a **10-mark or 20-mark** question, write:

1. Definition
2. Need for Generics
3. Features
4. Syntax
5. Generic Class Example
6. Generic Calculator Example (if asked)
7. Advantages
8. Applications
9. Conclusion

This structure matches what examiners typically expect and aligns well with your notes.
