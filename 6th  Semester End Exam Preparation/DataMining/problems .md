Sure. Let's learn **Similarity / Proximity Measures** from **absolute basics**, exactly like in a classroom. I'll explain **every step** and then solve a problem **line by line**.

---

# Similarity / Proximity Measures

## What is Similarity?

Suppose you have two students.

| Student | Marks |
| ------- | ----: |
| A       |    80 |
| B       |    82 |

These two students have almost the same marks.

👉 So we say they are **similar**.

Now,

| Student | Marks |
| ------- | ----: |
| A       |    80 |
| C       |    20 |

These students are very different.

👉 So they are **not similar**.

In Data Mining, we need a mathematical way to measure **how similar or how different** two objects are.

This is called a **Similarity (Proximity) Measure**.

---

# Two Types

| Measure                  | Meaning                      |
| ------------------------ | ---------------------------- |
| Similarity               | Larger value = More similar  |
| Distance (Dissimilarity) | Smaller value = More similar |

Example

```
Distance = 0
Objects are exactly same

Distance = Large
Objects are very different
```

---

# Most Important Distance Measure

## Euclidean Distance

This is the most common proximity measure.

Imagine two points.

```
A ●

           ● B
```

The straight-line distance between them is called the **Euclidean Distance**.

---

## Formula

For two objects

A(x₁,y₁)

B(x₂,y₂)

The Euclidean distance is

[
d=\sqrt{(x_2-x_1)^2+(y_2-y_1)^2}
]

---

# Problem

Find the distance between

```
A(2,3)

B(6,6)
```

---

## Step 1

Write the coordinates.

```
A=(2,3)

B=(6,6)
```

---

## Step 2

Write the formula.

[
d=\sqrt{(x_2-x_1)^2+(y_2-y_1)^2}
]

---

## Step 3

Identify x₁,y₁,x₂,y₂

```
x₁=2

y₁=3

x₂=6

y₂=6
```

---

## Step 4

Substitute values.

[
=\sqrt{(6-2)^2+(6-3)^2}
]

---

### Why (6−2)?

Because

```
x₂−x₁

6−2
```

We subtract the X coordinates.

---

### Why (6−3)?

Because

```
y₂−y₁

6−3
```

We subtract the Y coordinates.

Now,

[
=\sqrt{4^2+3^2}
]

---

## Step 5

Square each value.

What is

```
4² ?

4×4=16
```

What is

```
3² ?

3×3=9
```

Now,

[
=\sqrt{16+9}
]

---

## Step 6

Add them.

```
16+9=25
```

Now,

[
=\sqrt{25}
]

---

## Step 7

Find square root.

```
√25=5
```

---

# Final Answer

[
\boxed{Distance=5}
]

---

# How to Understand This

Imagine

```
A ●

|
|
| 3

|
|
|
|___________

       4

             ● B
```

Horizontal distance = **4**

Vertical distance = **3**

By Pythagoras theorem

```
Distance²

=4²+3²

=16+9

=25

Distance=5
```

Exactly the same calculation.

---

# Another Problem (3D)

Find distance between

```
A=(2,4,6)

B=(5,8,10)
```

---

## Formula

[
d=\sqrt{(x_2-x_1)^2+(y_2-y_1)^2+(z_2-z_1)^2}
]

---

## Step 1

Substitute values.

[
=\sqrt{(5-2)^2+(8-4)^2+(10-6)^2}
]

---

## Step 2

Subtract.

```
5−2=3

8−4=4

10−6=4
```

[
=\sqrt{3^2+4^2+4^2}
]

---

## Step 3

Square.

```
3²=9

4²=16

4²=16
```

[
=\sqrt{9+16+16}
]

---

## Step 4

Add.

```
9+16+16=41
```

[
=\sqrt{41}
]

---

## Step 5

Final Answer

[
\boxed{Distance=\sqrt{41}\approx6.40}
]

---

# Exam Shortcut

Whenever you see a proximity measure problem:

1. Write the formula.
2. Identify the coordinates.
3. Subtract corresponding coordinates.
4. Square each difference.
5. Add all squared values.
6. Take the square root.
7. Write the final distance.

---

### References (Uploaded Material)

* **10ClusBasic.ppt** – *Cluster Analysis: Basic Concepts and Methods*, *Similarity and Dissimilarity Measures (Proximity Measures)*.

**Note:** If your exam asks about **Similarity/Proximity Measures**, they may also ask **Manhattan Distance, Minkowski Distance, Cosine Similarity, Jaccard Coefficient, and Simple Matching Coefficient**. These are also covered in your uploaded materials. I can explain each one from the basics with solved problems in the same step-by-step style.
---
---
---
---
---
---
---
===
---
---
# FP-Tree Construction (FP-Growth) – Step-by-Step (From Basics)

This is one of the **most important 10/15-mark questions** in Data Mining. I'll explain it **from the basics** and then solve the example **step by step** using the example from your uploaded material.

---

# What is FP-Growth?

**FP-Growth (Frequent Pattern Growth)** is a frequent pattern mining algorithm that **finds frequent itemsets without generating candidate itemsets**.

Instead of generating candidates like Apriori, it builds a compact data structure called an **FP-Tree (Frequent Pattern Tree)** and mines frequent patterns directly from it.

---

# Why FP-Growth?

### Problem with Apriori

Apriori:

* Generates many candidate itemsets.
* Scans the database many times.
* Slow for large datasets.

### FP-Growth

* No candidate generation.
* Only two scans of the database.
* Uses an FP-Tree.
* Faster than Apriori.

---

# Steps to Construct an FP-Tree

According to your uploaded material:

1. Scan the database.
2. Find frequent 1-itemsets.
3. Remove infrequent items.
4. Sort items in descending order of support (F-list).
5. Scan the database again.
6. Insert each transaction into the FP-tree.
7. Share common prefixes by increasing node counts.

---

# Example Problem

## Minimum Support = 3

### Transaction Database

| TID | Original Transaction   |
| --- | ---------------------- |
| 100 | f, a, c, d, g, i, m, p |
| 200 | a, b, c, f, l, m, o    |
| 300 | b, f, h, j, o          |
| 400 | b, c, k, s, p          |
| 500 | a, f, c, e, l, p, m, n |

---

# Step 1: Count Frequency of Each Item

Count how many transactions contain each item.

| Item | Support |
| ---- | ------: |
| f    |       4 |
| c    |       4 |
| a    |       3 |
| b    |       3 |
| m    |       3 |
| p    |       3 |

All other items have support less than 3, so they are removed.

---

# Step 2: Create the F-list

Arrange the frequent items in descending order of support.

| Rank | Item | Support |
| ---: | ---- | ------: |
|    1 | f    |       4 |
|    2 | c    |       4 |
|    3 | a    |       3 |
|    4 | b    |       3 |
|    5 | m    |       3 |
|    6 | p    |       3 |

**F-list:**

```text
f → c → a → b → m → p
```

---

# Step 3: Reorder Each Transaction

Keep only frequent items and arrange them according to the F-list.

| TID | Ordered Transaction |
| --- | ------------------- |
| 100 | f c a m p           |
| 200 | f c a b m           |
| 300 | f b                 |
| 400 | c b p               |
| 500 | f c a m p           |

---

# Step 4: Insert Transaction 100

Transaction:

```text
f c a m p
```

Tree:

```text
Root
 │
 f:1
 │
 c:1
 │
 a:1
 │
 m:1
 │
 p:1
```

---

# Step 5: Insert Transaction 200

Transaction:

```text
f c a b m
```

### Why don't we create another `f` node?

Because:

* `f` already exists.
* Increase its count.

### Count becomes

```text
f:2
```

Next,

`c` already exists

```text
c:2
```

Next,

`a`

```text
a:2
```

Now,

Next item is **b**

No branch exists.

Create a new branch.

