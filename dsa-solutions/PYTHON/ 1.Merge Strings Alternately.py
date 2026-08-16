class Solution:
    def mergeAlternately(self, word1, word2):
        result = ""

        n = min(len(word1), len(word2))

        for i in range(n):
            result += word1[i]
            result += word2[i]

        result += word1[n:]
        result += word2[n:]

        return result


# LeetCode 1768 — Merge Strings Alternately

**Difficulty:** Easy
**Topic:** Strings, Arrays, Two Pointers / Indexing
**Language:** Python

---

## 🧩 Problem

You are given two strings `word1` and `word2`.

Merge them by adding their characters **alternately**, starting with `word1`.

If one string is longer than the other, append the remaining characters to the end.

### Example 1

```text
Input:
word1 = "abc"
word2 = "pqr"

Output:
"apbqcr"
```

### Example 2

```text
Input:
word1 = "ab"
word2 = "pqrs"

Output:
"apbqrs"
```

---

## 🧠 Approach

We use the following steps:

1. Create an empty string `result`.
2. Find the length of the shorter string using `min()`.
3. Loop through the indexes of both strings.
4. Add one character from `word1`.
5. Add one character from `word2`.
6. After the loop, append the remaining characters from either string.
7. Return the final result.

---

## 💡 Why `min()`?

Suppose:

```python
word1 = "ab"
word2 = "pqrs"
```

Their lengths are:

```text
len(word1) = 2
len(word2) = 4
```

We can take characters from both strings only for indexes:

```text
0
1
```

So:

```python
n = min(len(word1), len(word2))
```

gives:

```text
n = 2
```

This prevents us from accessing an index that doesn't exist in the shorter string.

---

## 🔍 String Indexing

For:

```python
word1 = "abc"
```

the indexes are:

```text
Character:  a   b   c
Index:      0   1   2
```

So:

```python
word1[0]  # a
word1[1]  # b
word1[2]  # c
```

---

## ✂️ String Slicing

For:

```python
word2 = "pqrs"
```

```python
word2[2:]
```

means:

> Start from index `2` and take everything until the end.

Result:

```text
"rs"
```

We use this to add the characters left after the alternating part.

---

## 💻 Solution

```python
class Solution:
    def mergeAlternately(self, word1, word2):
        result = ""

        n = min(len(word1), len(word2))

        for i in range(n):
            result += word1[i]
            result += word2[i]

        result += word1[n:]
        result += word2[n:]

        return result
```

---

## 🔎 Dry Run

### Input

```python
word1 = "abc"
word2 = "pqr"
```

### Step 1

```python
n = min(3, 3)
```

```text
n = 3
```

### Step 2

Loop through:

```python
range(3)
```

So:

```text
i = 0
i = 1
i = 2
```

### i = 0

```text
word1[0] = a
word2[0] = p

result = "ap"
```

### i = 1

```text
word1[1] = b
word2[1] = q

result = "apbq"
```

### i = 2

```text
word1[2] = c
word2[2] = r

result = "apbqcr"
```

Nothing remains, so:

```text
Answer = "apbqcr"
```

---

## 🔎 Dry Run — Different Lengths

### Input

```python
word1 = "ab"
word2 = "pqrs"
```

```text
n = min(2, 4)
n = 2
```

Alternating:

```text
i = 0 → a + p
i = 1 → b + q
```

Result:

```text
"apbq"
```

Remaining:

```python
word2[2:]
```

gives:

```text
"rs"
```

Final:

```text
"apbqrs"
```

---

## 🐍 Python Concepts Learned

### 1. `len()`

Returns the length of a string.

```python
len("abc")
```

Output:

```text
3
```

### 2. `min()`

Returns the smaller value.

```python
min(2, 4)
```

Output:

```text
2
```

### 3. `range()`

Generates indexes for the loop.

```python
range(3)
```

gives:

```text
0, 1, 2
```

### 4. String indexing

```python
word1[i]
```

Gets the character at index `i`.

### 5. String slicing

```python
word2[n:]
```

Gets characters from index `n` to the end.

### 6. `+=`

```python
result += word1[i]
```

is the same as:

```python
result = result + word1[i]
```

---

## ⏱️ Complexity

Let `n` be the total number of characters in both strings.

### Time Complexity

```text
O(n)
```

We visit every character once.

### Space Complexity

```text
O(n)
```

We store the merged string in `result`.

---

## ⭐ Key Takeaways

* Use `min()` to find how many characters can be taken from both strings.
* Use indexing to access individual characters.
* Use slicing to get the remaining characters.
* `range()` is useful when we need indexes.
* `+=` is a shorter way to append to a variable.
* Always consider the case where the two input strings have different lengths.

---

## 🎯 Pattern

**Pattern:** Array/String Traversal + Indexing

The general idea is:

```text
Find common length
       ↓
Loop through common indexes
       ↓
Take one character from each string
       ↓
Append remaining characters
```
