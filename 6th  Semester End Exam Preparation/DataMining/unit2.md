## Apriori Algorithm


### Definition

The **Apriori algorithm** is a classic algorithm for **mining frequent itemsets** and **association rules** over transactional databases. It identifies the frequent itemsets by using the **Apriori property**, which states that:

> **"All non-empty subsets of a frequent itemset must also be frequent."**

The algorithm uses a **candidate generation-and-test approach**. It first finds frequent 1-itemsets, then uses them to generate frequent 2-itemsets, followed by frequent 3-itemsets, and so on, until no more frequent itemsets can be generated.

---

## Apriori Algorithm

**Input:**

* Transaction database (D)
* Minimum support threshold (min_sup)

**Output:**

* All frequent itemsets

### Algorithm

1. Find all **frequent 1-itemsets (L₁)** by scanning the transaction database.
2. Generate **candidate 2-itemsets (C₂)** from the frequent 1-itemsets.
3. Scan the database and count the support of each candidate itemset.
4. Eliminate candidate itemsets whose support is less than the minimum support threshold to obtain **frequent 2-itemsets (L₂)**.
5. Generate candidate 3-itemsets (C₃) from L₂ using the **Apriori property**.
6. Repeat the process of candidate generation, support counting, and pruning until no new frequent itemsets are generated.
7. Use the frequent itemsets to generate **association rules** satisfying the minimum confidence threshold.

---

## Advantages of Apriori Algorithm

1. **Simple and easy to understand** and implement.
2. Uses the **Apriori property** to prune infrequent itemsets, reducing the search space.
3. Generates all frequent itemsets and association rules.
4. Suitable for **market basket analysis** and transactional databases.
5. Produces complete and accurate frequent itemsets.

---

## Disadvantages of Apriori Algorithm

1. **Requires multiple scans** of the database, increasing execution time.
2. Generates a **large number of candidate itemsets**, leading to high computational cost.
3. Performance decreases for large databases with many frequent itemsets.
4. Requires large memory to store candidate itemsets.
5. Not efficient for dense datasets or datasets with low minimum support.

---

## Applications of Apriori Algorithm

1. **Market Basket Analysis**

   * Identifies products frequently purchased together.

2. **Retail Business**

   * Helps in product placement, promotions, and cross-selling.

3. **Recommendation Systems**

   * Recommends products based on previous purchases.

4. **Web Usage Mining**

   * Discovers frequently visited web pages and user navigation patterns.

5. **Medical Diagnosis**

   * Finds associations among symptoms, diseases, and treatments.

6. **Fraud Detection**

   * Detects unusual patterns in financial transactions.

7. **Telecommunication**

   * Analyzes customer usage patterns and service combinations.

8. **Bioinformatics**

   * Discovers associations among genes, proteins, and biological data.

---

### 5-Mark Answer

**Apriori Algorithm:** Apriori is a frequent itemset mining algorithm that uses the **Apriori property** to discover frequent itemsets and generate association rules. It employs a **candidate generation-and-test approach**, repeatedly scanning the transaction database and pruning infrequent itemsets until all frequent itemsets are obtained.

**Advantages:**

* Simple and easy to implement.
* Efficient pruning using the Apriori property.
* Generates all frequent itemsets.
* Suitable for market basket analysis.
* Produces accurate association rules.

**Disadvantages:**

* Requires multiple database scans.
* Generates a large number of candidate itemsets.
* High computational and memory requirements.
* Slow for large or dense datasets.
* Performance decreases with low minimum support.

**Applications:**

* Market basket analysis.
* Retail sales analysis.
* Recommendation systems.
* Web usage mining.
* Medical diagnosis.
* Fraud detection.
* Telecommunication analysis.
* Bioinformatics.



## Apriori Algorithm Steps

1. Scan the database once to find all **frequent 1-itemsets (L₁)**.
2. Generate **candidate (k+1)-itemsets (Cₖ₊₁)** from the frequent **k-itemsets (Lₖ)**.
3. Scan the database and count the support of each candidate.
4. Remove candidates whose support is less than the minimum support.
5. Repeat Steps 2–4 until no new frequent itemsets are generated. 