```text
Root
 │
 f:2
 │
 c:2
 │
 a:2
 ├── m:1
 │     │
 │     p:1
 │
 └── b:1
       │
      m:1
```

---

# Step 6: Insert Transaction 300

Transaction:

```text
f b
```

`f` already exists

Increase count.

```text
f:3
```

Now

`b`

There is no direct child `b` under `f`.

Create one.

```text
Root
 │
 f:3
 ├── c:2
 │     │
 │     a:2
 │
 └── b:1
```

---

# Step 7: Insert Transaction 400

Transaction:

```text
c b p
```

There is no `c` directly under the Root.

Create a new branch.

```text
Root
├── f:3
│
└── c:1
      │
      b:1
           │
          p:1
```

---

# Step 8: Insert Transaction 500

Transaction:

```text
f c a m p
```

This path already exists.

Increase the counts.

```text
Root
 │
 f:4
 │
 c:3
 │
 a:3
 │
 m:2
 │
 p:2
```

---

# Final FP-Tree

```text
Root
├── f:4
│     ├── c:3
│     │     └── a:3
│     │           ├── m:2
│     │           │      └── p:2
│     │           └── b:1
│     │                  └── m:1
│     └── b:1
└── c:1
      └── b:1
            └── p:1
```

This is the final FP-Tree shown in your uploaded material.

---

# Why Do We Increase Counts Instead of Creating New Nodes?

Suppose two transactions start with:

```text
f c a
```

Instead of storing:

```text
f
|
c
|
a

f
|
c
|
a
```

we combine them into:

```text
f:2
|
c:2
|
a:2
```

This **compresses the database**, saves memory, and makes mining faster. This shared-prefix compression is the key idea of the FP-Tree.

---

# Advantages of FP-Tree

* No candidate generation.
* Requires only two database scans.
* Compresses the transaction database.
* Faster than Apriori.
* Efficient for large datasets.

---

# Exam Writing Order

1. Write the transaction database.
2. Count the support of each item.
3. Remove infrequent items.
4. Create the F-list.
5. Reorder each transaction.
6. Insert transactions one by one.
7. Draw the final FP-Tree.
8. Mention the advantages.

---

## References (Uploaded Material)

* **06FPBasic.ppt** – *Construct FP-Tree from a Transaction Database*, *Frequent Pattern Growth Mining Method*, *The FP-Tree Structure*.
---
---
---
---
---
---
---
---
---
# Apriori Algorithm – Solved Problem (Step by Step)

This is the **standard Apriori example** from your uploaded material. I'll explain **every step**, so you can solve similar exam questions easily.

---

# Problem

Given the following transaction database:

| Transaction ID | Items      |
| -------------- | ---------- |
| T100           | A, C, D    |
| T200           | B, C, E    |
| T300           | A, B, C, E |
| T400           | B, E       |

**Minimum Support = 2**

Find all **frequent itemsets** using the **Apriori Algorithm**.

---

# Step 1: Understand the Problem

We need to find:

* Frequent 1-itemsets (L₁)
* Frequent 2-itemsets (L₂)
* Frequent 3-itemsets (L₃)

until no more frequent itemsets are found.

---

# Step 2: Generate Candidate 1-Itemsets (C₁)

First, count how many times each item appears.

| Item | Transactions     | Support Count |
| ---- | ---------------- | ------------: |
| A    | T100, T300       |             2 |
| B    | T200, T300, T400 |             3 |
| C    | T100, T200, T300 |             3 |
| D    | T100             |             1 |
| E    | T200, T300, T400 |             3 |

---

# Step 3: Find Frequent 1-Itemsets (L₁)

Minimum Support = **2**

Remove items with support less than 2.

| Item | Support | Frequent? |
| ---- | ------: | :-------: |
| A    |       2 |   ✅ Yes   |
| B    |       3 |   ✅ Yes   |
| C    |       3 |   ✅ Yes   |
| D    |       1 |    ❌ No   |
| E    |       3 |   ✅ Yes   |

### Therefore,

```text
L₁ = {A, B, C, E}
```

**Why was D removed?**

Because:

```text
Support(D) = 1

Minimum Support = 2

1 < 2

Therefore D is NOT frequent.
```

---

# Step 4: Generate Candidate 2-Itemsets (C₂)

From L₁, form all possible pairs.

| Candidate |
| --------- |
| {A,B}     |
| {A,C}     |
| {A,E}     |
| {B,C}     |
| {B,E}     |
| {C,E}     |

---

# Step 5: Count Support of C₂

Check each pair against the transactions.

| Itemset | Transactions     | Support |
| ------- | ---------------- | ------: |
| {A,B}   | T300             |       1 |
| {A,C}   | T100, T300       |       2 |
| {A,E}   | T300             |       1 |
| {B,C}   | T200, T300       |       2 |
| {B,E}   | T200, T300, T400 |       3 |
| {C,E}   | T200, T300       |       2 |

---

# Step 6: Find Frequent 2-Itemsets (L₂)

Keep only support ≥ 2.

| Itemset | Support | Frequent? |
| ------- | ------: | :-------: |
| {A,B}   |       1 |    ❌ No   |
| {A,C}   |       2 |   ✅ Yes   |
| {A,E}   |       1 |    ❌ No   |
| {B,C}   |       2 |   ✅ Yes   |
| {B,E}   |       3 |   ✅ Yes   |
| {C,E}   |       2 |   ✅ Yes   |

### Therefore,

```text
L₂ =

{A,C}

{B,C}

{B,E}

{C,E}
```

---

# Step 7: Generate Candidate 3-Itemsets (C₃)

Now join the frequent 2-itemsets.

Possible candidate:

```text
{B,C,E}
```

Why only one?

Because:

* {A,C} cannot combine with {B,E}.
* The Apriori join condition is not satisfied.
* Other combinations are pruned.

---

# Step 8: Count Support of C₃

Check where **{B,C,E}** appears.

| Transaction | Contains B,C,E? |
| ----------- | --------------: |
| T100        |            ❌ No |
| T200        |           ✅ Yes |
| T300        |           ✅ Yes |
| T400        |            ❌ No |

Support Count

```text
=2
```

---

# Step 9: Find Frequent 3-Itemsets (L₃)

| Itemset | Support | Frequent? |
| ------- | ------: | :-------: |
| {B,C,E} |       2 |   ✅ Yes   |

### Therefore,

```text
L₃

{B,C,E}
```

---

# Step 10: Generate Candidate 4-Itemsets

Can we generate any more?

No.

There is only one 3-itemset.

So,

```text
Stop.
```

---

# Final Answer

## Frequent 1-Itemsets

| Itemset | Support |
| ------- | ------: |
| A       |       2 |
| B       |       3 |
| C       |       3 |
| E       |       3 |

---

## Frequent 2-Itemsets

| Itemset | Support |
| ------- | ------: |
| {A,C}   |       2 |
| {B,C}   |       2 |
| {B,E}   |       3 |
| {C,E}   |       2 |

---

## Frequent 3-Itemsets

| Itemset | Support |
| ------- | ------: |
| {B,C,E} |       2 |

---

## No Frequent 4-Itemsets

Algorithm stops.

---

# Final Frequent Itemsets

```text
L₁

A
B
C
E

L₂

AC
BC
BE
CE

L₃

BCE
```

---

# Flow of Apriori

```text
Database
     │
     ▼
Generate C₁
     │
     ▼
Find L₁
     │
     ▼
Generate C₂
     │
     ▼
Find L₂
     │
     ▼
Generate C₃
     │
     ▼
Find L₃
     │
     ▼
No More Candidates
     │
     ▼
Stop
```

---

# Exam Tip

Always solve Apriori problems in this order:

1. Write the transaction database.
2. Find **C₁** (candidate 1-itemsets).
3. Find **L₁** (frequent 1-itemsets).
4. Generate **C₂**.
5. Find **L₂**.
6. Generate **C₃**.
7. Find **L₃**.
8. Continue until no new frequent itemsets can be generated.
9. Write the final frequent itemsets.

