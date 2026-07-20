# **Q. Explain Overloading of Logical, Unary and Binary Operators with Suitable Examples**

**(10 Marks)**

---

# Definition

**Operator Overloading** is a feature of C# that allows us to give **special meaning** to operators (`+`, `-`, `!`, `>`, `<`, etc.) for **user-defined classes**.

According to your notes:

* Operator overloading allows you to define the meaning of an operator for a class.
* It extends the use of operators without changing their original meaning.
* Operator methods must be **public** and **static**.  

---

# Types of Operator Overloading

1. Unary Operator Overloading
2. Binary Operator Overloading
3. Logical Operator Overloading

---

# 1. Unary Operator Overloading

## Definition

A **Unary Operator** works with **one operand**.

Examples:

* `++`
* `--`
* `-`
* `!`

---

## Syntax

```csharp
public static ClassName operator ++(ClassName obj)
```

---

## Simple Program

```csharp
using System;

class Number
{
    public int x;

    public Number(int a)
    {
        x = a;
    }

    public static Number operator ++(Number n)
    {
        n.x++;
        return n;
    }

    static void Main()
    {
        Number n = new Number(10);

        ++n;

        Console.WriteLine(n.x);
    }
}
```

### Output

```
11
```

---

# 2. Binary Operator Overloading

## Definition

A **Binary Operator** works with **two operands**.

Examples:

* `+`
* `-`
* `*`
* `/`

---

## Syntax

```csharp
public static ClassName operator +(ClassName a, ClassName b)
```

---

## Simple Program

```csharp
using System;

class Number
{
    public int x;

    public Number(int a)
    {
        x = a;
    }

    public static Number operator +(Number a, Number b)
    {
        return new Number(a.x + b.x);
    }

    static void Main()
    {
        Number n1 = new Number(10);
        Number n2 = new Number(20);

        Number n3 = n1 + n2;

        Console.WriteLine(n3.x);
    }
}
```

### Output

```
30
```

---

# 3. Logical Operator Overloading

## Definition

Logical operators are used for logical comparisons.

Examples:

* `!`
* `true`
* `false`
* `&`
* `|`

---

## Syntax

```csharp
public static bool operator true(ClassName obj)
```

---

## Simple Program

```csharp
using System;

class Number
{
    public int x;

    public Number(int a)
    {
        x = a;
    }

    public static bool operator true(Number n)
    {
        return n.x > 0;
    }

    public static bool operator false(Number n)
    {
        return n.x <= 0;
    }

    static void Main()
    {
        Number n = new Number(5);

        if (n)
            Console.WriteLine("Positive");
        else
            Console.WriteLine("Negative");
    }
}
```

### Output

```
Positive
```

---

# Difference Between Unary, Binary and Logical Operators

| Unary Operator      | Binary Operator      | Logical Operator        |   |
| ------------------- | -------------------- | ----------------------- | - |
| One operand         | Two operands         | Logical comparison      |   |
| `++`, `--`, `!`     | `+`, `-`, `*`, `/`   | `true`, `false`, `&`, ` | ` |
| Modifies one object | Combines two objects | Returns Boolean value   |   |

---

# Advantages of Operator Overloading

* Makes code easy to read.
* Improves code reusability.
* Gives meaningful behavior to operators.
* Supports object-oriented programming.
* Makes user-defined classes behave like built-in types.

---

# Conclusion

Operator overloading allows user-defined classes to use operators in a meaningful way. Unary operators work with one operand, binary operators work with two operands, and logical operators perform logical comparisons. This improves readability and flexibility in C# programming.

---

# Notes Referred

This answer is based on your uploaded **"9 Operator Overloading.pdf"**:

* Definition and purpose of operator overloading. 
* Operator overloading fundamentals and syntax for unary and binary operators. 
* Binary operator overloading example using the `ThreeD` class. 

> **Exam Tip:** These simplified programs are easy to write in an exam and clearly demonstrate **unary (`++`)**, **binary (`+`)**, and **logical (`true`/`false`)** operator overloading while matching the concepts explained in your notes.

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
Below are **10-mark exam-ready answers** with **simple theory + easy program + output**, based on your uploaded **Delegates & Events** and **Exception Handling** notes.

---

# Q10. Illustrate a Delegate with Three Methods Performing String Modification (Replacing Spaces with Hyphens, Removing Spaces and Reversing a String)

**(10 Marks)**

## Definition

A **Delegate** is a **type-safe reference to a method**. It stores the address of a method and allows the method to be called indirectly. A delegate can invoke any method whose **signature and return type** match the delegate declaration.

According to your notes:

* Delegates are the .NET equivalent of **type-safe function pointers**.
* A delegate can refer to different methods at runtime, making programs flexible.  

---

# Syntax

