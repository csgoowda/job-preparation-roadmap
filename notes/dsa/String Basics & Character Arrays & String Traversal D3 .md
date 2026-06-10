# Day 3 – DSA Theory (1 Hour)

# 1. String Basics (20 Minutes)

## What is a String?

A string is a sequence of characters.

Example:

```cpp id="v5jl5z"
string name = "Chethan";
```

Memory:

```text id="nj8xga"
C  h  e  t  h  a  n
0  1  2  3  4  5  6
```

---

## Common String Operations

### Length

```cpp id="vwuzrj"
string str = "Hello";

cout << str.length();
```

Output:

```text id="ktlly5"
5
```

---

### Access Character

```cpp id="gksu7k"
string str = "Hello";

cout << str[0];
```

Output:

```text id="g8b2vx"
H
```

---

### Change Character

```cpp id="85byvl"
string str = "Hello";

str[0] = 'Y';

cout << str;
```

Output:

```text id="j0e8gu"
Yello
```

---

# 2. Character Arrays (20 Minutes)

## What is a Character Array?

Before `string`, C++ used character arrays.

Example:

```cpp id="0vmybd"
char name[] = "Chethan";
```

Memory:

```text id="f34u2p"
C h e t h a n \0
```

### What is '\0'?

```text id="v1ldmk"
Null Character
```

It marks the end of the string.

---

## Example

```cpp id="m6dvv8"
#include <iostream>
using namespace std;

int main()
{
    char name[] = "Chethan";

    cout << name;

    return 0;
}
```

Output:

```text id="w51g0x"
Chethan
```

---

## Difference

| string      | char array        |
| ----------- | ----------------- |
| Easy to use | More manual work  |
| Dynamic     | Fixed size        |
| Modern C++  | Traditional C/C++ |

Example:

```cpp id="5ynw6s"
string s = "Hello";
```

```cpp id="49rclg"
char s[] = "Hello";
```

---

# 3. String Traversal (20 Minutes)

## What is Traversal?

Visiting each character one by one.

Example:

```text id="clm3ha"
Hello

H
e
l
l
o
```

---

## Method 1: Using Index

### Full Program

```cpp id="lhrfr7"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello";

    for(int i = 0; i < str.length(); i++)
    {
        cout << str[i] << endl;
    }

    return 0;
}
```

Output:

```text id="zgmb84"
H
e
l
l
o
```

---

## Method 2: Range-Based Loop

### Full Program

```cpp id="yb1xmb"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello";

    for(char ch : str)
    {
        cout << ch << endl;
    }

    return 0;
}
```

Output:

```text id="p9n1j5"
H
e
l
l
o
```

---

# Interview Questions

## Q1: What is a String?

**Answer:**

```text id="7g6svw"
A string is a sequence of characters.
```

---

## Q2: What is a Character Array?

**Answer:**

```text id="uuz41c"
A character array is an array of characters
ending with a null character '\0'.
```

---

## Q3: What is String Traversal?

**Answer:**

```text id="mwz1ol"
Accessing every character of a string
one by one.
```

---

# Notes for Revision

```text id="m9v19f"
String:
Collection of characters

Character Array:
Array of characters ending with '\0'

Traversal:
Visit each character one by one
```

---

# Full Notes + Code Format

```cpp id="twm7i9"
/*
TOPIC: String Basics

String:
Sequence of characters

Example:
string str = "Hello";

Indexes:
H e l l o
0 1 2 3 4

Length:
str.length()

Access:
str[0]

Traversal:
for(int i=0;i<str.length();i++)
{
    cout << str[i];
}
*/
```

# Today's Checklist

✅ String Basics

✅ Character Arrays

✅ String Traversal

### Homework

1. Create a string `"SJCE Mysore"` and print its length.
2. Print each character using traversal.
3. Create a character array `"Information Science"`.
4. Learn the difference between `string` and `char[]`.

### Pattern to Remember

```text id="2fg7md"
Array → Elements

String → Characters

Traversal → Visit one by one
```

This theory is important before starting string problems like **Valid Anagram**, **Valid Palindrome**, and **Longest Common Prefix**.