---

## References (Uploaded Material)

* **06FPBasic.ppt** – *The Apriori Algorithm: Candidate Generation & Test Approach*, *The Apriori Algorithm – An Example*, *Pseudo Code*, *Apriori Property*.
---
---
---
---
---
---
---
---

# Decision Tree Construction (ID3) – Solved Problem (Step by Step)

This is the **standard Decision Tree Construction problem** using the **Buys_Computer** dataset from your uploaded material. I will explain **every calculation** step by step.

---

# Problem

Construct a **Decision Tree** using the **ID3 Algorithm (Information Gain)** for the following dataset.

| ID |  Age  | Income | Student | Credit Rating | Buys Computer |
| -: | :---: | :----: | :-----: | :-----------: | :-----------: |
|  1 |  ≤30  |  High  |    No   |      Fair     |       No      |
|  2 |  ≤30  |  High  |    No   |   Excellent   |       No      |
|  3 | 31–40 |  High  |    No   |      Fair     |      Yes      |
|  4 |  >40  | Medium |    No   |      Fair     |      Yes      |
|  5 |  >40  |   Low  |   Yes   |      Fair     |      Yes      |
|  6 |  >40  |   Low  |   Yes   |   Excellent   |       No      |
|  7 | 31–40 |   Low  |   Yes   |   Excellent   |      Yes      |
|  8 |  ≤30  | Medium |    No   |      Fair     |       No      |
|  9 |  ≤30  |   Low  |   Yes   |      Fair     |      Yes      |
| 10 |  >40  | Medium |   Yes   |      Fair     |      Yes      |
| 11 |  ≤30  | Medium |   Yes   |   Excellent   |      Yes      |
| 12 | 31–40 | Medium |    No   |   Excellent   |      Yes      |
| 13 | 31–40 |  High  |   Yes   |      Fair     |      Yes      |
| 14 |  >40  | Medium |    No   |   Excellent   |       No      |

---

# Step 1: Count the Class Labels

Count the target attribute (**Buys Computer**).

| Class | Count |
| ----- | ----: |
| Yes   |     9 |
| No    |     5 |
| Total |    14 |

---

# Step 2: Calculate Entropy of the Dataset

### Formula

[
Entropy(D)=-(p_{Yes}\log_2 p_{Yes})-(p_{No}\log_2 p_{No})
]

Substitute the values:

[
Entropy(D)
==========

## -\frac{9}{14}\log_2\frac{9}{14}

\frac{5}{14}\log_2\frac{5}{14}
]

[
Entropy(D)=0.940
]

This is the entropy of the entire dataset.

---

# Step 3: Calculate Information Gain for **Age**

## Split 1: Age ≤30

| Result | Count |
| ------ | ----: |
| Yes    |     2 |
| No     |     3 |
| Total  |     5 |

Entropy:

[
Entropy=0.971
]

---

## Split 2: Age = 31–40

| Result | Count |
| ------ | ----: |
| Yes    |     4 |
| No     |     0 |
| Total  |     4 |

Since all tuples belong to one class,

[
Entropy=0
]

---

## Split 3: Age >40

| Result | Count |
| ------ | ----: |
| Yes    |     3 |
| No     |     2 |
| Total  |     5 |

Entropy:

[
Entropy=0.971
]

---

## Step 4: Weighted Entropy for Age

| Age Group | Weight | Entropy | Weight × Entropy |
| --------- | -----: | ------: | ---------------: |
| ≤30       |   5/14 |   0.971 |            0.347 |
| 31–40     |   4/14 |       0 |            0.000 |
| >40       |   5/14 |   0.971 |            0.347 |

Total entropy after splitting on **Age**:

[
0.347+0+0.347=0.694
]

---

## Step 5: Information Gain for Age

### Formula

[
Gain(Age)=Entropy(D)-Entropy_{Age}
]

Substitute values:

[
Gain(Age)=0.940-0.694
]

[
\boxed{Gain(Age)=0.246}
]

---

# Step 6: Calculate Gain for Remaining Attributes

The uploaded material gives the following values.

| Attribute     | Information Gain |
| ------------- | ---------------: |
| Age           |        **0.246** |
| Income        |            0.029 |
| Student       |            0.151 |
| Credit Rating |            0.048 |

Since **Age** has the **highest Information Gain**, it becomes the **Root Node**.

---

# Step 7: Draw the Root Node

```text
                Age
          /       |       \
      ≤30      31–40      >40
```

---

# Step 8: Process the Branch **Age = 31–40**

| Yes | No |
| --: | -: |
|   4 |  0 |

All tuples belong to **Yes**.

```text
31–40  →  YES
```

No further splitting is required.

---

# Step 9: Process the Branch **Age ≤30**

Consider only the records where **Age ≤30**.

### Split on Student

| Student | Yes | No |
| ------- | --: | -: |
| Yes     |   2 |  0 |
| No      |   0 |  3 |

This split is perfectly pure.

```text
Age ≤30
      |
   Student
   /      \
 Yes       No
 |          |
Yes        No
```

---

# Step 10: Process the Branch **Age >40**

Consider only the records where **Age >40**.

### Split on Credit Rating

| Credit Rating | Yes | No |
| ------------- | --: | -: |
| Fair          |   3 |  0 |
| Excellent     |   0 |  2 |

Again, the split is perfectly pure.

```text
Age >40
        |
Credit Rating
     /         \
  Fair      Excellent
   |             |
 Yes            No
```

---

# Step 11: Final Decision Tree

```text
                 Age
            /      |      \
        ≤30      31–40      >40
          |          |          |
      Student       Yes    Credit Rating
      /     \               /         \
    Yes      No         Fair      Excellent
     |        |           |            |
    Yes      No          Yes          No
```

This is the final decision tree shown in your uploaded material.

---

# Step 12: Generate Classification Rules

| Rule                                     | Decision               |
| ---------------------------------------- | ---------------------- |
| If Age = 31–40                           | **Buy Computer = Yes** |
| If Age ≤30 and Student = Yes             | **Buy Computer = Yes** |
| If Age ≤30 and Student = No              | **Buy Computer = No**  |
| If Age >40 and Credit Rating = Fair      | **Buy Computer = Yes** |
| If Age >40 and Credit Rating = Excellent | **Buy Computer = No**  |

---

# Final Answer (Exam Writing Order)

1. Write the dataset.
2. Calculate the entropy of the dataset.
3. Calculate the information gain for each attribute.
4. Select the attribute with the highest information gain as the root.
5. Repeat the process for each branch until all leaf nodes are pure.
6. Draw the final decision tree.
7. Write the classification rules.

---

## References (Uploaded Material)

* **08ClassBasic.ppt** – *Decision Tree Induction: An Example*, *Algorithm for Decision Tree Induction*, *Attribute Selection: Information Gain*, *Brief Review of Entropy*.

------
---
---
---
---
---
---
---
# K-Nearest Neighbour (KNN) Algorithm – Solved Problem (Step by Step)

This is the standard **KNN numerical problem** from your uploaded material. I'll explain **every step** from the basics.

---

# Problem

Given the following training data:

| Point |  X |  Y | Class |
| ----- | -: | -: | :---- |
| A     |  1 |  1 | Yes   |
| B     |  2 |  2 | Yes   |
| C     |  3 |  3 | No    |
| D     |  6 |  5 | No    |
| E     |  7 |  7 | No    |

Classify the unknown point:

[
Q=(3,2)
]

using the **K-Nearest Neighbour (KNN)** algorithm with

[
\boxed{k=3}
]

---

# Step 1: Understand the Problem

We need to determine whether the new point **Q(3,2)** belongs to:

* **Yes**
* **No**

We do this by:

1. Calculating the distance from **Q** to every training point.
2. Selecting the **3 nearest neighbours**.
3. Using **majority voting**.

---

# Step 2: Write the Formula

The uploaded material uses the **Euclidean Distance**.

For two points

[
(x_1,y_1)\quad\text{and}\quad(x_2,y_2)
]

the distance is:

[
d=\sqrt{(x_2-x_1)^2+(y_2-y_1)^2}
]

---

# Step 3: Calculate Distance from Q to Each Point

## 1. Distance from A(1,1)

### Coordinates

| Point |  X |  Y |
| ----- | -: | -: |
| Q     |  3 |  2 |
| A     |  1 |  1 |

Substitute into the formula:

[
d=\sqrt{(3-1)^2+(2-1)^2}
]

### Solve step by step

[
=\sqrt{2^2+1^2}
]

[
=\sqrt{4+1}
]

[
=\sqrt5
]

[
\boxed{2.236}
]

---

## 2. Distance from B(2,2)

[
=\sqrt{(3-2)^2+(2-2)^2}
]

[
=\sqrt{1^2+0^2}
]

[
=\sqrt1
]

[
\boxed{1}
]

---

## 3. Distance from C(3,3)

[
=\sqrt{(3-3)^2+(2-3)^2}
]

[
=\sqrt{0^2+(-1)^2}
]

[
=\sqrt1
]

[
\boxed{1}
]

---

## 4. Distance from D(6,5)

[
=\sqrt{(6-3)^2+(5-2)^2}
]

[
=\sqrt{3^2+3^2}
]

[
=\sqrt9+9
]

[
=\sqrt{18}
]

[
\boxed{4.243}
]

---

## 5. Distance from E(7,7)

[
=\sqrt{(7-3)^2+(7-2)^2}
]

[
=\sqrt{4^2+5^2}
]

[
=\sqrt{16+25}
]

[
=\sqrt{41}
]

[
\boxed{6.403}
]

---

# Step 4: Create Distance Table

| Point | Class | Distance |
| ----- | ----- | -------: |
| A     | Yes   |    2.236 |
| B     | Yes   |    1.000 |
| C     | No    |    1.000 |
| D     | No    |    4.243 |
| E     | No    |    6.403 |

---

# Step 5: Sort the Distances

Arrange the distances in ascending order.

| Rank | Point | Class | Distance |
| ---: | ----- | ----- | -------: |
|    1 | B     | Yes   |    1.000 |
|    2 | C     | No    |    1.000 |
|    3 | A     | Yes   |    2.236 |
|    4 | D     | No    |    4.243 |
|    5 | E     | No    |    6.403 |

---

# Step 6: Select the K Nearest Neighbours

Since

[
k=3
]

choose the first **3 neighbours**.

| Neighbour | Class |
| --------- | ----- |
| B         | Yes   |
| C         | No    |
| A         | Yes   |

---

# Step 7: Majority Voting

Count the classes.

| Class | Count |
| ----- | ----: |
| Yes   |     2 |
| No    |     1 |

---

# Step 8: Final Classification

Since **Yes** has the majority (2 out of 3 neighbours),

[
\boxed{\text{Q(3,2) belongs to Class YES}}
]

---

# Final Answer

### Distance Calculation

| Point | Distance | Class |
| ----- | -------: | ----- |
| A     |    2.236 | Yes   |
| B     |    1.000 | Yes   |
| C     |    1.000 | No    |
| D     |    4.243 | No    |
| E     |    6.403 | No    |

### 3 Nearest Neighbours

| Point | Class |
| ----- | ----- |
| B     | Yes   |
| C     | No    |
| A     | Yes   |

### Majority Voting

* **Yes = 2**
* **No = 1**

### Predicted Class

[
\boxed{\textbf{YES}}
]

---

# KNN Flow (Exam Writing)

```text
Training Data
      │
      ▼
Choose K (=3)
      │
      ▼
Calculate Euclidean Distance
      │
      ▼
Sort Distances
      │
      ▼
Select 3 Nearest Neighbours
      │
      ▼
Majority Voting
      │
      ▼
Predicted Class = YES
```

---

# Exam Tip

For any **KNN numerical problem**, always follow this order:

1. Write the dataset.
2. Choose the value of **K**.
3. Write the Euclidean distance formula.
4. Calculate the distance from the unknown point to every training point.
5. Create a distance table.
6. Sort the distances.
7. Select the **K nearest neighbours**.
8. Apply majority voting.
9. Write the predicted class.

---

## References (Uploaded Material)

* **09ClassAdvanced.ppt** – *The k-Nearest Neighbor Algorithm*, *Lazy Learner: Instance-Based Methods*, *Discussion on the k-NN Algorithm*.

------
---
---
---
---
---
---
---
# Bayesian Classification – Solved Problem (Step by Step)

This problem is based on the **Bayesian Classification** topic in your uploaded classification material. I'll explain every step from the basics.

---

# Problem

Given the following training data:

| ID | Weather  | Play |
| -: | :------- | :--: |
|  1 | Sunny    |  No  |
|  2 | Sunny    |  No  |
|  3 | Overcast |  Yes |
|  4 | Rain     |  Yes |
|  5 | Rain     |  Yes |
|  6 | Sunny    |  Yes |

Classify the new tuple:

> **Weather = Sunny**

using **Bayesian Classification**.

---

# Step 1: Understand the Problem

We need to decide whether:

```text
Weather = Sunny

↓

Play = Yes ?

or

Play = No ?
```

We calculate the probability for both classes and choose the **larger probability**.

---

# Step 2: Write Bayes' Theorem

The Bayesian Classification formula is:

[
P(C|X)=\frac{P(X|C)\times P(C)}{P(X)}
]

Since **P(X)** is the same for all classes, we compare only:

[
P(X|C)\times P(C)
]

---

# Step 3: Calculate Prior Probability

Count the class labels.

| Class | Count | Probability |
| ----- | ----: | ----------: |
| Yes   |     4 | 4/6 = 0.667 |
| No    |     2 | 2/6 = 0.333 |

So,

[
P(Yes)=\frac46=0.667
]

[
P(No)=\frac26=0.333
]

---

# Step 4: Calculate Conditional Probability

We need

### P(Sunny | Yes)

Among the **4 Yes** records:

| Weather  | Count |
| -------- | ----: |
| Sunny    |     1 |
| Overcast |     1 |
| Rain     |     2 |

Therefore,

[
P(Sunny|Yes)=\frac14=0.25
]

---

Now calculate

### P(Sunny | No)

Among the **2 No** records:

| Weather | Count |
| ------- | ----: |
| Sunny   |     2 |

Therefore,

[
P(Sunny|No)=\frac22=1
]

---

# Step 5: Calculate Posterior Probability

## For Class = Yes

Use:

[
P(Yes)\times P(Sunny|Yes)
]

Substitute the values:

[
=\frac46\times\frac14
]

[
=0.667\times0.25
]

[
=0.167
]

---

## For Class = No

Use:

[
P(No)\times P(Sunny|No)
]

Substitute:

[
=\frac26\times\frac22
]

[
=0.333\times1
]

[
=0.333
]

---

# Step 6: Compare the Probabilities

| Class | Probability |
| ----- | ----------: |
| Yes   |       0.167 |
| No    |       0.333 |

---

# Step 7: Final Classification

Since

[
0.333>0.167
]

the unknown tuple belongs to

[
\boxed{\textbf{Play = No}}
]

---

# Final Answer

| Calculation             |       Value |
| ----------------------- | ----------: |
| P(Yes)                  | 4/6 = 0.667 |
| P(No)                   | 2/6 = 0.333 |
| P(Sunny | Yes)          |  1/4 = 0.25 |
| P(Sunny | No)           |     2/2 = 1 |
| P(Yes) × P(Sunny | Yes) |       0.167 |
| P(No) × P(Sunny | No)   |       0.333 |