---

## Apriori Property (Pruning Principle)

If an itemset is **not frequent**, then **none of its supersets can be frequent**.

**Example:**

If **{A, D}** is infrequent, then

* {A, D, B}
* {A, D, C}
* {A, D, B, C}

are also infrequent and need not be generated. 

---

# Solved Example (from the uploaded material)

### Transaction Database

| TID | Items      |
| --- | ---------- |
| 10  | A, C, D    |
| 20  | B, C, E    |
| 30  | A, B, C, E |
| 40  | B, E       |

**Minimum Support = 2** 

---

## Step 1: Find Candidate 1-itemsets (C₁)

| Item | Support |
| ---- | ------: |
| A    |       2 |
| B    |       3 |
| C    |       3 |
| D    |       1 |
| E    |       3 |

---

## Step 2: Frequent 1-itemsets (L₁)

Items with support ≥ 2:

| Item | Support |
| ---- | ------: |
| A    |       2 |
| B    |       3 |
| C    |       3 |
| E    |       3 |

**D is removed** because its support is only 1. 

---

## Step 3: Generate Candidate 2-itemsets (C₂)

* {A, B}
* {A, C}
* {A, E}
* {B, C}
* {B, E}
* {C, E}

---

## Step 4: Count Support

| Itemset | Support |
| ------- | ------: |
| {A, B}  |       1 |
| {A, C}  |       2 |
| {A, E}  |       1 |
| {B, C}  |       2 |
| {B, E}  |       3 |
| {C, E}  |       2 |



---

## Step 5: Frequent 2-itemsets (L₂)

Remove itemsets with support < 2.

| Frequent Itemset | Support |
| ---------------- | ------: |
| {A, C}           |       2 |
| {B, C}           |       2 |
| {B, E}           |       3 |
| {C, E}           |       2 |

---

## Step 6: Generate Candidate 3-itemsets (C₃)

Only one valid candidate is generated:

**{B, C, E}**

---

## Step 7: Count Support

| Itemset   | Support |
| --------- | ------: |
| {B, C, E} |       2 |

Since support ≥ 2, it is frequent. 

---

## Final Frequent Itemsets

### Frequent 1-itemsets

* {A}
* {B}
* {C}
* {E}

### Frequent 2-itemsets

* {A, C}
* {B, C}
* {B, E}
* {C, E}

### Frequent 3-itemsets

* {B, C, E}

No larger frequent itemsets can be generated. 

---

# Advantages

* Simple and easy to understand.
* Uses the **downward closure (Apriori) property** to prune infrequent itemsets.
* Efficient for small and medium-sized datasets.

---

# Limitations

* Requires **multiple scans** of the transaction database.
* Generates a **large number of candidate itemsets**.
* Support counting can become computationally expensive. The uploaded material lists these as the major computational challenges and motivates improvements such as partitioning, hashing (DHP), sampling, and DIC. 

---


---


---


----

# FP-Growth Algorithm

## Definition

The **FP-Growth (Frequent Pattern Growth) algorithm** is an efficient method for mining **frequent itemsets** without generating candidate itemsets. It compresses the transaction database into a compact data structure called the **Frequent Pattern Tree (FP-Tree)** and extracts frequent patterns directly from the tree.

Unlike the Apriori algorithm, **FP-Growth does not repeatedly scan the database or generate candidate itemsets**, making it much faster for large datasets.

---

# FP-Growth Algorithm

**Input:**

* Transaction database (D)
* Minimum support threshold (min_sup)

**Output:**

* All frequent itemsets.

## Algorithm

1. **Scan the transaction database once** to determine the support count of each item.
2. **Remove infrequent items** whose support is less than the minimum support threshold.
3. **Sort the remaining frequent items** in descending order of their support.
4. **Construct the FP-Tree** by scanning the database again and inserting the ordered frequent items into the tree.
5. **Generate conditional pattern bases** for each frequent item.
6. **Construct conditional FP-Trees** from the conditional pattern bases.
7. **Recursively mine the conditional FP-Trees** to discover all frequent itemsets.
8. Continue the process until all frequent patterns have been generated.

