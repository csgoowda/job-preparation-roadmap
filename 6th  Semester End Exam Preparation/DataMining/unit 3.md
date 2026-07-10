# Decision Tree Induction

## Definition

**Decision Tree Induction** is a supervised learning method used for **classification**. It constructs a decision tree from a set of **class-labeled training data** by recursively selecting the attribute that best splits the data. The resulting model is then used to classify new or unseen data. 

---

# What is a Decision Tree?

A **Decision Tree** is a tree-like structure in which:

* **Root Node** → Represents the best attribute selected for splitting.
* **Internal Node** → Represents a test on an attribute.
* **Branch** → Represents the outcome of the test.
* **Leaf Node** → Represents the class label (Yes/No, Positive/Negative, etc.).

---

# Decision Tree Induction Algorithm

The uploaded material describes the basic decision tree induction as a **greedy, top-down recursive divide-and-conquer algorithm**.

### Algorithm

**Input:**

* Training dataset **D**
* Attribute list

**Output:**

* Decision Tree

### Steps

**Step 1:** Place all training tuples at the **root node**.

**Step 2:** If all tuples belong to the **same class**, create a **leaf node** and stop.

**Step 3:** If there are **no remaining attributes**, assign the **majority class** and stop.

**Step 4:** Select the **best attribute** using an attribute selection measure (usually **Information Gain**).

**Step 5:** Split the dataset according to the selected attribute.

**Step 6:** Repeat the same process recursively for every partition.

**Step 7:** Continue until:

* all tuples belong to one class,
* no attribute remains, or
* no tuples remain. 

---

# Decision Tree Algorithm (Pseudo Code)

```
DecisionTree(D)

1. Create a root node.
2. If all tuples belong to the same class,
      return Leaf(Class)
3. If attribute list is empty,
      return Leaf(Majority Class)
4. Select the attribute with the highest Information Gain.
5. Split the dataset based on that attribute.
6. For each partition,
      recursively build the decision tree.
7. Return the completed tree.
```

This follows the algorithm described in your uploaded slides. 

---

# Attribute Selection Measure

The uploaded material states that **Information Gain (ID3/C4.5)** is used to choose the best attribute.

The attribute with the **highest Information Gain** becomes the root node. 

---

# Entropy Formula

For a dataset **D**,

[
Entropy(D)= -\sum_{i=1}^{m} p_i \log_2 p_i
]

where

* (p_i) = probability of class (i)
* (m) = number of classes



---

# Information Gain Formula

[
Gain(A)=Entropy(D)-Entropy_A(D)
]

Choose the attribute having the **highest Information Gain**. 

---

# Advantages

According to the uploaded material:

* Simple to understand.
* Fast learning speed.
* Can be converted into classification rules.
* Comparable accuracy with other classification methods.
* Can use SQL queries for database access. 

---

# Stopping Conditions

Tree construction stops when:

* All samples belong to the same class.
* No more attributes are available.
* No samples remain. 

---

# Resulting Decision Tree (Example in Uploaded Material)

The slides use the **Buys_Computer** dataset and produce the following decision tree:

```
                Age
           /      |      \
       <=30     31-40     >40
        |          |         |
    Student?      Yes   Credit Rating?
     /    \                  /      \
   No     Yes            Fair    Excellent
   No      Yes            Yes       No
```

This is the final decision tree shown in your uploaded material.

---

## References (Uploaded Material)

* **08ClassBasic.ppt** – *Decision Tree Induction: An Example*, *Algorithm for Decision Tree Induction*, *Information Gain (ID3/C4.5)*, *Brief Review of Entropy*.

**Next (Part 2):** I can solve the **Decision Tree Information Gain problem step by step** (entropy → information gain → root node → complete tree) exactly in the style typically asked in exams.


# Part 2 – Decision Tree Problem (Step by Step)

This is the standard **Buy_Computer** example used in your uploaded material for explaining **Decision Tree Induction using Information Gain (ID3)**.

---

# Step 1: Training Dataset

