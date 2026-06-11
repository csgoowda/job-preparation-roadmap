# Day 4 – DSA Theory (1 Hour)

# 1. Two Pointer Technique (30 Minutes)

## What is Two Pointer Technique?

Instead of using one pointer:

```cpp
i
```

Use two pointers:

```cpp
left
right
```

to solve problems efficiently.

---

## Why Use Two Pointers?

Suppose:

```text
madam
```

Need to compare:

```text
m ↔ m
a ↔ a
d
```

Using two pointers:

```text
m a d a m
↑       ↑

left   right
```

This makes the solution faster and cleaner.

---

## When to Use Two Pointers?

Keywords:

```text
Palindrome
Reverse String
Sorted Array
Pair Sum
Remove Duplicates
```

Whenever you see:

```text
Start
End
Compare Both Sides
```

Think:

```text
Two Pointers
```

---

## Example 1: Reverse String

Input:

```text
hello
```

Output:

```text
olleh
```

### Idea

Swap:

```text
h ↔ o
e ↔ l
```

---

### Full Code

```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "hello";

    int left = 0;
    int right = str.length() - 1;

    while(left < right)
    {
        swap(str[left], str[right]);

        left++;
        right--;
    }

    cout << str;

    return 0;
}
```

Output:

```text
olleh
```

---

## Example 2: Valid Palindrome

Input:

```text
madam
```

Compare:

```text
m ↔ m
a ↔ a
```

All match.

Answer:

```text
True
```

Pattern:

```text
Two Pointers
```

---

# Memory Trick

```text
One Pointer

→ Linear Traversal

Two Pointers

← → Compare Both Ends
```

---

# 2. String Manipulation (30 Minutes)

## What is String Manipulation?

Operations performed on strings.

Examples:

```text
Access Character
Modify Character
Concatenate
Reverse
Compare
Substring
```

---

# Access Character

```cpp
string str = "Hello";

cout << str[0];
```

Output:

```text
H
```

---

# Modify Character

```cpp
string str = "Hello";

str[0] = 'Y';

cout << str;
```

Output:

```text
Yello
```

---

# Concatenate Strings

Join two strings.

```cpp
string first = "Hello";
string second = "World";

string result = first + " " + second;

cout << result;
```

Output:

```text
Hello World
```

---

# Compare Strings

```cpp
string a = "hello";
string b = "hello";

if(a == b)
{
    cout << "Equal";
}
```

Output:

```text
Equal
```

---

# Reverse String

```cpp
string str = "hello";

reverse(str.begin(), str.end());

cout << str;
```

Output:

```text
olleh
```

---

# Substring

Extract part of string.

```cpp
string str = "Chethan";

cout << str.substr(0, 4);
```

Output:

```text
Chet
```

Meaning:

```text
Start at index 0
Take 4 characters
```

---

# Common Interview Operations

| Operation   | Syntax                            |
| ----------- | --------------------------------- |
| Length      | `str.length()`                    |
| Access      | `str[i]`                          |
| Reverse     | `reverse(str.begin(), str.end())` |
| Compare     | `a == b`                          |
| Concatenate | `a + b`                           |
| Substring   | `str.substr(start, len)`          |

---

# Pattern Recognition

### Palindrome

```text
Same Forward & Backward
```

Pattern:

```text
Two Pointers
```

---

### Reverse String

```text
Reverse Characters
```

Pattern:

```text
Two Pointers
```

---

### String Comparison

```text
Compare Two Strings
```

Pattern:

```text
Character Comparison
```

---

# Interview Questions

### What is Two Pointer Technique?

**Answer:**

```text
A technique that uses two indices
to traverse or compare elements
efficiently.
```

---

### When to Use Two Pointers?

**Answer:**

```text
Palindrome
Reverse String
Pair Sum
Sorted Arrays
```

---

### What is String Manipulation?

**Answer:**

```text
Performing operations on strings
such as reverse, compare,
concatenate, and substring.
```

---

# Quick Revision

```text
Two Pointers

left = 0
right = n - 1

Move both pointers
towards each other.

--------------------------------

String Manipulation

length()
reverse()
compare
substring
concatenate
```

# Today's Checklist

✅ Two Pointer Technique

✅ String Manipulation

### Homework

1. Reverse `"Information"` using Two Pointers.
2. Check whether `"racecar"` is a palindrome.
3. Concatenate your first and last name.
4. Print first 5 characters using `substr()`.

### Most Important Pattern

```text
Palindrome
Reverse String

↓

Two Pointers
```

This pattern appears very frequently in string interview questions.