---

# Advantages of FP-Growth Algorithm

1. **Does not generate candidate itemsets**, thereby reducing computational overhead.
2. **Requires only two scans** of the transaction database.
3. **Faster than the Apriori algorithm**, especially for large datasets.
4. **Uses an FP-Tree**, which compresses the database and saves memory.
5. **Efficient for dense datasets** containing many frequent itemsets.
6. **Reduces execution time** by avoiding repeated database scans.

---

# Disadvantages of FP-Growth Algorithm

1. **Construction of the FP-Tree can be complex** for beginners.
2. **Consumes large memory** if the FP-Tree becomes very large.
3. **Difficult to parallelize** because of its recursive tree structure.
4. **Performance decreases** when the dataset contains very few common frequent items.
5. **Implementation is more complicated** than the Apriori algorithm.

---

# Applications of FP-Growth Algorithm

1. **Market Basket Analysis**

   * Discovers products frequently purchased together.

2. **Recommendation Systems**

   * Recommends products, movies, or services based on user purchase patterns.

3. **Retail Sales Analysis**

   * Helps retailers identify purchasing trends and optimize product placement.

4. **Web Usage Mining**

   * Discovers frequently accessed web pages and navigation patterns.

5. **Medical Diagnosis**

   * Identifies relationships among diseases, symptoms, and treatments.

6. **Fraud Detection**

   * Detects unusual transaction patterns in banking and finance.

7. **Bioinformatics**

   * Finds frequent patterns in DNA sequences and protein structures.

8. **Telecommunication**

   * Analyzes customer calling and service usage patterns.

---

## 5-Mark Answer

**FP-Growth Algorithm:** FP-Growth is a frequent pattern mining algorithm that discovers frequent itemsets **without generating candidate itemsets**. It compresses the transaction database into an **FP-Tree** and recursively mines the tree to generate all frequent patterns.

**Advantages:**

* Does not generate candidate itemsets.
* Requires only two database scans.
* Faster than Apriori.
* Uses an FP-Tree for database compression.
* Efficient for large and dense datasets.
* Reduces execution time.

**Disadvantages:**

* FP-Tree construction is complex.
* High memory usage for very large datasets.
* Difficult to parallelize.
* Less efficient when frequent items are few.
* More difficult to implement than Apriori.

**Applications:**

* Market basket analysis.
* Recommendation systems.
* Retail sales analysis.
* Web usage mining.
* Medical diagnosis.
* Fraud detection.
* Bioinformatics.
* Telecommunication analysis.


# Explain the FP-Growth Algorithm with a Problem

## FP-Growth Algorithm

### Definition

**FP-Growth (Frequent Pattern Growth)** is a **frequent pattern mining algorithm** that finds frequent itemsets **without generating candidate itemsets**. It compresses the transaction database into an **FP-tree (Frequent Pattern Tree)** and mines frequent patterns directly from this tree. 

---

# Basic Idea

The uploaded material states that FP-Growth avoids the bottlenecks of Apriori by:

* Avoiding explicit candidate generation.
* Using a **depth-first search**.
* Growing long frequent patterns from short ones using **local frequent items**.
* Projecting the database and recursively mining conditional FP-trees.

---

# FP-Growth Algorithm Steps

### Step 1: Scan the database once

* Find all **frequent 1-itemsets**.
* Remove infrequent items.

### Step 2: Sort frequent items

* Arrange items in **descending order of support** to create the **F-list**.

### Step 3: Construct the FP-tree

* Scan the database again.
* Insert ordered frequent items into the FP-tree.
* Share common prefixes to compress the database.

### Step 4: Mine the FP-tree

For each frequent item:

1. Construct its **conditional pattern base**.
2. Build the **conditional FP-tree**.
3. Recursively repeat until:

   * the FP-tree becomes empty, or
   * it contains only one path, in which case all combinations of the path are frequent patterns.

---