| ID |  Age  | Income | Student | Credit Rating | Buys Computer |
| -: | :---: | :----: | :-----: | :-----------: | :-----------: |
|  1 |  <=30 |  High  |    No   |      Fair     |       No      |
|  2 |  <=30 |  High  |    No   |   Excellent   |       No      |
|  3 | 31–40 |  High  |    No   |      Fair     |      Yes      |
|  4 |  >40  | Medium |    No   |      Fair     |      Yes      |
|  5 |  >40  |   Low  |   Yes   |      Fair     |      Yes      |
|  6 |  >40  |   Low  |   Yes   |   Excellent   |       No      |
|  7 | 31–40 |   Low  |   Yes   |   Excellent   |      Yes      |
|  8 |  <=30 | Medium |    No   |      Fair     |       No      |
|  9 |  <=30 |   Low  |   Yes   |      Fair     |      Yes      |
| 10 |  >40  | Medium |   Yes   |      Fair     |      Yes      |
| 11 |  <=30 | Medium |   Yes   |   Excellent   |      Yes      |
| 12 | 31–40 | Medium |    No   |   Excellent   |      Yes      |
| 13 | 31–40 |  High  |   Yes   |      Fair     |      Yes      |
| 14 |  >40  | Medium |    No   |   Excellent   |       No      |

*(This is the dataset used in the Decision Tree example in your uploaded material.)*

---

# Step 2: Count Class Labels

| Class | Count |
| ----- | ----: |
| Yes   |     9 |
| No    |     5 |
| Total |    14 |

---

# Step 3: Calculate Entropy of Dataset

[
Entropy(D)=-(9/14)\log_2(9/14)-(5/14)\log_2(5/14)
]

[
Entropy(D)=0.940
]

---

# Step 4: Information Gain for Age

### Age ≤30

| Yes | No | Total |
| --: | -: | ----: |
|   2 |  3 |     5 |

Entropy = **0.971**

---

### Age 31–40

| Yes | No | Total |
| --: | -: | ----: |
|   4 |  0 |     4 |

Entropy = **0**

---

### Age >40

| Yes | No | Total |
| --: | -: | ----: |
|   3 |  2 |     5 |

Entropy = **0.971**

---

### Weighted Entropy

| Age Group | Weight | Entropy | Weight × Entropy |
| --------- | ------ | ------- | ---------------: |
| ≤30       | 5/14   | 0.971   |            0.347 |
| 31–40     | 4/14   | 0       |            0.000 |
| >40       | 5/14   | 0.971   |            0.347 |

Total Entropy after split:

[
0.347+0+0.347=0.694
]

### Information Gain

[
Gain(Age)=0.940-0.694
]

[
\boxed{Gain(Age)=0.246}
]



---

# Step 5: Information Gain of Remaining Attributes

| Attribute     | Information Gain |
| ------------- | ---------------: |
| Age           |        **0.246** |
| Income        |            0.029 |
| Student       |            0.151 |
| Credit Rating |            0.048 |

Since **Age has the highest Information Gain**, it is selected as the **root node**. 

---

# Step 6: Split the Tree

```
              Age
        /       |       \
     <=30    31-40      >40
```

---

# Step 7: Solve Branch "Age = 31–40"

| Yes | No |
| --: | -: |
|   4 |  0 |

All belong to **Yes**.

```
31–40 → YES
```

---

# Step 8: Solve Branch "Age ≤30"

| Student | Yes | No |
| ------- | --: | -: |
| Yes     |   2 |  0 |
| No      |   0 |  3 |

Student perfectly classifies the data.

```
Age ≤30
      |
   Student
   /      \
 Yes       No
 |          |
Yes        No
```

---

# Step 9: Solve Branch "Age >40"

| Credit Rating | Yes | No |
| ------------- | --: | -: |
| Fair          |   3 |  0 |
| Excellent     |   0 |  2 |

Credit Rating perfectly classifies the data.

```
Age >40
      |
Credit Rating
   /          \
Fair      Excellent
 |             |
Yes            No
```

---

# Final Decision Tree

```text
                 Age
            /      |      \
        <=30     31–40      >40
          |         |          |
      Student      Yes   Credit Rating
      /     \              /        \
    Yes      No        Fair     Excellent
     |        |          |           |
    Yes      No         Yes         No
```

This is the final decision tree shown in the uploaded material.

---

# Final Classification Rules

| Rule                                     | Decision               |
| ---------------------------------------- | ---------------------- |
| IF Age = 31–40                           | Buy Computer = **Yes** |
| IF Age ≤30 AND Student = Yes             | Buy Computer = **Yes** |
| IF Age ≤30 AND Student = No              | Buy Computer = **No**  |
| IF Age >40 AND Credit Rating = Fair      | Buy Computer = **Yes** |
| IF Age >40 AND Credit Rating = Excellent | Buy Computer = **No**  |

