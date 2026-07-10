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


# Explain the Apriori Algorithm with an Example and Solve a Problem

## Apriori Algorithm

**Definition**

The **Apriori algorithm** is a **candidate generation and test approach** used to find **frequent itemsets** in a transaction database.

It is based on the **Apriori pruning principle**:

> **If an itemset is infrequent, then all of its supersets are also infrequent.** Therefore, such supersets are **not generated or tested**. 

---

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

### References (Uploaded Material)

* **06FPBasic.ppt** – *Apriori: A Candidate Generation & Test Approach*, *The Apriori Algorithm—An Example*, *The Apriori Algorithm (Pseudo-Code)*, *Further Improvement of the Apriori Method*.