# Solved Problem (from the uploaded material)

### Minimum Support = 3

### Transaction Database

| TID | Original Items    | Ordered Frequent Items |
| --- | ----------------- | ---------------------- |
| 100 | {f,a,c,d,g,i,m,p} | {f,c,a,m,p}            |
| 200 | {a,b,c,f,l,m,o}   | {f,c,a,b,m}            |
| 300 | {b,f,h,j,o,w}     | {f,b}                  |
| 400 | {b,c,k,s,p}       | {c,b,p}                |
| 500 | {a,f,c,e,l,p,m,n} | {f,c,a,m,p}            |



---

## Step 1: Frequent 1-itemsets

After the first scan:

| Item | Support |
| ---- | ------: |
| f    |       4 |
| c    |       4 |
| a    |       3 |
| b    |       3 |
| m    |       3 |
| p    |       3 |

---

## Step 2: F-list

Arrange items by descending support:

**F-list =**

> **f → c → a → b → m → p**



---

## Step 3: Build the FP-Tree

Insert each ordered transaction into the FP-tree.

### Transaction 100

```
{}
└── f:1
     └── c:1
          └── a:1
               └── m:1
                    └── p:1
```

---

### Transaction 200

Common prefix **f → c → a** already exists.

```
{}
└── f:2
     └── c:2
          └── a:2
               ├── m:1
               │    └── p:1
               └── b:1
                    └── m:1
```

---

### Transaction 300

```
{}
└── f:3
     ├── c:2
     │    └── a:2
     │         ├── m:1
     │         │    └── p:1
     │         └── b:1
     │              └── m:1
     └── b:1
```

---

### Transaction 400

Starts with **c**.

```
{}
├── f:3
│    ├── c:2
│    │     └── a:2
│    └── b:1
└── c:1
      └── b:1
            └── p:1
```

---

### Transaction 500

Shares the prefix **f → c → a → m → p**, increasing the counts.

Final FP-tree (conceptually):

```
{}
├── f:4
│    ├── c:3
│    │     └── a:3
│    │           ├── m:2
│    │           │      └── p:2
│    │           └── b:1
│    │                  └── m:1
│    └── b:1
└── c:1
      └── b:1
             └── p:1
```

This matches the FP-tree construction shown in the uploaded material. 

---

## Step 4: Mine the FP-tree

For each frequent item:

* Construct the **conditional pattern base**.
* Build the **conditional FP-tree**.
* Recursively mine the tree.

The uploaded material illustrates examples such as:

* Conditional pattern base of **am**
* Conditional pattern base of **cm**
* Conditional FP-trees for these patterns

and shows that the recursion continues until the tree is empty or contains a single path. 

---

# Advantages of FP-Growth

According to the uploaded material:

* No candidate generation.
* No candidate testing.
* Compressed database using an FP-tree.
* No repeated scans of the entire database.
* Faster than Apriori for large datasets because it uses divide-and-conquer and local frequent items.

---

# Disadvantages

* FP-tree construction can become complex for implementation.
* If the FP-tree does not fit into memory, database projection techniques are required (parallel or partition projection). 

---

# Final Frequent Items (from the example)

The frequent items obtained are:

* **f**
* **c**
* **a**
* **b**
* **m**
* **p**

These items are used to construct the FP-tree and recursively mine all frequent patterns.

---

## References (Uploaded Material)

* **06FPBasic.ppt** – *Construct FP-tree from a Transaction Database*, *Frequent Pattern Growth Mining Method*, *Conditional FP-tree*, *Advantages of FP-Growth*, *Database Projection*.
---


---


---

---
---

---
---
---
---
---
---
---
---
---
---

# What is Frequent Itemset Generation?

## Definition

**Frequent Itemset Generation** is the process of **finding all itemsets whose support is greater than or equal to a user-specified minimum support (min_sup)** from a transaction database. These frequent itemsets are then used to generate association rules.

---

# Explanation

A **frequent itemset** is a set of items that appears together in the transaction database **frequently**, i.e., its support satisfies the minimum support threshold.