---

## Exam Tip

In numerical questions, always follow this order:

1. Write the dataset.
2. Calculate **Entropy(D)**.
3. Compute **Information Gain** for each attribute.
4. Select the attribute with the **highest Information Gain** as the root.
5. Repeat the process for each branch.
6. Draw the final decision tree.
7. Write the classification rules.

### References (Uploaded Material)

* **08ClassBasic.ppt** – *Decision Tree Induction: An Example*, *Algorithm for Decision Tree Induction*, *Information Gain (ID3/C4.5)*, *Attribute Selection: Information Gain*.


# Explain the K-Nearest Neighbour (KNN) Algorithm with Problem

## Definition

**K-Nearest Neighbour (KNN)** is a **lazy learning** and **instance-based learning** classification algorithm. It stores all the training data and delays processing until a new (unknown) tuple is given for classification. 

---

# Basic Idea

The uploaded material explains that:

* Every training instance is represented as a **point in an n-dimensional space**.
* The **nearest neighbours** are determined using **Euclidean distance**.
* For **discrete class labels**, the unknown tuple is assigned the **most common class** among its **k nearest neighbours**.
* For **real-valued prediction**, the output is the **mean value** of the k nearest neighbours.

---

# KNN Algorithm

### Input

* Training dataset
* Unknown tuple (x_q)
* Value of **k**

### Output

* Predicted class of (x_q)

### Algorithm

**Step 1:** Store all training tuples.

**Step 2:** Choose the value of **k**.

**Step 3:** Calculate the **Euclidean distance** between the unknown tuple and every training tuple.

**Step 4:** Arrange the distances in ascending order.

**Step 5:** Select the **k nearest neighbours**.

**Step 6:** Count the class labels of these neighbours.

**Step 7:** Assign the majority class to the unknown tuple. 

---

# Euclidean Distance Formula

For two points

[
P(x_1,y_1),;Q(x_2,y_2)
]

[
\boxed{d=\sqrt{(x_2-x_1)^2+(y_2-y_1)^2}}
]

The uploaded material states that neighbours are defined in terms of **Euclidean distance**. 

---

# Solved Problem

### Given Training Data

| Point |  X |  Y | Class |
| ----- | -: | -: | :---- |
| A     |  1 |  1 | Yes   |
| B     |  2 |  2 | Yes   |
| C     |  3 |  3 | No    |
| D     |  6 |  5 | No    |
| E     |  7 |  7 | No    |

Unknown point:

[
Q=(3,2)
]

Choose

[
k=3
]

---

## Step 1: Calculate Euclidean Distance

### Distance from A

[
\sqrt{(3-1)^2+(2-1)^2}
=\sqrt{4+1}
=\sqrt5
=2.236
]

---

### Distance from B

[
\sqrt{(3-2)^2+(2-2)^2}
=\sqrt1
=1
]

---

### Distance from C

[
\sqrt{(3-3)^2+(2-3)^2}
=\sqrt1
=1
]

---

### Distance from D

[
\sqrt{(3-6)^2+(2-5)^2}
=\sqrt{18}
=4.243
]

---

### Distance from E

[
\sqrt{(3-7)^2+(2-7)^2}
=\sqrt{41}
=6.403
]

---

## Step 2: Distance Table

| Point | Class | Distance |
| ----- | ----- | -------: |
| B     | Yes   |    1.000 |
| C     | No    |    1.000 |
| A     | Yes   |    2.236 |
| D     | No    |    4.243 |
| E     | No    |    6.403 |

---

## Step 3: Select the 3 Nearest Neighbours

| Neighbour | Class |
| --------- | ----- |
| B         | Yes   |
| C         | No    |
| A         | Yes   |

---

## Step 4: Majority Voting

| Class | Count |
| ----- | ----: |
| Yes   |     2 |
| No    |     1 |

---

## Final Classification

Since **Yes** has the majority among the **3 nearest neighbours**,

[
\boxed{\text{Unknown point }(3,2)\text{ belongs to Class YES.}}
]

---

# Discussion on KNN (from the uploaded material)

The uploaded material further explains:

* For **real-valued prediction**, KNN returns the **mean value** of the k nearest neighbours.
* In **distance-weighted KNN**, closer neighbours are given greater weight.
* KNN is **robust to noisy data** because it averages or votes over multiple neighbours.
* A limitation is the **curse of dimensionality**, where irrelevant attributes can dominate distance calculations. This can be reduced by stretching axes or removing less relevant attributes. 

---

# Advantages

* Simple and easy to implement.
* No training phase (lazy learner).
* Can handle both classification and prediction.
* Robust to noisy data when an appropriate value of **k** is chosen.

---

# Disadvantages

* High prediction time because all training data must be searched.
* Requires storing the entire training dataset.
* Performance depends on the choice of **k**.
* Suffers from the **curse of dimensionality**. 

---

# Applications

* Pattern recognition
* Medical diagnosis
* Recommendation systems
* Image classification
* Text classification 

---

## References (Uploaded Material)

* **09ClassAdvanced.ppt** – *Lazy Learner: Instance-Based Methods*, *The k-Nearest Neighbor Algorithm*, *Discussion on the k-NN Algorithm*.


# Bayesian Classification and Bayesian Belief Network (BBN) with Problems

---

# Part A – Bayesian Classification

## Definition

**Bayesian Classification** is a **statistical classifier** based on **Bayes' Theorem**. It predicts the probability that a given tuple belongs to a particular class and assigns the tuple to the class having the **highest posterior probability**. It is one of the fundamental classification methods discussed in your uploaded classification material.

---

## Bayes' Theorem

For a class (C) and data sample (X),

[
\boxed{
P(C|X)=\frac{P(X|C)\times P(C)}{P(X)}
}
]

Where:

| Term   | Meaning           |                       |
| ------ | ----------------- | --------------------- |
| (P(C   | X))               | Posterior Probability |
| (P(X   | C))               | Likelihood            |
| (P(C)) | Prior Probability |                       |
| (P(X)) | Evidence          |                       |

---

## Bayesian Classification Algorithm

### Step 1

Collect the training dataset.

### Step 2

Calculate the **prior probability** of each class.

### Step 3

Calculate the **conditional probability** of each attribute for every class.

### Step 4

Apply **Bayes' Theorem**.

### Step 5

Calculate the posterior probability for every class.

### Step 6

Assign the tuple to the class having the **highest posterior probability**. 

---

# Solved Problem

### Training Data

| ID | Weather  | Play |
| -- | -------- | ---- |
| 1  | Sunny    | No   |
| 2  | Sunny    | No   |
| 3  | Overcast | Yes  |
| 4  | Rain     | Yes  |
| 5  | Rain     | Yes  |
| 6  | Sunny    | Yes  |

Classify:

> **Weather = Sunny**

---

## Step 1: Prior Probabilities

| Class | Count | Probability |
| ----- | ----: | ----------: |
| Yes   |     4 | 4/6 = 0.667 |
| No    |     2 | 2/6 = 0.333 |

---

## Step 2: Conditional Probability

### Weather = Sunny

| Class | Count | Probability |
| ----- | ----: | ----------: |
| Yes   |     1 |  1/4 = 0.25 |
| No    |     2 |     2/2 = 1 |

---

## Step 3: Apply Bayes' Theorem

### Probability of Yes

[
P(Yes)\times P(Sunny|Yes)
]

[
=0.667\times0.25
=0.167
]

---

### Probability of No

[
P(No)\times P(Sunny|No)
]

[
=0.333\times1
=0.333
]

---

## Step 4: Compare

| Class | Probability |
| ----- | ----------: |
| Yes   |       0.167 |
| No    |       0.333 |

---

## Final Answer

Since

[
0.333>0.167
]

[
\boxed{\text{Weather = Sunny } \rightarrow \textbf{Play = No}}
]

---

# Advantages

* Simple and fast.
* Works well with large datasets.
* Probabilistic classifier.
* Efficient for many classification problems. 

---

# Disadvantages

* Assumes attribute independence (in Naïve Bayes).
* Performance decreases if attributes are highly dependent. 

---

# Part B – Bayesian Belief Network (BBN)

## Definition

A **Bayesian Belief Network (BBN)** is a **probabilistic graphical model** that represents the relationships among variables using a **Directed Acyclic Graph (DAG)**.

* **Nodes** represent random variables.
* **Directed edges** represent dependencies.
* Each node contains a **Conditional Probability Table (CPT)**. 

---

# Components of BBN