### Predicted Class

[
\boxed{\textbf{Play = No}}
]

---

# Bayesian Belief Network (BBN) – Solved Problem

## Problem

Given:

* (P(Rain)=0.2)
* (P(WetGrass|Rain)=0.9)

Find:

[
P(Rain \cap WetGrass)
]

---

# Step 1: Understand the Problem

The Bayesian Belief Network represents dependencies using a **Directed Acyclic Graph (DAG)**.

```text
Rain
  │
  ▼
Wet Grass
```

Here:

* Rain influences Wet Grass.

---

# Step 2: Write the Formula

Use the multiplication rule:

[
P(A \cap B)=P(A)\times P(B|A)
]

So,

[
P(Rain \cap WetGrass)
=====================

P(Rain)\times P(WetGrass|Rain)
]

---

# Step 3: Substitute the Values

[
=0.2\times0.9
]

---

# Step 4: Multiply

[
=0.18
]

---

# Final Answer

[
\boxed{P(Rain \cap WetGrass)=0.18}
]

---

# Summary Table

## Bayesian Classification

| Step                    | Result                            |
| ----------------------- | --------------------------------- |
| Prior Probability       | Yes = 4/6, No = 2/6               |
| Conditional Probability | P(Sunny|Yes)=1/4, P(Sunny|No)=2/2 |
| Posterior Probability   | Yes = 0.167, No = 0.333           |
| Final Class             | **Play = No**                     |

---

## Bayesian Belief Network

| Given            | Value |
| ---------------- | ----: |
| P(Rain)          |   0.2 |
| P(WetGrass|Rain) |   0.9 |

Calculation:

[
P(Rain \cap WetGrass)
=====================

# 0.2\times0.9

0.18
]

### Final Answer

[
\boxed{0.18}
]

---

# Exam Writing Order

### Bayesian Classification

1. Write Bayes' theorem.
2. Calculate prior probabilities.
3. Calculate conditional probabilities.
4. Compute posterior probabilities.
5. Compare probabilities.
6. Write the predicted class.

### Bayesian Belief Network

1. Draw the network (DAG).
2. Write the multiplication formula.
3. Substitute the given values.
4. Perform the calculation.
5. Write the final probability.

---

## References (Uploaded Material)

* **09ClassAdvanced.ppt** – *Bayesian Classification*, *Bayesian Belief Networks*, *Chapter 9: Classification: Advanced Methods*.

------
---
---
---
---
---
---
---
# K-Means Clustering – Solved Problem (Step by Step)

This is the standard **K-Means clustering problem** from your uploaded material. I will explain **every step** from the basics.

---

# Problem

Cluster the following six points using the **K-Means Algorithm**.

### Number of Clusters

[
K=2
]

### Data Points

| Point | Coordinates (X,Y) |
| ----- | ----------------- |
| P1    | (2,10)            |
| P2    | (2,5)             |
| P3    | (8,4)             |
| P4    | (5,8)             |
| P5    | (7,5)             |
| P6    | (6,4)             |

Choose the initial centroids as:

* **C₁ = (2,10)**
* **C₂ = (5,8)**

---

# Step 1: Understand the Problem

We need to:

1. Choose **K = 2**.
2. Select the initial centroids.
3. Calculate the distance of each point from both centroids.
4. Assign each point to the nearest centroid.
5. Compute the new centroids.
6. Repeat until the clusters do not change.

---

# Step 2: Write the Distance Formula

K-Means uses the **Euclidean Distance**.

[
d=\sqrt{(x_2-x_1)^2+(y_2-y_1)^2}
]

---

# Step 3: Initial Centroids

| Cluster | Centroid |
| ------- | -------- |
| C₁      | (2,10)   |
| C₂      | (5,8)    |

---

# Step 4: Calculate Distance of Each Point

### Point P1 = (2,10)

Distance to **C₁**

[
=\sqrt{(2-2)^2+(10-10)^2}
]

[
=\sqrt0
=0
]

Distance to **C₂**

[
=\sqrt{(5-2)^2+(8-10)^2}
]

[
=\sqrt{9+4}
=\sqrt{13}
=3.606
]

Nearest centroid → **C₁**

---

### Point P2 = (2,5)

Distance to **C₁**

[
=\sqrt{(2-2)^2+(10-5)^2}
]

[
=\sqrt{25}
=5
]

Distance to **C₂**

[
=\sqrt{(5-2)^2+(8-5)^2}
]

[
=\sqrt{9+9}
=\sqrt{18}
=4.243
]

Nearest centroid → **C₂**

---

### Point P3 = (8,4)

Distance to **C₁**

[
=\sqrt{(8-2)^2+(4-10)^2}
]

[
=\sqrt{36+36}
=\sqrt{72}
=8.485
]

Distance to **C₂**

[
=\sqrt{(8-5)^2+(4-8)^2}
]

[
=\sqrt{9+16}
=\sqrt{25}
=5
]

Nearest centroid → **C₂**

---

### Point P4 = (5,8)

Distance to **C₁**

[
=\sqrt{(5-2)^2+(8-10)^2}
]

[
=\sqrt{13}
=3.606
]

Distance to **C₂**

[
=\sqrt{(5-5)^2+(8-8)^2}
]

[
=0
]

Nearest centroid → **C₂**

---

### Point P5 = (7,5)

Distance to **C₁**

[
=\sqrt{(7-2)^2+(5-10)^2}
]

[
=\sqrt{25+25}
=\sqrt{50}
=7.071
]

Distance to **C₂**

[
=\sqrt{(7-5)^2+(5-8)^2}
]

[
=\sqrt{4+9}
=\sqrt{13}
=3.606
]

Nearest centroid → **C₂**

---

### Point P6 = (6,4)

Distance to **C₁**

[
=\sqrt{(6-2)^2+(4-10)^2}
]

[
=\sqrt{16+36}
=\sqrt{52}
=7.211
]

Distance to **C₂**

[
=\sqrt{(6-5)^2+(4-8)^2}
]

[
=\sqrt{1+16}
=\sqrt{17}
=4.123
]

Nearest centroid → **C₂**

---

# Step 5: Distance Table

| Point | Distance to C₁ | Distance to C₂ | Assigned Cluster |
| ----- | -------------: | -------------: | :--------------: |
| P1    |          0.000 |          3.606 |        C₁        |
| P2    |          5.000 |          4.243 |        C₂        |
| P3    |          8.485 |          5.000 |        C₂        |
| P4    |          3.606 |          0.000 |        C₂        |
| P5    |          7.071 |          3.606 |        C₂        |
| P6    |          7.211 |          4.123 |        C₂        |

---

# Step 6: Form the Clusters

### Cluster C₁

| Points |
| ------ |
| P1     |

---

### Cluster C₂

| Points |
| ------ |
| P2     |
| P3     |
| P4     |
| P5     |
| P6     |

---

# Step 7: Calculate New Centroids

## Cluster C₁

Only one point is present.

[
C_1=(2,10)
]

---

## Cluster C₂

| Point |  X |  Y |
| ----- | -: | -: |
| P2    |  2 |  5 |
| P3    |  8 |  4 |
| P4    |  5 |  8 |
| P5    |  7 |  5 |
| P6    |  6 |  4 |

### Average X

[
=\frac{2+8+5+7+6}{5}
=\frac{28}{5}
=5.6
]

### Average Y

[
=\frac{5+4+8+5+4}{5}
=\frac{26}{5}
=5.2
]

### New Centroid

[
\boxed{C_2=(5.6,;5.2)}
]

---

# Step 8: Second Iteration

Again calculate the distances using the new centroids.

After reassignment, the clusters become:

### Cluster C₁

| Points |
| ------ |
| P1     |
| P2     |
| P4     |

---

### Cluster C₂

| Points |
| ------ |
| P3     |
| P5     |
| P6     |