The objective of frequent itemset generation is to discover these frequent combinations of items efficiently. The uploaded material presents three major scalable mining approaches for this task:

1. **Apriori** – Candidate Generation and Test approach.
2. **FP-Growth** – Pattern Growth approach (without candidate generation).
3. **ECLAT** – Vertical data format approach.

---

# Downward Closure Property

Frequent itemset generation is based on the **downward closure property**:

> **Any subset of a frequent itemset must also be frequent.**

**Example:**

If **{beer, diaper, nuts}** is frequent, then:

* {beer, diaper}
* {beer, nuts}
* {diaper, nuts}

must also be frequent because every transaction containing `{beer, diaper, nuts}` also contains each of its subsets. 

---

# Methods Used for Frequent Itemset Generation

According to the uploaded material, the main methods are:

* **Apriori** (Candidate Generation & Test)
* **FP-Growth** (Pattern Growth)
* **ECLAT** (Vertical Data Format)

---

# General Steps

1. Scan the transaction database.
2. Find frequent 1-itemsets.
3. Generate larger candidate itemsets (or grow patterns directly in FP-Growth).
4. Count their support.
5. Remove itemsets whose support is below the minimum support.
6. Repeat until no more frequent itemsets are found. 

---

# Example

Suppose the transaction database is:

| TID | Items   |
| --- | ------- |
| T1  | A, B, C |
| T2  | A, C    |
| T3  | B, C    |
| T4  | A, B, C |

Minimum Support = **2**

The frequent itemsets are:

### Frequent 1-itemsets

* {A}
* {B}
* {C}

### Frequent 2-itemsets

* {A, B}
* {A, C}
* {B, C}

### Frequent 3-itemsets

* {A, B, C}

These frequent itemsets can then be used to generate association rules.

---

# Advantages

* Finds frequently occurring patterns in large databases.
* Forms the basis for association rule mining.
* Supports applications such as market basket analysis, recommendation systems, and customer behavior analysis.

---

## References (Uploaded Material)

* **04Mining Frequent Patterns.ppt** – *Chapter 5: Mining Frequent Patterns*, *Scalable Frequent Itemset Mining Methods*, *Downward Closure Property*, *Apriori: Candidate Generation & Test Approach*, *Summary*.

---


---


---

---
---

---
---
---
---
---
---
---
---
---
---
# Differentiate between Maximal Frequent Itemsets and Closed Frequent Itemsets. Solve a Related Problem.

## Definitions

### Closed Frequent Itemset

A **closed frequent itemset** is a **frequent itemset** for which **no proper superset has the same support**.

* It preserves the complete support information.
* It is a **lossless compression** of frequent patterns.

---

### Maximal Frequent Itemset

A **maximal frequent itemset (max-pattern)** is a **frequent itemset** for which **no frequent superset exists**.

* It is the largest frequent itemset.
* It reduces the number of patterns but does **not preserve exact support information** for all subsets.

---

# Difference between Closed Frequent Itemsets and Maximal Frequent Itemsets

| Closed Frequent Itemset                                          | Maximal Frequent Itemset                          |
| ---------------------------------------------------------------- | ------------------------------------------------- |
| No super-itemset has the **same support**.                       | No **frequent super-itemset** exists.             |
| Preserves support information.                                   | Does not preserve support information of subsets. |
| Lossless compression of frequent patterns.                       | Lossy compression of frequent patterns.           |
| Number of patterns is greater than or equal to maximal patterns. | Number of patterns is the smallest.               |
| Used when support values are important.                          | Used to reduce the number of patterns.            |

**Reference:** *Closed Patterns and Max-Patterns*

---

# Solved Problem

## Given

**Database**

| Transaction ID | Items   |
| -------------- | ------- |
| T1             | A, B, C |
| T2             | A, B    |
| T3             | A, B, C |
| T4             | A       |

**Minimum Support = 2**

---

## Step 1: Find Frequent Itemsets

