
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


---
---
---
----
---
---
----
---
---
---
---

# **Q. Develop a Generic Method to Exchange the Positions of Two Different Elements in an Array**

**(CO2 – Apply – 20 Marks Answer)**

---

# Definition

A **Generic Method** is a method that can work with **different data types** by using a **type parameter** (`<T>`). It allows the same method to perform operations on integers, strings, doubles, or any other data type without rewriting the code.

According to your notes, generics are **parameterized types** that improve **code reusability** and **type safety**, while eliminating the need for explicit type casting. 

---

# Introduction

Suppose we want to swap two elements in an array.

Without Generics:

* We need one method for `int`.
* Another for `string`.
* Another for `double`.

This leads to duplicate code.

Using **Generics**, we write **one method** that works for all data types.

---

# Advantages of Generic Methods

* Code Reusability
* Type Safety
* No Type Casting
* Compile-Time Error Checking
* Easy Maintenance
* Better Performance

---

# Syntax

```csharp
returntype MethodName<T>(T parameter)
{
    // Code
}
```

Where:

* `T` = Type Parameter
* `T` can represent `int`, `float`, `double`, `string`, etc.

---

# Algorithm

1. Create a generic method `Swap<T>()`.
2. Pass the array and the two index positions.
3. Store one element in a temporary variable.
4. Exchange the two elements.
5. Display the updated array.

---

# C# Program

```csharp
using System;

class Program
{
    // Generic method to swap two elements
    static void Swap<T>(T[] arr, int i, int j)
    {
        T temp;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    static void Main()
    {
        int[] num = { 10, 20, 30, 40, 50 };

        Console.WriteLine("Before Swapping:");

        foreach (int n in num)
            Console.Write(n + " ");

        Swap(num, 1, 3);

        Console.WriteLine("\n\nAfter Swapping:");

        foreach (int n in num)
            Console.Write(n + " ");
    }
}
```

---

# Output

```text
Before Swapping:
10 20 30 40 50

After Swapping:
10 40 30 20 50
```

---

# Example with String Array

The same generic method works for strings without any changes.

```csharp
using System;

class Program
{
    static void Swap<T>(T[] arr, int i, int j)
    {
        T temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    static void Main()
    {
        string[] name = { "Ram", "Shyam", "Hari" };

        Console.WriteLine("Before Swapping:");

        foreach (string s in name)
            Console.Write(s + " ");

        Swap(name, 0, 2);

        Console.WriteLine("\n\nAfter Swapping:");

        foreach (string s in name)
            Console.Write(s + " ");
    }
}
```

---

# Output

```text
Before Swapping:
Ram Shyam Hari

After Swapping:
Hari Shyam Ram
```

---

# Explanation

### Generic Method

```csharp
static void Swap<T>(T[] arr, int i, int j)
```

* `T` represents any data type.
* The same method can swap elements of an `int`, `string`, `double`, etc.

---

### Temporary Variable

```csharp
T temp;
```

Stores one element temporarily during swapping.

---

### Swapping Logic

```csharp
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
```

This exchanges the positions of the two elements.

---

### Method Call

```csharp
Swap(num, 1, 3);
```

Swaps the elements at index **1** and **3**.

---

# Advantages

1. One method works for all data types.
2. Eliminates duplicate code.
3. Provides compile-time type checking.
4. Improves performance.
5. Easy to understand and maintain.
6. Reduces programming effort.

---

# Applications

* Swapping array elements.
* Generic sorting algorithms.
* Searching algorithms.
* Generic collections (`List<T>`, `Dictionary<TKey,TValue>`).
* Utility methods.

---

# Conclusion

A generic method allows a single implementation of the swap operation to work with any data type. It improves **code reusability**, **type safety**, and **maintainability**, making programs simpler and more efficient.

---

# Notes Referred

This answer is based on your uploaded **"7 Generics.pdf"**:

* Definition of Generics and parameterized types. 
* Benefits of type safety and avoiding type casting. 
* Generic class and type parameter concepts used to build this generic method. 

> **Exam Tip:** For this question, the **generic swap method program** is the most important part. After writing the program, briefly explain the `Swap<T>()` method and mention that the same method can be used with arrays of different data types.
---
---
---
---
---
---
---
---
Below are **10-mark university answers** with **theory + simple explanation + easy C# programs + output**, based on your uploaded notes. The **Two-Dimensional Array** theory comes directly from your Arrays notes. The **digits in words** program is a standard C# programming solution (this specific program is asked in the model paper but is not present in your uploaded notes).

