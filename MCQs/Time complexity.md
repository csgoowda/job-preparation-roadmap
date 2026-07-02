# Infosys Specialist Programmer / Digital Specialist Engineer Preparation

# Module 1: Time Complexity & Algorithm Analysis

## 📌 Objective

Time Complexity is one of the most important topics in Infosys programming MCQs and coding rounds. It helps you analyze how efficiently an algorithm performs as the input size grows.

---

# 1. What is Time Complexity?

Time Complexity is the measure of how the running time of an algorithm increases with the size of the input (`n`).

It does **not** represent the actual execution time in seconds. Instead, it measures the **growth rate** of the algorithm.

Example:

```java
for(int i = 0; i < n; i++) {
    System.out.println(i);
}
```

The loop executes **n** times.

**Time Complexity:** `O(n)`

---

# 2. Common Time Complexities

| Complexity | Name | Example |
|------------|------|---------|
| O(1) | Constant | Array index access |
| O(log n) | Logarithmic | Binary Search |
| O(√n) | Square Root | Prime Number Check |
| O(n) | Linear | Linear Search |
| O(n log n) | Linearithmic | Merge Sort |
| O(n²) | Quadratic | Bubble Sort |
| O(n³) | Cubic | Triple Nested Loops |
| O(2ⁿ) | Exponential | Recursive Subset Generation |
| O(n!) | Factorial | Generating All Permutations |

### Memorize this order

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

# 3. Golden Rules

## Rule 1 – Ignore Constants

```java
for(int i = 0; i < 100; i++)
```

Time Complexity:

```
O(1)
```

---

## Rule 2 – Consecutive Loops Add

```java
for(int i = 0; i < n; i++) {}

for(int j = 0; j < n; j++) {}
```

```
O(n)+O(n)=O(2n)

Drop constants

Answer = O(n)
```

---

## Rule 3 – Nested Loops Multiply

```java
for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
```

```
n × n

Answer = O(n²)
```

---

## Rule 4 – Halving Means Logarithmic

```java
while(n > 1)
    n /= 2;
```

Every iteration halves the input.

```
Answer = O(log n)
```

---

# 4. Common Algorithm Complexities

| Algorithm | Time Complexity |
|-----------|-----------------|
| Linear Search | O(n) |
| Binary Search | O(log n) |
| Bubble Sort | O(n²) |
| Selection Sort | O(n²) |
| Insertion Sort | O(n²) |
| Merge Sort | O(n log n) |
| Quick Sort (Average) | O(n log n) |
| Quick Sort (Worst) | O(n²) |
| BFS | O(V + E) |
| DFS | O(V + E) |
| HashMap Search (Average) | O(1) |
| HashMap Search (Worst) | O(n) |

---

# 5. Frequently Asked Patterns

### Pattern 1

```java
for(int i = 0; i < n; i++)
    for(int j = 0; j < i; j++)
```

```
1+2+3+...+n

Answer = O(n²)
```

---

### Pattern 2

```java
for(int i = 1; i < n; i *= 2)
```

```
Input doubles

Answer = O(log n)
```

---

### Pattern 3

```java
for(int i = n; i > 1; i /= 2)
```

```
Input halves

Answer = O(log n)
```

---

### Pattern 4

```java
for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
```

```
Answer = O(n × m)
```

---

# Quick Revision

- Single Loop → O(n)
- Nested Loop → O(n²)
- Consecutive Loops → O(n)
- Divide by 2 → O(log n)
- Constant Loop → O(1)

---

# Module 1 Practice (Level 1)

## Q1

```java
for(int i = 0; i < n; i++)
```

A. O(1)

B. O(log n)

C. O(n)

D. O(n²)

Answer: **C**

---

## Q2

```java
for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
```

A. O(n)

B. O(log n)

C. O(n²)

D. O(n³)

Answer: **C**

---

## Q3

```java
while(n > 1)
    n /= 2;
```

A. O(n)

B. O(log n)

C. O(1)

D. O(n²)

Answer: **B**

---

## Q4

```java
for(int i = 0; i < 1000; i++)
```

A. O(1)

B. O(log n)

C. O(n)

D. O(n²)

Answer: **A**

---

## Q5

Which algorithm has **O(log n)** complexity?

A. Linear Search

B. Bubble Sort

C. Binary Search

D. Selection Sort

Answer: **C**

---

# Module 1 Practice (Level 2)

## Q1

```java
for(int i = 1; i <= n; i = i * 2)
```

A. O(n)

B. O(log n)

C. O(n log n)

D. O(1)

Answer: **B**

---

## Q2

```java
for(int i = 0; i < n; i++)
    for(int j = i; j < n; j++)
```

A. O(n)

B. O(n log n)

C. O(n²)

D. O(n³)

Answer: **C**

---

## Q3

```java
for(int i = n; i > 1; i = i / 2)
    for(int j = 0; j < n; j++)
```

A. O(log n)

B. O(n)

C. O(n log n)

D. O(n²)

Answer: **C**

---

## Q4

```java
for(int i = 0; i < n; i++) {}

for(int j = 0; j < n*n; j++) {}
```

A. O(n)

B. O(n log n)

C. O(n²)

D. O(n³)

Answer: **C**

---

## Q5

Which sorting algorithm has the best average-case complexity for large datasets?

A. Bubble Sort

B. Selection Sort

C. Merge Sort

D. Insertion Sort

Answer: **C**

---

## Q6

Worst-case complexity of Quick Sort?

A. O(n)

B. O(log n)

C. O(n log n)

D. O(n²)

Answer: **D**

---

## Q7

Average-case complexity of HashMap Search?

A. O(n)

B. O(log n)

C. O(1)

D. O(n log n)

Answer: **C**

---

## Q8

```
T(n)=2T(n/2)+O(n)
```

A. O(log n)

B. O(n)

C. O(n log n)

D. O(n²)

Answer: **C**

---

## Q9

Which grows the slowest?

A. O(n)

B. O(log n)

C. O(n log n)

D. O(n²)

Answer: **B**

---

## Q10

Which complexity is acceptable for n = 100000?

A. O(n²)

B. O(n³)

C. O(n log n)

D. O(2ⁿ)

Answer: **C**

---

## Q11

```java
for(int i = 1; i < n; i *= 2)
    for(int j = 1; j < n; j *= 2)
```

A. O(log n)

B. O((log n)²)

C. O(n log n)

D. O(n²)

Answer: **B**

---

## Q12

```java
for(int i = 0; i < n; i++)
    for(int j = 1; j < n; j *= 2)
```

A. O(log n)

B. O(n)

C. O(n log n)

D. O(n²)

Answer: **C**

---

# Module 1 Summary

## Must Remember

- O(1) → Constant
- O(log n) → Binary Search / Halving
- O(n) → Single Loop
- O(n log n) → Merge Sort
- O(n²) → Nested Loops
- O(V+E) → BFS / DFS

## Infosys Exam Tips

- Ignore constants.
- Add consecutive loops.
- Multiply nested loops.
- Halving or doubling indicates O(log n).
- Always identify the dominant term.
- Master sorting algorithm complexities.
- Understand average and worst-case scenarios for common algorithms.

---