---

# Step 9: Calculate Final Centroids

## Cluster C₁

| Point |  X |  Y |
| ----- | -: | -: |
| P1    |  2 | 10 |
| P2    |  2 |  5 |
| P4    |  5 |  8 |

Average X

[
=\frac{2+2+5}{3}=3
]

Average Y

[
=\frac{10+5+8}{3}
=\frac{23}{3}
=7.67
]

Final centroid

[
\boxed{C_1=(3,;7.67)}
]

---

## Cluster C₂

| Point |  X |  Y |
| ----- | -: | -: |
| P3    |  8 |  4 |
| P5    |  7 |  5 |
| P6    |  6 |  4 |

Average X

[
=\frac{8+7+6}{3}
=7
]

Average Y

[
=\frac{4+5+4}{3}
=4.33
]

Final centroid

[
\boxed{C_2=(7,;4.33)}
]

---

# Final Clusters

| Cluster | Points     | Final Centroid |
| ------- | ---------- | -------------- |
| C₁      | P1, P2, P4 | (3, 7.67)      |
| C₂      | P3, P5, P6 | (7, 4.33)      |

Since no further changes occur, the algorithm **stops**.

---

# Final Answer

### Final Cluster 1

* P1 (2,10)
* P2 (2,5)
* P4 (5,8)

Centroid:

[
(3,;7.67)
]

### Final Cluster 2

* P3 (8,4)
* P5 (7,5)
* P6 (6,4)

Centroid:

[
(7,;4.33)
]

---

# Exam Writing Order

1. Write the dataset.
2. Choose **K** and initial centroids.
3. Calculate Euclidean distances.
4. Assign points to the nearest centroid.
5. Form clusters.
6. Compute new centroids.
7. Repeat until no changes occur.
8. Write the final clusters and centroids.

---

## References (Uploaded Material)

* **10ClusBasic.ppt** – *The K-Means Clustering Method*, *Partitioning Algorithms: Basic Concept*, *An Example of K-Means Clustering*.

------
---
---
---
---
---
---
---
# Statistical Measures & Graphs

These statistical measures are commonly used in **Data Mining** to summarize, analyze, and visualize data. The explanations below follow the concepts covered in your uploaded study materials.

---

# 1. Mean (Arithmetic Mean)

## Definition

The **Mean** is the **average** of all observations. It is obtained by adding all values and dividing by the total number of observations.

### Formula

[
\boxed{\text{Mean}=\frac{\sum X}{N}}
]

Where:

* **ΣX** = Sum of all observations
* **N** = Number of observations

---

## Example

Data:

```
10, 15, 20, 25, 30
```

### Step 1: Find the sum

```
10 + 15 + 20 + 25 + 30 = 100
```

### Step 2: Count the observations

```
N = 5
```

### Step 3: Apply the formula

[
\text{Mean}=\frac{100}{5}=20
]

### Final Answer

[
\boxed{\text{Mean}=20}
]

---

## Advantages

* Easy to calculate.
* Uses all observations.
* Widely used in statistics.

## Disadvantages

* Affected by extreme values (outliers).

---

# 2. Median

## Definition

The **Median** is the **middle value** of a dataset after arranging the values in ascending or descending order.

---

## Case 1: Odd Number of Observations

Data:

```
10, 15, 20, 25, 30
```

Already sorted.

Number of observations = **5**

Middle position:

[
\frac{5+1}{2}=3
]

The 3rd value is:

```
20
```

### Final Answer

[
\boxed{\text{Median}=20}
]

---

## Case 2: Even Number of Observations

Data:

```
10, 15, 20, 25
```

Number of observations = **4**

Middle values:

```
15 and 20
```

Median:

[
\frac{15+20}{2}=17.5
]

### Final Answer

[
\boxed{\text{Median}=17.5}
]

---

## Advantages

* Not affected by extreme values.
* Suitable for skewed data.

## Disadvantages

* Does not use all observations.

---

# 3. Standard Deviation

## Definition

**Standard Deviation (SD)** measures the **spread or variation** of data around the mean.

* Small SD → Data values are close to the mean.
* Large SD → Data values are widely spread.

genui{"probability_statistics_learning_block":{"type_id":"VARIANCE"}}

### Formula

[
SD=\sqrt{\frac{\sum (X-\bar X)^2}{N}}
]

Where:

* **X** = Observation
* **X̄** = Mean
* **N** = Number of observations

---

## Example

Data:

```
2,4,4,4,5,5,7,9
```

### Step 1: Mean

Sum:

```
2+4+4+4+5+5+7+9=40
```

Mean:

```
40/8=5
```

---

### Step 2: Find (X − Mean)

|  X | X − 5 | (X − 5)² |
| -: | ----: | -------: |
|  2 |    -3 |        9 |
|  4 |    -1 |        1 |
|  4 |    -1 |        1 |
|  4 |    -1 |        1 |
|  5 |     0 |        0 |
|  5 |     0 |        0 |
|  7 |     2 |        4 |
|  9 |     4 |       16 |

---

### Step 3: Sum of Squares

```
9+1+1+1+0+0+4+16=32
```

---

### Step 4: Variance

```
32/8=4
```

---

### Step 5: Standard Deviation

[
SD=\sqrt4=2
]

### Final Answer

[
\boxed{SD=2}
]

---

## Advantages

* Uses all observations.
* Measures data variability accurately.

## Disadvantages

* Slightly difficult to calculate manually.

---

# 4. Box Plot

## Definition

A **Box Plot (Box-and-Whisker Plot)** is a graphical representation of data using the **five-number summary**.

It shows:

* Minimum
* First Quartile (Q1)
* Median (Q2)
* Third Quartile (Q3)
* Maximum



---

## Example

Data:

```
5,7,8,12,15,18,21
```

### Five-Number Summary

| Measure | Value |
| ------- | ----: |
| Minimum |     5 |
| Q1      |     7 |
| Median  |    12 |
| Q3      |    18 |
| Maximum |    21 |

---

### Box Plot Representation

```text
5      7       12        18       21
|------|========|=========|--------|
      Q1      Median      Q3
```

---

## Uses

* Detects outliers.
* Shows data spread.
* Compares distributions.

---

# 5. Scatter Plot

## Definition

A **Scatter Plot** displays the relationship between **two numerical variables**.

Each point represents one observation.



---

## Example

|  X |  Y |
| -: | -: |
|  1 |  2 |
|  2 |  4 |
|  3 |  5 |
|  4 |  4 |
|  5 |  5 |

### Representation

```text
Y

5        •     •

4     •      •

3

2  •

1____________________ X

   1 2 3 4 5
```

---

## Uses

* Shows correlation between variables.
* Detects trends.
* Detects outliers.

---

# 6. QQ Plot (Quantile-Quantile Plot)

## Definition

A **QQ Plot** compares the **quantiles of sample data** with the **quantiles of a theoretical distribution** (usually the normal distribution).

It is mainly used to check **whether the data follows a normal distribution**.



---

## Interpretation

### If points lie approximately on a straight line

```
•
  •
    •
      •
        •
```

➡️ Data is approximately **normally distributed**.

---

### If points deviate from the straight line

```
•
  •
      •
          •
               •
```

➡️ Data is **not normally distributed**.

---

## Uses

* Checks normality.
* Detects skewness.
* Compares two distributions.

---

# Summary Table

| Measure / Graph        | Purpose                                           |
| ---------------------- | ------------------------------------------------- |
| **Mean**               | Average value of the dataset                      |
| **Median**             | Middle value of the ordered dataset               |
| **Standard Deviation** | Measures spread of data around the mean           |
| **Box Plot**           | Shows five-number summary and outliers            |
| **Scatter Plot**       | Shows relationship between two variables          |
| **QQ Plot**            | Checks whether data follows a normal distribution |

---

# Exam Tips