| Component                           | Description                               |
| ----------------------------------- | ----------------------------------------- |
| Node                                | Random variable                           |
| Edge                                | Dependency between variables              |
| Conditional Probability Table (CPT) | Probability of a node given its parent(s) |

---

# Structure

```
Rain
   |
   ▼
Wet Grass
   ▲
   |
Sprinkler
```

* **Rain** influences **Wet Grass**.
* **Sprinkler** also influences **Wet Grass**.
* The graph is **directed** and contains **no cycles**. 

---

# Bayesian Belief Network Algorithm

### Step 1

Construct a Directed Acyclic Graph (DAG).

### Step 2

Assign Conditional Probability Tables (CPTs) to each node.

### Step 3

Calculate the joint probability using the chain rule.

### Step 4

Use the probabilities to predict the required outcome. 

---

# Solved Problem

## Given

[
P(Rain)=0.2
]

[
P(WetGrass|Rain)=0.9
]

Find

[
P(Rain \cap WetGrass)
]

---

## Step 1

Use the multiplication rule.

[
P(Rain \cap WetGrass)
=====================

P(Rain)\times P(WetGrass|Rain)
]

---

## Step 2

Substitute values.

[
=0.2\times0.9
]

[
=0.18
]

---

## Final Answer

[
\boxed{P(Rain \cap WetGrass)=0.18}
]

---

# Advantages of BBN

* Represents uncertainty effectively.
* Models dependencies among variables.
* Handles incomplete information.
* Supports probabilistic reasoning and prediction. 

---

# Disadvantages

* Building the network can be complex.
* Requires prior probability information.
* Computational cost increases with large networks. 

---

# Difference Between Bayesian Classification and Bayesian Belief Network

| Bayesian Classification                             | Bayesian Belief Network                                     |
| --------------------------------------------------- | ----------------------------------------------------------- |
| Based on Bayes' theorem.                            | Based on Bayes' theorem and a Directed Acyclic Graph (DAG). |
| Classifies data into classes.                       | Represents probabilistic relationships among variables.     |
| Simpler model.                                      | More expressive and can model dependencies.                 |
| Often assumes independent attributes (Naïve Bayes). | Can model dependent attributes using a network.             |

---

## References (Uploaded Material)

* **09ClassAdvanced.ppt** – *Chapter 9: Classification: Advanced Methods*, *Bayesian Belief Networks*, *Lazy Learners*, *Summary*. 
* **08ClassBasic.ppt** – *Classification: Basic Concepts* (classification overview). 


# Why is Naive Bayes called "Naive"? Explain the Major Ideas of Naive Bayes Classification.

## Definition

**Naive Bayes** is a **probabilistic classification algorithm** based on **Bayes' Theorem**. It predicts the class of an unknown tuple by calculating the **posterior probability** of each class and assigning the tuple to the class with the highest probability.

---

# Why is Naive Bayes called "Naive"?

It is called **"Naive"** because it makes a **naive (simplifying) assumption** that:

> **All attributes (features) are conditionally independent of each other given the class label.**

This means the algorithm assumes that the value of one attribute **does not influence** the value of another attribute once the class is known.

### Example

Suppose we want to classify whether a person will **buy a computer** using the attributes:

* Age
* Income
* Student
* Credit Rating

Naive Bayes assumes that these attributes are **independent** of one another after the class (**Buy Computer = Yes/No**) is known.

In real-world datasets, this assumption is often not true, but the algorithm still performs well in many classification problems. 

---

# Major Ideas of Naive Bayes Classification

The uploaded material explains the following main ideas of Naive Bayes classification.

## 1. Based on Bayes' Theorem

Naive Bayes uses **Bayes' Theorem** to compute the probability that a tuple belongs to a class.

genui{"probability_statistics_learning_block":{"type_id":"BAYES_THEOREM"}}

Where:

* **P(C|X)** = Posterior probability
* **P(X|C)** = Likelihood
* **P(C)** = Prior probability
* **P(X)** = Evidence



---

## 2. Uses Prior Probability

Before classifying a tuple, the classifier calculates the **prior probability** of each class from the training data.

Example:

| Class | Prior Probability |
| ----- | ----------------: |
| Yes   |              9/14 |
| No    |              5/14 |

---

## 3. Computes Conditional Probability

For every attribute value, the conditional probability is calculated.

Example:

[
P(Student=Yes \mid Buy=Yes)
]

These probabilities are obtained from the training dataset. 

