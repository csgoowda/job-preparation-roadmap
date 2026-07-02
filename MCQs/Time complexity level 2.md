# Module 1 – Time Complexity (Infosys Notes)

## Level 2 – Explained MCQs

---

## Q1

```java
for(int i = 1; i <= n; i = i * 2)
{
    System.out.println(i);
}
```

### Explanation

- Initially `i = 1`
- Each iteration doubles the value of `i`.
- Values become:

```
1 → 2 → 4 → 8 → 16 → 32 → ...
```

The loop stops when `i > n`.

Mathematically,

```
2^k = n
```

Taking log on both sides,

```
k = log₂(n)
```

Therefore, the loop runs **log₂(n)** times.

### Answer

**O(log n)**

### Shortcut

Whenever you see:

```java
i *= 2
```

or

```java
i /= 2
```

Think immediately:

**O(log n)**

---

# Q2

```java
for(int i = 0; i < n; i++)
{
    for(int j = i; j < n; j++)
    {
        System.out.println(i + j);
    }
}
```

### Explanation

For every value of `i`, the inner loop starts from `i`.

Iterations:

```
i = 0 → n

i = 1 → n-1

i = 2 → n-2

...

i = n-1 → 1
```

Total iterations:

```
n + (n-1) + (n-2) + ... + 1
```

This equals

```
n(n+1)/2
```

Ignoring constants,

### Answer

**O(n²)**

### Shortcut

Whenever you see

```java
j = i
```

or

```java
j = i + 1
```

It forms a **triangle pattern**.

Triangle pattern always gives

**O(n²)**

---

# Q3

```java
for(int i = n; i > 1; i = i / 2)
{
    for(int j = 0; j < n; j++)
    {

    }
}
```

### Explanation

Outer loop:

```
n
n/2
n/4
n/8
```

Runs

```
log n
```

times.

Inner loop:

Runs

```
n
```

times.

Since loops are nested,

```
O(log n) × O(n)
```

### Answer

**O(n log n)**

### Shortcut

Nested loops multiply.

```
log n × n

↓

n log n
```

---

# Q4

```java
for(int i = 0; i < n; i++)
{

}

for(int j = 0; j < n*n; j++)
{

}
```

### Explanation

These loops are **not nested**.

First loop:

```
O(n)
```

Second loop:

```
O(n²)
```

Total:

```
O(n)+O(n²)
```

Keep only the highest order term.

### Answer

**O(n²)**

### Shortcut

Separate loops **add**.

Keep only the largest complexity.

---

# Q5

Which algorithm has the best average-case complexity?

Options:

- Bubble Sort
- Selection Sort
- Merge Sort
- Insertion Sort

### Explanation

Average complexity:

Bubble Sort

```
O(n²)
```

Selection Sort

```
O(n²)
```

Insertion Sort

```
O(n²)
```

Merge Sort

```
O(n log n)
```

Since

```
n log n < n²
```

Merge Sort performs better for large datasets.

### Answer

**Merge Sort**

### Shortcut

If Quick Sort is not an option,

Best average sorting algorithm = **Merge Sort**

---

# Q6

Worst-case complexity of Quick Sort?

### Explanation

Average case:

```
O(n log n)
```

Worst case:

```
O(n²)
```

Worst case occurs when a poor pivot is chosen every time.

Example:

```
1 2 3 4 5
```

Choosing the first element as pivot repeatedly creates highly unbalanced partitions.

### Answer

**O(n²)**

### Shortcut

Quick Sort

Average → **O(n log n)**

Worst → **O(n²)**

---

# Q7

Average search complexity of HashMap?

### Explanation

HashMap uses hashing.

Average lookup:

```
O(1)
```

Worst case:

```
O(n)
```

Worst case happens when all keys collide into one bucket.

### Answer

**O(1)**

### Shortcut

Remember:

HashMap

Average → **O(1)**

Worst → **O(n)**

---

# Q8

```
T(n)=2T(n/2)+n
```

### Explanation

This is the recurrence relation used in **Merge Sort**.

Two recursive calls are made on half the input, followed by merging work proportional to `n`.

Using the Master Theorem:

```
T(n)=O(n log n)
```

### Answer

**O(n log n)**

### Shortcut

Memorize:

```
T(n)=2T(n/2)+n

↓

O(n log n)
```

---

# Q9

Which complexity grows the slowest?

Options:

```
O(n)

O(log n)

O(n log n)

O(n²)
```

### Explanation

Growth order:

```
O(log n)

↓

O(n)

↓

O(n log n)

↓

O(n²)
```

The slowest-growing complexity is

```
O(log n)
```

### Answer

**O(log n)**

### Shortcut

Always remember:

```
O(1)

↓

O(log n)

↓

O(√n)

↓

O(n)

↓

O(n log n)

↓

O(n²)

↓

O(n³)

↓

O(2ⁿ)

↓

O(n!)
```

---

# Q10

For

```
n = 100000
```

Which complexity is acceptable?

### Explanation

For very large inputs,

```
O(n²)
```

and

```
O(n³)
```

are generally too slow.

Most programming interviews expect

```
O(n)

or

O(n log n)
```

### Answer

**O(n log n)**

### Shortcut

Remember:

| Input Size | Preferred Complexity |
|------------|----------------------|
| 10 | O(n!) |
| 20 | O(2ⁿ) |
| 1000 | O(n²) |
| 100000 | O(n log n) |
| 1000000 | O(n) |

---

# Q11

```java
for(int i = 1; i < n; i *= 2)
{
    for(int j = 1; j < n; j *= 2)
    {

    }
}
```

### Explanation

Outer loop:

```
O(log n)
```

Inner loop:

```
O(log n)
```

Nested loops multiply.

```
log n × log n
```

### Answer

**O((log n)²)**

### Shortcut

Two nested logarithmic loops always result in

```
O((log n)²)
```

---

# Q12

```java
for(int i = 0; i < n; i++)
{
    for(int j = 1; j < n; j *= 2)
    {

    }
}
```

### Explanation

Outer loop:

```
O(n)
```

Inner loop:

```
O(log n)
```

Nested loops multiply.

```
n × log n
```

### Answer

**O(n log n)**

### Shortcut

One normal loop + one logarithmic loop

↓

**O(n log n)**

---

# Quick Revision (30-Second Cheat Sheet)

| Pattern | Complexity |
|----------|------------|
| One loop (`i++`) | O(n) |
| Two separate loops | Add and keep the largest term |
| Two nested loops | O(n²) |
| Three nested loops | O(n³) |
| `i *= 2` or `i /= 2` | O(log n) |
| `j = i` triangle pattern | O(n²) |
| Binary Search | O(log n) |
| Merge Sort | O(n log n) |
| Quick Sort (Average) | O(n log n) |
| Quick Sort (Worst) | O(n²) |
| HashMap Search (Average) | O(1) |
| BFS / DFS | O(V + E) |