### Mean

* Add all values.
* Divide by the total number of observations.

### Median

* Arrange the data.
* Find the middle value (or average of two middle values).

### Standard Deviation

* Find the mean.
* Calculate deviations.
* Square the deviations.
* Find the variance.
* Take the square root.

### Box Plot

* Draw using the five-number summary:

  * Minimum
  * Q1
  * Median
  * Q3
  * Maximum

### Scatter Plot

* Plot **X** and **Y** values on the graph.

### QQ Plot

* If points form a straight line → **Normal distribution**.
* If not → **Non-normal distribution**.

---

## References (Uploaded Material)

* Data Mining materials – *Data preprocessing and descriptive statistics*, including statistical measures and graphical visualization methods.

------
---
---
---
---
---
---
---

# Normalization Problems (Step by Step)

**Normalization** is a data preprocessing technique used to transform data into a common scale without changing the relationships among the values. It is widely used before applying data mining and machine learning algorithms. 

The three commonly used normalization methods are:

1. **Min-Max Normalization**
2. **Z-Score Normalization**
3. **Decimal Scaling Normalization**

---

# 1. Min-Max Normalization

## Formula

[
\boxed{
v'=\frac{v-\min(A)}{\max(A)-\min(A)}\times(new_{max}-new_{min})+new_{min}
}
]

Where:

* (v) = Original value
* (\min(A)) = Minimum value
* (\max(A)) = Maximum value
* (new_{min}, new_{max}) = New range

---

## Problem

Normalize the value **35** to the range **[0,1]**.

Given:

| Parameter |  Value |
| --------- | -----: |
| Minimum   |     10 |
| Maximum   |     70 |
| Value     |     35 |
| New Range | 0 to 1 |

---

### Step 1: Write the formula

[
v'=\frac{v-\min}{\max-\min}
]

---

### Step 2: Substitute the values

[
=\frac{35-10}{70-10}
]

---

### Step 3: Subtract numerator

[
35-10=25
]

---

### Step 4: Subtract denominator

[
70-10=60
]

Now,

[
=\frac{25}{60}
]

---

### Step 5: Divide

[
25\div60=0.4167
]

---

## Final Answer

[
\boxed{0.417}
]

---

# 2. Z-Score Normalization

## Formula

genui{"probability_statistics_learning_block":{"type_id":"STANDARD_SCORE_Z"}}

Where:

* (v) = Original value
* (\mu) = Mean
* (\sigma) = Standard deviation

---

## Problem

Normalize the value **70**.

Given:

| Parameter          | Value |
| ------------------ | ----: |
| Value              |    70 |
| Mean               |    50 |
| Standard Deviation |    10 |

---

### Step 1: Write the formula

[
Z=\frac{v-\mu}{\sigma}
]

---

### Step 2: Substitute values

[
=\frac{70-50}{10}
]

---

### Step 3: Subtract

[
70-50=20
]

---

### Step 4: Divide

[
20\div10=2
]

---

## Final Answer

[
\boxed{Z=2}
]

**Interpretation:** The value **70** is **2 standard deviations above the mean**.

---

# 3. Decimal Scaling Normalization

## Formula

[
\boxed{
v'=\frac{v}{10^j}
}
]

Where:

* (j) = Smallest integer such that the maximum normalized value is less than 1.

---

## Problem

Normalize the value **987**.

---

### Step 1: Find the maximum number of digits

The value **987** has **3 digits**.

Therefore,

[
j=3
]

---

### Step 2: Write the formula

[
v'=\frac{v}{10^j}
]

---

### Step 3: Substitute the values

[
=\frac{987}{10^3}
]

---

### Step 4: Calculate

[
10^3=1000
]

[
=\frac{987}{1000}
]

---

### Step 5: Divide

[
987\div1000=0.987
]

---

## Final Answer

[
\boxed{0.987}
]

---

# Summary Table

| Normalization Method | Formula                    | Example                   | Answer    |
| -------------------- | -------------------------- | ------------------------- | --------- |
| **Min-Max**          | (\frac{v-\min}{\max-\min}) | (35,\ \min=10,\ \max=70)  | **0.417** |
| **Z-Score**          | (\frac{v-\mu}{\sigma})     | (70,\ \mu=50,\ \sigma=10) | **2**     |
| **Decimal Scaling**  | (\frac{v}{10^j})           | (987)                     | **0.987** |

---

# Which Normalization Should You Use?

| Method                    | Best Used When                                      |
| ------------------------- | --------------------------------------------------- |
| **Min-Max Normalization** | A fixed range (e.g., 0–1 or −1 to 1) is required.   |
| **Z-Score Normalization** | Data has outliers or follows a normal distribution. |
| **Decimal Scaling**       | A simple scaling method is sufficient.              |

---

# Exam Writing Order

### Min-Max

1. Write the formula.
2. Substitute the values.
3. Solve the numerator.
4. Solve the denominator.
5. Divide and write the normalized value.

### Z-Score

1. Write the formula.
2. Substitute the values.
3. Subtract the mean.
4. Divide by the standard deviation.
5. Write the Z-score.

### Decimal Scaling

1. Count the number of digits in the maximum value.
2. Determine (j).
3. Divide by (10^j).
4. Write the normalized value.

---

## References (Uploaded Material)

* Data Mining materials – *Data Preprocessing*, *Normalization Techniques (Min-Max, Z-Score, Decimal Scaling)*. 

------
---
---
---
---
---
---
---
# Closed Frequent Itemsets and Maximal Frequent Itemsets – Solved Problem (Step by Step)

This is one of the **most frequently asked numerical problems** in Data Mining. I'll explain it from the basics and solve it step by step using the concepts from your uploaded material.

---

# Problem

Given the transaction database:

| Transaction ID | Items   |
| -------------- | ------- |
| T1             | A, B, C |
| T2             | A, B    |
| T3             | A, B, C |
| T4             | A       |

Minimum Support = **2**

Find:

1. **Frequent Itemsets**
2. **Closed Frequent Itemsets**
3. **Maximal Frequent Itemsets**

---

# Step 1: Find Frequent 1-Itemsets

Count the support of each item.

| Item | Transactions   | Support |
| ---- | -------------- | ------: |
| A    | T1, T2, T3, T4 |       4 |
| B    | T1, T2, T3     |       3 |
| C    | T1, T3         |       2 |

All have support ≥ 2.

### Therefore,

```text
L₁

A
B
C
```

---

# Step 2: Find Frequent 2-Itemsets

Possible pairs:

```text
AB

AC

BC
```

Count support.

| Itemset | Transactions | Support |
| ------- | ------------ | ------: |
| AB      | T1, T2, T3   |       3 |
| AC      | T1, T3       |       2 |
| BC      | T1, T3       |       2 |

All are frequent.

### Therefore,

```text
L₂

AB

AC

BC
```

---

# Step 3: Find Frequent 3-Itemsets

Only one possible set.

```text
ABC
```

Count support.

| Itemset | Transactions | Support |
| ------- | ------------ | ------: |
| ABC     | T1, T3       |       2 |

Support ≥ 2

Therefore,

```text
L₃

ABC
```

---

# Step 4: Final Frequent Itemsets

| Frequent Itemset | Support |
| ---------------- | ------: |
| A                |       4 |
| B                |       3 |
| C                |       2 |
| AB               |       3 |
| AC               |       2 |
| BC               |       2 |
| ABC              |       2 |

---

# Step 5: Find Closed Frequent Itemsets

## Rule

A **Closed Frequent Itemset** is a frequent itemset for which **no proper superset has the same support**.

---

## Check One by One

### Itemset A

Support = 4

Superset:

```text
AB = 3

AC = 2

ABC = 2
```

No superset has support **4**.

✅ **A is Closed**

---

### Itemset B

Support = 3

Superset:

```text
AB = 3
```

Same support.

❌ **Not Closed**