---

## 4. Assumes Attribute Independence

Naive Bayes assumes that all predictor attributes are **independent** of one another.

Therefore,

[
P(X|C)=P(x_1|C)\times P(x_2|C)\times \cdots \times P(x_n|C)
]

This assumption greatly simplifies the computation. 

---

## 5. Calculates Posterior Probability

Using Bayes' theorem, the posterior probability for every class is computed.

The class with the **highest posterior probability** is selected as the predicted class. 

---

# Naive Bayes Classification Steps

1. Collect the training dataset.
2. Calculate the **prior probability** of each class.
3. Calculate the **conditional probability** of each attribute.
4. Apply **Bayes' theorem**.
5. Compute the posterior probability for every class.
6. Assign the tuple to the class with the **highest probability**. 

---

# Advantages

* Simple and easy to implement.
* Fast training and prediction.
* Works well with large datasets.
* Handles high-dimensional data efficiently.
* Produces probabilistic predictions. 

---

# Disadvantages

* Assumes all attributes are independent.
* Performance may decrease when attributes are strongly dependent.
* Probability estimates may be inaccurate if the independence assumption is violated. 

---

# Summary

Naive Bayes is called **"Naive"** because it assumes that all attributes are **conditionally independent** given the class label. It applies **Bayes' Theorem**, computes prior and conditional probabilities, calculates the posterior probability for each class, and assigns the class with the highest posterior probability to the unknown tuple. Despite its simple assumption, it is widely used because it is fast, efficient, and often provides good classification accuracy.

---

## References (Uploaded Material)

* **09ClassAdvanced.ppt** – *Chapter 9: Classification: Advanced Methods* (Bayesian methods overview). 
* **08ClassBasic.ppt** – *Classification: Basic Concepts*. 


# Naive Bayes – Solved Problem (Step by Step)

### Problem

The following training data is given:

| ID |  Weather | Play |
| -: | :------: | :--: |
|  1 |   Sunny  |  No  |
|  2 |   Sunny  |  No  |
|  3 | Overcast |  Yes |
|  4 |   Rain   |  Yes |
|  5 |   Rain   |  Yes |
|  6 |   Sunny  |  Yes |

Classify the new tuple:

> **Weather = Sunny**

using the **Naive Bayes Classifier**.

---

# Step 1: Count Total Records

Total records = **6**

---

# Step 2: Calculate Prior Probability

| Class | Count | Probability |
| ----- | ----: | ----------: |
| Yes   |     4 | 4/6 = 0.667 |
| No    |     2 | 2/6 = 0.333 |

---

# Step 3: Calculate Conditional Probability

We need

### P(Sunny | Yes)

Among the **4 Yes** records:

| Weather  | Count |
| -------- | ----: |
| Sunny    |     1 |
| Overcast |     1 |
| Rain     |     2 |

[
P(Sunny|Yes)=\frac{1}{4}=0.25
]

---

### P(Sunny | No)

Among the **2 No** records:

| Weather | Count |
| ------- | ----: |
| Sunny   |     2 |

[
P(Sunny|No)=\frac{2}{2}=1
]

---

# Step 4: Apply Naive Bayes Formula

For **Yes**

[
P(Yes)\times P(Sunny|Yes)
]

[
=0.667\times0.25
]

[
=0.167
]

---

For **No**

[
P(No)\times P(Sunny|No)
]

[
=0.333\times1
]

[
=0.333
]

---

# Step 5: Compare Probabilities

| Class | Posterior Probability |
| ----- | --------------------: |
| Yes   |                 0.167 |
| No    |                 0.333 |

---

# Step 6: Final Classification

Since

[
0.333>0.167
]

the new tuple is classified as

[
\boxed{\textbf{Play = No}}
]

---

# Final Answer (Exam Format)

**Given:** Weather = Sunny

| Calculation           |       Value |
| --------------------- | ----------: |
| P(Yes)                | 4/6 = 0.667 |
| P(No)                 | 2/6 = 0.333 |
| P(Sunny|Yes)          |  1/4 = 0.25 |
| P(Sunny|No)           |     2/2 = 1 |
| P(Yes) × P(Sunny|Yes) |       0.167 |
| P(No) × P(Sunny|No)   |       0.333 |

### Result

Since **0.333 > 0.167**, the unknown tuple is classified as:

[
\boxed{\textbf{Play = No}}
]