| Itemset | Support |
| ------- | ------: |
| {A}     |       4 |
| {B}     |       3 |
| {C}     |       2 |
| {A,B}   |       3 |
| {A,C}   |       2 |
| {B,C}   |       2 |
| {A,B,C} |       2 |

---

## Step 2: Find Closed Frequent Itemsets

Check whether any **superset has the same support**.

* **{A} (4)** → No superset has support 4 → **Closed**
* **{B} (3)** → {A,B} also has support 3 → **Not Closed**
* **{C} (2)** → {A,C}, {B,C}, and {A,B,C} also have support 2 → **Not Closed**
* **{A,B} (3)** → {A,B,C} has support 2 (different) → **Closed**
* **{A,C} (2)** → {A,B,C} has support 2 (same) → **Not Closed**
* **{B,C} (2)** → {A,B,C} has support 2 (same) → **Not Closed**
* **{A,B,C} (2)** → No superset exists → **Closed**

### Closed Frequent Itemsets

* {A}
* {A,B}
* {A,B,C}

---

## Step 3: Find Maximal Frequent Itemsets

A maximal frequent itemset has **no frequent superset**.

* {A} → Frequent superset exists ({A,B}) → Not maximal.
* {A,B} → Frequent superset exists ({A,B,C}) → Not maximal.
* {A,B,C} → No frequent superset exists → **Maximal**.

### Maximal Frequent Itemsets

* **{A,B,C}**

---

# Final Answer

### Closed Frequent Itemsets

* {A}
* {A,B}
* {A,B,C}

### Maximal Frequent Itemsets

* {A,B,C}

---

## Key Points for Exams

* **Closed Frequent Itemset:** No super-itemset has the **same support**.
* **Maximal Frequent Itemset:** No **frequent super-itemset** exists.
* Every **maximal frequent itemset is closed**, but **not every closed frequent itemset is maximal**.

### References (Uploaded Material)

* **06FPBasic.ppt** – *Closed Patterns and Max-Patterns*, *Mining Frequent Closed Patterns (CLOSET)*, *MaxMiner: Mining Max-Patterns*.


---


---


---

---
---

---
---
---
---
---
---
---
---
---
---

# Explain the Compact Representation of Frequent Itemsets

## Definition

A **Compact Representation of Frequent Itemsets** is a technique used to **reduce the number of frequent itemsets** while preserving useful information. Instead of storing all frequent itemsets, only **Closed Frequent Itemsets** or **Maximal Frequent Itemsets (Max-Patterns)** are stored because a long frequent pattern contains a very large number of sub-patterns.

---

# Need for Compact Representation

A long frequent pattern contains a **combinatorial number of sub-patterns**.

For example,

* An itemset **{a₁, a₂, …, a₁₀₀}** contains

[
2^{100}-1
]

possible non-empty sub-patterns.

Mining and storing all these patterns requires large memory and high computation. Therefore, a compact representation is used to reduce the number of patterns. 

---

# Types of Compact Representation

The uploaded material describes two compact representations.

## 1. Closed Frequent Itemsets

A **closed frequent itemset** is a **frequent itemset** for which **no proper super-itemset has the same support**.

### Characteristics

* Preserves complete support information.
* It is a **lossless compression** of frequent patterns.
* Used when exact support values are required.

---

## 2. Maximal Frequent Itemsets (Max-Patterns)

A **maximal frequent itemset** is a **frequent itemset** for which **no frequent super-itemset exists**.

### Characteristics

* Represents only the largest frequent patterns.
* Produces fewer patterns than closed frequent itemsets.
* Does not preserve the exact support of all subsets (lossy compression).

---

# Comparison

| Closed Frequent Itemsets               | Maximal Frequent Itemsets              |
| -------------------------------------- | -------------------------------------- |
| No super-itemset has the same support. | No frequent super-itemset exists.      |
| Lossless compression.                  | Lossy compression.                     |
| Preserves support information.         | Does not preserve support information. |
| More patterns than maximal patterns.   | Fewer patterns.                        |

---

# Advantages of Compact Representation

* Reduces the number of frequent patterns.
* Saves storage space.
* Improves mining efficiency.
* Reduces the number of association rules generated.
* Makes frequent pattern mining more scalable.