```csharp
delegate return_type DelegateName(parameter_list);
```

Example:

```csharp
delegate string StrMod(string str);
```

---

# C# Program

```csharp
using System;

delegate string StrMod(string str);

class Program
{
    static string ReplaceSpaces(string s)
    {
        return s.Replace(' ', '-');
    }

    static string RemoveSpaces(string s)
    {
        return s.Replace(" ", "");
    }

    static string Reverse(string s)
    {
        char[] ch = s.ToCharArray();
        Array.Reverse(ch);
        return new string(ch);
    }

    static void Main()
    {
        StrMod str;

        str = ReplaceSpaces;
        Console.WriteLine(str("Hello World"));

        str = RemoveSpaces;
        Console.WriteLine(str("Hello World"));

        str = Reverse;
        Console.WriteLine(str("Hello World"));
    }
}
```

---

# Output

```text
Hello-World
HelloWorld
dlroW olleH
```

---

# Explanation

### Delegate Declaration

```csharp
delegate string StrMod(string str);
```

Declares a delegate that accepts a **string** and returns a **string**.

---

### Method 1

```csharp
ReplaceSpaces()
```

Replaces spaces with hyphens.

---

### Method 2

```csharp
RemoveSpaces()
```

Removes all spaces.

---

### Method 3

```csharp
Reverse()
```

Reverses the given string.

---

### Delegate Object

```csharp
StrMod str;
```

Stores the address of any matching method.

---

### Assigning Methods

```csharp
str = ReplaceSpaces;
```

The delegate points to `ReplaceSpaces()`.

Later it points to:

* `RemoveSpaces()`
* `Reverse()`

without changing the delegate declaration.

---

# Advantages

* Type-safe.
* Code reusability.
* Runtime flexibility.
* Used in event handling.
* Supports callback methods.

---

# Applications

* Event handling
* Callback functions
* GUI programming
* Asynchronous programming

---

# Conclusion

A delegate is a type-safe method reference. It allows one delegate to invoke different methods at runtime as long as they share the same signature.

---

## Notes Referred

Based on your uploaded **"10 Delegates and Events.pdf"**:

* Definition and advantages of delegates. 
* Delegate syntax and declaration. 
* The exact example with `ReplaceSpaces`, `RemoveSpaces`, and `Reverse`. 

---

# Q11. Explain Structured Exception Handling with a Code Snippet.

**(10 Marks)**

## Definition

**Exception Handling** is the process of detecting, handling, and recovering from runtime errors so that the program does not terminate abnormally.

According to your notes:

* Exception handling improves the robustness of .NET applications.
* Exceptions may be **system exceptions** (generated by the CLR) or **application exceptions** (thrown by the programmer). 

---

# Structured Exception Handling

Structured Exception Handling (SEH) in C# uses the following keywords:

* `try`
* `catch`
* `finally`
* `throw`

---

## Structure

```csharp
try
{
    // Risky code
}
catch(Exception e)
{
    // Handle exception
}
finally
{
    // Executes always
}
```

---

# C# Program

```csharp
using System;

class Program
{
    static void Main()
    {
        try
        {
            int a = 10;
            int b = 0;

            int c = a / b;

            Console.WriteLine(c);
        }
        catch (DivideByZeroException)
        {
            Console.WriteLine("Cannot divide by zero.");
        }
        finally
        {
            Console.WriteLine("Program Finished.");
        }
    }
}
```

---

# Output

```text
Cannot divide by zero.
Program Finished.
```

---

# Explanation

### try Block

```csharp
try
```

Contains code that may generate an exception.

---

### catch Block

```csharp
catch(DivideByZeroException)
```

Catches the divide-by-zero exception and prevents the program from crashing.

---

### finally Block

```csharp
finally
```

Executes whether an exception occurs or not.

It is generally used to:

* Close files
* Close database connections
* Release resources

---

# Flow of Execution

```
Start
   │
 try Block
   │
Exception?
 ┌───────┐
 │ Yes   │
 ▼       │
catch    │
 │        │
 └──► finally
        │
      End
```

---

# Advantages

* Prevents abnormal program termination.
* Improves program reliability.
* Separates error-handling code.
* Makes debugging easier.
* Ensures resource cleanup using `finally`.

---

# Applications

* File handling
* Database operations
* Network programming
* Arithmetic operations
* User input validation

---

# Conclusion

Structured Exception Handling enables C# programs to handle runtime errors gracefully using `try`, `catch`, and `finally`. This improves reliability, prevents crashes, and ensures proper cleanup of resources.

---

## Notes Referred

Based on your uploaded **"11 Exception Handling.pdf"**:

* Overview and importance of exception handling. 
* Types of exceptions (system and application). 
* `try`, `catch`, and handling a divide-by-zero exception. 

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