---

**References (Uploaded Material):**

* **09ClassAdvanced.ppt** – *Chapter 9: Classification: Advanced Methods* (Bayesian methods overview). 
* **08ClassBasic.ppt** – *Classification: Basic Concepts*. 
---
---
---
---
---

# Explain Different Measures for Selecting the Best Split and Methods for Expressing Attribute Test Conditions in Decision Tree Induction Algorithm

## Attribute Selection Measure

In **Decision Tree Induction**, the most important step is selecting the **best attribute** for splitting the training data. The attribute is selected using a **heuristic or statistical measure**, and the attribute with the **best value** becomes the decision node. 

The uploaded material discusses the following attribute selection measures.

---

# 1. Information Gain (ID3/C4.5)

### Definition

**Information Gain** measures the reduction in entropy after splitting the dataset on an attribute.

The attribute having the **highest Information Gain** is selected as the best split.

### Formula

[
\boxed{
Gain(A)=Entropy(D)-Entropy_A(D)
}
]

Where:

* **Entropy(D)** = Entropy of the original dataset
* **EntropyA(D)** = Entropy after splitting on attribute **A**

### Characteristics

* Based on **Entropy**.
* Used in **ID3** and **C4.5** algorithms.
* Selects the attribute with the **maximum information gain**. 

---

# 2. Entropy

### Definition

Entropy measures the **impurity** or **uncertainty** of a dataset.

### Formula

[
Entropy(D)=
-\sum p_i\log_2(p_i)
]

Where:

* (p_i) = Probability of class (i)

### Characteristics

* Entropy = **0** → Pure dataset.
* Higher entropy → More mixed classes. 

---

# Methods for Expressing Attribute Test Conditions

The uploaded material explains that decision trees use different ways to express the test condition at each internal node.

---

## 1. Binary Split

* The attribute is divided into **two branches**.
* Mostly used for **binary attributes**.

**Example**

```
Student?

      Student
      /     \
    Yes      No
```

---

## 2. Multi-way Split

* The attribute is divided into **more than two branches**.
* Suitable for **categorical attributes**.

**Example**

```
Age

      Age
   /    |    \
<=30 31-40  >40
```

The **Age** attribute in the uploaded *Buys_Computer* example is split into three branches. 

---

## 3. Split on Continuous-Valued Attributes

For continuous attributes:

* The values are **discretized** into intervals before or during tree construction.
* The tree then splits using threshold values.

The uploaded material notes:

> **If attributes are continuous-valued, they are discretized in advance.** 

**Example**

```
Income

Income ≤ 50,000 ?

      Yes        No
```

---

## 4. Handling Missing Attribute Values

If an attribute value is missing, the uploaded material suggests:

* Assign the **most common value** of the attribute, or
* Assign **probabilities** to each possible value. 

---

## Summary Table

| Measure / Method               | Description                                                            |
| ------------------------------ | ---------------------------------------------------------------------- |
| **Entropy**                    | Measures impurity or uncertainty of the dataset.                       |
| **Information Gain**           | Selects the attribute that gives the maximum reduction in entropy.     |
| **Binary Split**               | Divides data into two branches.                                        |
| **Multi-way Split**            | Divides data into multiple branches for categorical attributes.        |
| **Continuous Attribute Split** | Discretizes continuous values into intervals before splitting.         |
| **Handling Missing Values**    | Uses the most common value or probability assignment for missing data. |

---

# Advantages of Good Attribute Selection

* Produces a smaller decision tree.
* Improves classification accuracy.
* Reduces overfitting.
* Speeds up the learning process.
* Makes the decision tree easier to understand.

---

# Conclusion

Decision Tree Induction selects the best splitting attribute using **Information Gain**, which is based on **Entropy**. The decision tree can express attribute test conditions using **binary splits**, **multi-way splits**, and **continuous-value threshold tests**, while missing values can be handled by assigning the most common value or using probability-based assignment. These techniques help construct accurate and efficient decision trees.

---

## References (Uploaded Material)

* **08ClassBasic.ppt** – *Algorithm for Decision Tree Induction*, *Brief Review of Entropy*, *Attribute Selection Measure: Information Gain (ID3/C4.5)*, *Attribute Selection: Information Gain*. 
* **08ClassBasic.ppt** – *Enhancements to Basic Decision Tree Induction* (continuous-valued attributes and missing values). 