---

# Q1. Demonstrate a Two-Dimensional Array with a Code Snippet.

**(10 Marks)**

## Definition

A **Two-Dimensional Array (2D Array)** is an array that stores data in the form of **rows and columns**. It is also called a **matrix** or **table**.

A two-dimensional array is useful when data has to be represented in tabular form, such as student marks, matrices, and seating arrangements.

According to your notes, arrays are collections of variables of the same type, implemented as objects in C#, and can have one or more dimensions. 

---

# Syntax

```csharp
datatype[,] arrayName = new datatype[rows, columns];
```

### Example

```csharp
int[,] marks = new int[2,3];
```

This creates an array with:

* 2 Rows
* 3 Columns

---

# C# Program

```csharp
using System;

class Program
{
    static void Main()
    {
        int[,] a = {
                     {10,20,30},
                     {40,50,60}
                   };

        Console.WriteLine("Two Dimensional Array:");

        for(int i=0;i<2;i++)
        {
            for(int j=0;j<3;j++)
            {
                Console.Write(a[i,j] + " ");
            }

            Console.WriteLine();
        }
    }
}
```

---

# Output

```text
Two Dimensional Array:

10 20 30
40 50 60
```

---

# Explanation

```csharp
int[,] a
```

Declares a two-dimensional array.

---

```csharp
{10,20,30}
```

Represents the **first row**.

---

```csharp
{40,50,60}
```

Represents the **second row**.

---

Nested loops are used because:

* Outer loop → Rows
* Inner loop → Columns

---

# Advantages

* Stores data in rows and columns.
* Easy matrix representation.
* Easy traversal using nested loops.
* Saves memory by grouping related data.

---

# Applications

* Matrix operations
* Student mark sheets
* Timetables
* Seating arrangements
* Image processing

---

# Conclusion

A two-dimensional array stores data in rows and columns. It is useful for representing tabular information and is accessed using row and column indices.

---

### Notes Referred

* **Arrays – Definition, declaration, and multidimensional concepts** 

---

# Q2. Write a C# Program to Display the Digits of an Integer in Words.

**(10 Marks)**

## Definition

This program accepts an integer and displays each digit as its corresponding English word.

Example:

```
Input : 123

Output :

One
Two
Three
```

---

# Algorithm

1. Read the number.
2. Convert the number to a string.
3. Read each character.
4. Use `switch` statement.
5. Print the corresponding word.

---

# C# Program

```csharp
using System;

class Program
{
    static void Main()
    {
        Console.Write("Enter a Number: ");

        string num = Console.ReadLine();

        Console.WriteLine("Digits in Words:");

        foreach(char ch in num)
        {
            switch(ch)
            {
                case '0': Console.WriteLine("Zero"); break;
                case '1': Console.WriteLine("One"); break;
                case '2': Console.WriteLine("Two"); break;
                case '3': Console.WriteLine("Three"); break;
                case '4': Console.WriteLine("Four"); break;
                case '5': Console.WriteLine("Five"); break;
                case '6': Console.WriteLine("Six"); break;
                case '7': Console.WriteLine("Seven"); break;
                case '8': Console.WriteLine("Eight"); break;
                case '9': Console.WriteLine("Nine"); break;
            }
        }
    }
}
```

---

# Sample Output

```text
Enter a Number: 405

Digits in Words:

Four
Zero
Five
```

---

# Explanation

```csharp
string num = Console.ReadLine();
```

Reads the number as a string.

---

```csharp
foreach(char ch in num)
```

Reads one digit at a time.

---

```csharp
switch(ch)
```

Checks which digit is entered.

---

```csharp
case '5':
```

Prints **Five** when digit 5 is found.

---

# Advantages

* Easy to understand.
* Uses `switch` statement effectively.
* Can display any length of number.
* Simple implementation.

---

# Applications

* Number-to-word conversion
* Educational software
* Banking applications
* Digital display systems

---

# Conclusion

This program converts every digit of an integer into its corresponding English word using a `switch` statement. It is simple, efficient, and suitable for beginners.

---

### Notes Referred

* This **program is not present** in your uploaded notes. It is included because it appears in the **Model Question Paper** as a programming question. The arrays notes were not used for this program.
