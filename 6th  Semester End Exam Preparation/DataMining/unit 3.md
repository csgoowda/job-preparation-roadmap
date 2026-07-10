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
