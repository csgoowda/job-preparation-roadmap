

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