---

# Summary

The compact representation of frequent itemsets reduces the large number of frequent patterns by storing only **Closed Frequent Itemsets** or **Maximal Frequent Itemsets**. **Closed frequent itemsets** preserve all support information (lossless), whereas **maximal frequent itemsets** store only the largest frequent patterns and provide a smaller but lossy representation.

---

## References (Uploaded Material)

* **06FPBasic.ppt** – *Closed Patterns and Max-Patterns*, *Computational Complexity of Frequent Itemset Mining*. 
* **04Mining Frequent Patterns.ppt** – *Mining Frequent Closed Patterns (CLOSET)*, *MaxMiner: Mining Max-Patterns*. 


---
---
---
---
---
---
---
---
---
---

# Explain the Calculation of Support and Confidence and How These Measures Are Used to Find the Best Association Rules

## Association Rule

An **association rule** is an implication of the form:

[
X \rightarrow Y
]

where **X** and **Y** are itemsets, and **X ∩ Y = ∅**.

To evaluate the strength of an association rule, two important measures are used:

1. **Support**
2. **Confidence** 

---

# 1. Support

### Definition

**Support** measures **how frequently an itemset appears in the transaction database**.

### Formula

[
\text{Support}(X \rightarrow Y)=\frac{\text{Number of transactions containing }(X \cup Y)}{\text{Total number of transactions}}
]

It indicates how common the rule is in the database. 

---

# 2. Confidence

### Definition

**Confidence** measures **how often items in Y appear in transactions that already contain X**.

It indicates the reliability or accuracy of the association rule.

### Formula

[
\text{Confidence}(X \rightarrow Y)=\frac{\text{Support}(X \cup Y)}{\text{Support}(X)}
]

or

[
\text{Confidence}(X \rightarrow Y)=P(Y|X)
]



---

# Solved Example

## Transaction Database

| Transaction | Items               |
| ----------- | ------------------- |
| T1          | Milk, Bread         |
| T2          | Milk, Bread, Butter |
| T3          | Milk, Butter        |
| T4          | Bread, Butter       |
| T5          | Milk, Bread         |

Find **Support** and **Confidence** for the rule:

**Milk → Bread**

---

### Step 1: Total Transactions

Total transactions = **5**

---

### Step 2: Transactions Containing Milk and Bread

* T1
* T2
* T5

Number of transactions = **3**

---

### Step 3: Calculate Support

[
\text{Support}=\frac{3}{5}=0.6
]

**Support = 60%**

---

### Step 4: Transactions Containing Milk

* T1
* T2
* T3
* T5

Number of transactions = **4**

---

### Step 5: Calculate Confidence

[
\text{Confidence}=\frac{3}{4}=0.75
]

**Confidence = 75%**

---

# Final Result

* **Support (Milk → Bread) = 60%**
* **Confidence (Milk → Bread) = 75%**

---

# How Support and Confidence Help Find the Best Association Rules

The uploaded material explains that the **support-confidence framework** is the basic method for evaluating association rules. A rule is considered interesting when it satisfies the user-defined thresholds for both measures. 

### Support

* Measures how frequently the rule occurs in the database.
* Rules with **low support** are usually ignored because they occur very rarely.

### Confidence

* Measures the reliability of the rule.
* A **high confidence** value indicates that when **X** occurs, **Y** is also likely to occur.

### Best Association Rule

A good association rule should have:

* **High Support** (occurs frequently).
* **High Confidence** (is reliable).

Only rules satisfying the **minimum support** and **minimum confidence** thresholds are selected as strong association rules. 

---

# Advantages

* Identifies strong relationships among items.
* Helps generate reliable association rules.
* Widely used in market basket analysis, recommendation systems, and customer purchasing pattern analysis. 

---

## References (Uploaded Material)

* **04Mining Frequent Patterns.ppt** – *Chapter 5: Mining Frequent Patterns, Association and Correlations: Basic Concepts and Methods*, *Summary (support-confidence framework)*. 

