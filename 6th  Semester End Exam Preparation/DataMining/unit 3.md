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
