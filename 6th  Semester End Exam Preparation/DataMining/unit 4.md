# Explain the K-Means Algorithm with a Solved Problem

## Definition

**K-Means** is a **partitioning clustering algorithm** that divides a dataset containing **n objects** into **k clusters**, where each object belongs to the cluster whose **centroid (mean point)** is nearest.

The objective of K-Means is to **minimize the sum of squared distances** between the data objects and their respective cluster centroids. 

---

# K-Means Algorithm

According to the uploaded material, the K-Means algorithm is implemented in the following four steps.

### Step 1

Partition the objects into **k non-empty subsets**.

### Step 2

Compute the **centroid (mean point)** of each cluster.

### Step 3

Assign every object to the cluster whose centroid is **nearest**.

### Step 4

Repeat Steps 2 and 3 until **no object changes its cluster**. 

---

# Flow of K-Means

```text
Start
   ↓
Choose K
   ↓
Select Initial Centroids
   ↓
Assign Points to Nearest Centroid
   ↓
Calculate New Centroids
   ↓
Any Change?
   ↓
Yes ───► Repeat
No
   ↓
Final Clusters
```

---

# Solved Problem

## Given

Cluster the following points using **K = 2**.

| Point | Coordinates |
| ----- | ----------- |
| P1    | (2,10)      |
| P2    | (2,5)       |
| P3    | (8,4)       |
| P4    | (5,8)       |
| P5    | (7,5)       |
| P6    | (6,4)       |

Choose initial centroids:

* **C₁ = (2,10)**
* **C₂ = (5,8)**

---

# Iteration 1

## Step 1: Calculate Euclidean Distance

### Distance Table

| Point     | Distance to C₁ (2,10) | Distance to C₂ (5,8) | Cluster |
| --------- | --------------------: | -------------------: | :-----: |
| P1 (2,10) |                 0.000 |                3.606 |    C₁   |
| P2 (2,5)  |                 5.000 |                4.243 |    C₂   |
| P3 (8,4)  |                 8.485 |                5.000 |    C₂   |
| P4 (5,8)  |                 3.606 |                0.000 |    C₂   |
| P5 (7,5)  |                 7.071 |                3.606 |    C₂   |
| P6 (6,4)  |                 7.211 |                4.123 |    C₂   |

---

## Step 2: Form Clusters

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

# Step 3: Compute New Centroids

## Cluster C₁

Only one point.

[
C_1=(2,10)
]

---

## Cluster C₂

|  X |  Y |
| -: | -: |
|  2 |  5 |
|  8 |  4 |
|  5 |  8 |
|  7 |  5 |
|  6 |  4 |

Average X

[
=\frac{2+8+5+7+6}{5}
=\frac{28}{5}
=5.6
]

Average Y

[
=\frac{5+4+8+5+4}{5}
=\frac{26}{5}
=5.2
]

New centroid

[
\boxed{C_2=(5.6,;5.2)}
]

---

# Iteration 2

Again calculate the distance from every point to

* C₁ = (2,10)
* C₂ = (5.6,5.2)

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

# Step 4: Recalculate Centroids

## Cluster C₁

|  X |  Y |
| -: | -: |
|  2 | 10 |
|  2 |  5 |
|  5 |  8 |

Average

[
X=\frac{2+2+5}{3}=3
]

[
Y=\frac{10+5+8}{3}=7.67
]

New centroid

[
\boxed{C_1=(3,;7.67)}
]

---

## Cluster C₂

|  X |  Y |
| -: | -: |
|  8 |  4 |
|  7 |  5 |
|  6 |  4 |

Average

[
X=\frac{8+7+6}{3}=7
]

[
Y=\frac{4+5+4}{3}=4.33
]

New centroid

[
\boxed{C_2=(7,;4.33)}
]

---

# Final Clusters

## Cluster 1

| Points |
| ------ |
| P1     |
| P2     |
| P4     |

Centroid

[
(3,;7.67)
]

---

## Cluster 2

| Points |
| ------ |
| P3     |
| P5     |
| P6     |

Centroid

[
(7,;4.33)
]

No further reassignment occurs, so the algorithm **stops**.

---

# Advantages

According to the uploaded material:

* Simple and easy to implement.
* Efficient for large datasets.
* Fast clustering algorithm.
* Produces compact clusters. 

---

# Disadvantages

* The value of **K** must be specified in advance.
* Sensitive to the initial choice of centroids.
* Works best for spherical clusters.
* Sensitive to noise and outliers. 

---

# Applications

* Customer segmentation
* Image compression
* Pattern recognition
* Market analysis
* Document clustering 

---

## Exam Tip

For **K-Means numerical problems**, always follow this sequence:

1. Write the dataset.
2. Choose **K** and initial centroids.
3. Calculate **Euclidean distances**.
4. Assign each point to the nearest centroid.
5. Compute the new centroids.
6. Repeat until the clusters no longer change.
7. Write the final clusters and centroids.

---

## References (Uploaded Material)

* **10ClusBasic.ppt** – *The K-Means Clustering Method*, *Partitioning Algorithms: Basic Concept*, *An Example of K-Means Clustering*.