---

### Itemset C

Support = 2

Supersets:

```text
AC = 2

BC = 2

ABC = 2
```

Same support.

❌ **Not Closed**

---

### Itemset AB

Support = 3

Superset:

```text
ABC = 2
```

Different support.

✅ **Closed**

---

### Itemset AC

Support = 2

Superset:

```text
ABC = 2
```

Same support.

❌ **Not Closed**

---

### Itemset BC

Support = 2

Superset:

```text
ABC = 2
```

Same support.

❌ **Not Closed**

---

### Itemset ABC

Support = 2

No superset exists.

✅ **Closed**

---

# Closed Frequent Itemsets

| Itemset | Support |
| ------- | ------: |
| A       |       4 |
| AB      |       3 |
| ABC     |       2 |

---

# Step 6: Find Maximal Frequent Itemsets

## Rule

A **Maximal Frequent Itemset** is a frequent itemset that **has no frequent superset**.

---

## Check One by One

### A

Frequent superset exists.

```text
AB
```

❌ Not Maximal

---

### B

Frequent superset exists.

```text
AB
```

❌ Not Maximal

---

### C

Frequent superset exists.

```text
AC
```

❌ Not Maximal

---

### AB

Frequent superset exists.

```text
ABC
```

❌ Not Maximal

---

### AC

Frequent superset exists.

```text
ABC
```

❌ Not Maximal

---

### BC

Frequent superset exists.

```text
ABC
```

❌ Not Maximal

---

### ABC

No frequent superset exists.

✅ **Maximal**

---

# Maximal Frequent Itemsets

| Itemset | Support |
| ------- | ------: |
| ABC     |       2 |

---

# Final Answer

## Frequent Itemsets

| Itemset | Support |
| ------- | ------: |
| A       |       4 |
| B       |       3 |
| C       |       2 |
| AB      |       3 |
| AC      |       2 |
| BC      |       2 |
| ABC     |       2 |

---

## Closed Frequent Itemsets

| Itemset | Support |
| ------- | ------: |
| A       |       4 |
| AB      |       3 |
| ABC     |       2 |

---

## Maximal Frequent Itemsets

| Itemset | Support |
| ------- | ------: |
| ABC     |       2 |

---

# Easy Trick to Remember

### Closed Frequent Itemset

Ask:

> **Does any superset have the same support?**

* **Yes** → Not Closed
* **No** → Closed

---

### Maximal Frequent Itemset

Ask:

> **Does any frequent superset exist?**

* **Yes** → Not Maximal
* **No** → Maximal

---

# Difference (Exam Point)

| Closed Frequent Itemset                    | Maximal Frequent Itemset               |
| ------------------------------------------ | -------------------------------------- |
| No super-itemset has the **same support**. | No **frequent super-itemset** exists.  |
| Preserves support information.             | Does not preserve support information. |
| More itemsets.                             | Fewer itemsets.                        |
| Lossless representation.                   | Lossy representation.                  |

---

## References (Uploaded Material)

* **06FPBasic.ppt** – *Closed Patterns and Max-Patterns*, *Mining Frequent Closed Patterns (CLOSET)*, *MaxMiner: Mining Max-Patterns*.

------
---
---
---
---
---
---
---
---

# Entropy and Gini Index Calculation (Step-by-Step Problem)

This is one of the **most important numerical problems** in Decision Tree Induction. Your uploaded material explains **Entropy** and **Information Gain (ID3)**. The **Gini Index** is commonly used with **CART** decision trees.

---

# Problem

Given the following dataset:

| Class     | Number of Records |
| --------- | ----------------: |
| Yes       |                 9 |
| No        |                 5 |
| **Total** |            **14** |

Calculate:

1. **Entropy**
2. **Gini Index**

---

# Part A: Entropy Calculation

## Step 1: What is Entropy?

Entropy measures the **impurity** (or uncertainty) of a dataset.

* Entropy = **0** → Pure dataset (all records belong to one class).
* Higher entropy → More mixed classes.

### Formula

[
Entropy(S)= -\sum p_i\log_2(p_i)
]

For two classes:

[
Entropy(S)=-(P_{Yes}\log_2P_{Yes})-(P_{No}\log_2P_{No})
]

---

## Step 2: Find the Probability of Each Class

### Probability of Yes

[
P(Yes)=\frac{9}{14}
]

[
=0.643
]

---

### Probability of No

[
P(No)=\frac{5}{14}
]

[
=0.357
]

---

## Step 3: Write the Formula

[
Entropy
=======

## -(0.643)\log_2(0.643)

(0.357)\log_2(0.357)
]

---

## Step 4: Find Log Values

Using logarithm values:

[
\log_2(0.643)=-0.637
]

[
\log_2(0.357)=-1.485
]

---

## Step 5: Multiply

### First Term

[
0.643\times(-0.637)
=-0.409
]

---

### Second Term

[
0.357\times(-1.485)
=-0.530
]

---

## Step 6: Add

[
Entropy
=======

-(-0.409)-(-0.530)
]

[
=0.409+0.530
]

[
=0.939
]

Rounded:

[
\boxed{Entropy=0.940}
]

This matches the entropy value shown in the uploaded Decision Tree example.

---

# Part B: Gini Index Calculation

## Step 1: What is Gini Index?

The **Gini Index** measures the impurity of a dataset.

* Gini = **0** → Pure dataset.
* Larger Gini → More impurity.

### Formula

[
\boxed{
Gini(S)=1-\sum P_i^2
}
]

For two classes:

[
Gini
====

1-(P_{Yes})^2-(P_{No})^2
]

---

## Step 2: Find the Probabilities

Already calculated:

[
P(Yes)=0.643
]

[
P(No)=0.357
]

---

## Step 3: Square Each Probability

### Yes

[
0.643^2
=======

0.413
]

---

### No

[
0.357^2
=======

0.127
]

---

## Step 4: Add

[
0.413+0.127
===========

0.540
]

---

## Step 5: Subtract from 1

[
Gini
====

# 1-0.540

0.460
]

---

## Final Answer

[
\boxed{Gini=0.460}
]

---

# Final Results

| Measure    | Value |
| ---------- | ----: |
| Entropy    | 0.940 |
| Gini Index | 0.460 |

---

# Easy Exam Trick

## Entropy

```text
Count Yes and No
       ↓
Find Probability
       ↓
Apply Formula
       ↓
Use log₂ values
       ↓
Answer
```

---

## Gini

```text
Count Yes and No
       ↓
Find Probability
       ↓
Square Each Probability
       ↓
Add
       ↓
Subtract from 1
```

---

# Difference Between Entropy and Gini Index

| Entropy                                  | Gini Index                                            |
| ---------------------------------------- | ----------------------------------------------------- |
| Used in **ID3** and **C4.5** algorithms. | Used in **CART** algorithm.                           |
| Uses logarithms.                         | Does not use logarithms.                              |
| Computationally slower.                  | Computationally faster.                               |
| Range: **0 to 1**.                       | Range: **0 to 0.5** (for two equally likely classes). |

---

# Exam Writing Order

1. Write the given dataset.
2. Calculate the class probabilities.
3. Write the Entropy formula.
4. Substitute the values and compute Entropy.
5. Write the Gini Index formula.
6. Square the probabilities.
7. Compute the Gini Index.
8. Present the final answers in a table.

---

## References (Uploaded Material)

* **08ClassBasic.ppt** – *Brief Review of Entropy*, *Attribute Selection Measure: Information Gain (ID3/C4.5)*, *Decision Tree Induction Example*.

**Note:** In your semester exam, if a **dataset or figure is provided**, the calculation process is exactly the same:

1. Count the **Yes/No** records.
2. Compute **Entropy**.
3. Compute **Gini Index**.
4. If asked, calculate **Information Gain** for each attribute and choose the attribute with the **highest gain** as the root node.
