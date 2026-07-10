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


# Explain DBSCAN (Density-Based Spatial Clustering of Applications with Noise)

## Definition

**DBSCAN (Density-Based Spatial Clustering of Applications with Noise)** is a **density-based clustering algorithm** that groups together data objects that are **closely packed** (high-density regions) and identifies objects in **low-density regions as noise (outliers)**. Unlike K-Means, DBSCAN **does not require the number of clusters (K) to be specified in advance** and can discover clusters of arbitrary shapes. 

---

# Basic Idea

DBSCAN forms clusters based on **density** using two parameters:

* **Eps (ε)**: Radius of the neighborhood around a point.
* **MinPts**: Minimum number of points required within the ε-neighborhood for a point to be considered a **core point**. 

---

# Important Terms

### 1. Core Point

A point is a **Core Point** if it has at least **MinPts** points (including itself) within its ε-neighborhood.

---

### 2. Border Point

A **Border Point** has fewer than **MinPts** neighbors but lies within the ε-neighborhood of a core point.

---

### 3. Noise (Outlier)

A **Noise Point** is neither a core point nor a border point. It does not belong to any cluster.

---

# DBSCAN Algorithm

### Input

* Dataset **D**
* Radius **ε (Eps)**
* Minimum number of points **MinPts**

### Output

* Clusters and Noise Points

### Steps

**Step 1:** Select an unvisited point.

**Step 2:** Find all points within its **ε-neighborhood**.

**Step 3:** If the number of neighboring points is **greater than or equal to MinPts**, mark it as a **Core Point** and create a new cluster.

**Step 4:** Expand the cluster by adding all density-reachable points.

**Step 5:** Repeat the process until all points are visited.

**Step 6:** Points that do not belong to any cluster are labeled as **Noise (Outliers)**. 

---

# Flowchart

```text
Start
   ↓
Choose an unvisited point
   ↓
Find ε-neighborhood
   ↓
Neighbors ≥ MinPts?
   ↓
Yes ──► Create New Cluster
 │          │
 │          ▼
 │   Expand Cluster
 │
No
 │
 ▼
Mark as Noise (or Border Point)
 │
 ▼
Repeat until all points are visited
 │
 ▼
Stop
```

---

# Example

Suppose:

* **ε = 2**
* **MinPts = 3**

### Dataset

| Point | Number of Neighbors within ε | Type         |
| ----- | ---------------------------: | ------------ |
| P1    |                            4 | Core Point   |
| P2    |                            5 | Core Point   |
| P3    |                            3 | Core Point   |
| P4    |                            2 | Border Point |
| P5    |                            1 | Noise Point  |

### Clustering Result

| Cluster   | Points         |
| --------- | -------------- |
| Cluster 1 | P1, P2, P3, P4 |
| Noise     | P5             |

Here:

* **P1, P2, and P3** are **Core Points** because each has at least **3 neighbors**.
* **P4** is a **Border Point** because it is reachable from a core point but does not satisfy the MinPts condition itself.
* **P5** is a **Noise Point** because it is isolated and does not belong to any cluster.

---

# Advantages

According to the uploaded material:

* Does **not require the number of clusters (K)** in advance.
* Can discover **clusters of arbitrary shape**.
* Handles **noise and outliers** effectively.
* Suitable for large spatial databases.

---

# Disadvantages

* Selecting appropriate values for **ε** and **MinPts** is difficult.
* Performance decreases when clusters have varying densities.
* Sensitive to parameter selection. 

---

# Applications

* Spatial data mining.
* Image segmentation.
* Geographic Information Systems (GIS).
* Customer segmentation.
* Outlier detection.

---

# Difference Between K-Means and DBSCAN

| K-Means                              | DBSCAN                                 |
| ------------------------------------ | -------------------------------------- |
| Requires the number of clusters (K). | Does not require K.                    |
| Uses centroids to form clusters.     | Uses density to form clusters.         |
| Cannot detect noise explicitly.      | Detects noise (outliers).              |
| Best for spherical clusters.         | Can find clusters of arbitrary shapes. |
| Sensitive to outliers.               | Robust to noise and outliers.          |

---

# Conclusion

DBSCAN is a **density-based clustering algorithm** that groups closely packed points into clusters while identifying sparse points as **noise**. It uses two parameters, **ε (Eps)** and **MinPts**, to determine **core points**, **border points**, and **noise points**, making it suitable for discovering clusters of arbitrary shapes and handling outliers effectively.

---

## References (Uploaded Material)

* **10ClusBasic.ppt** – *Chapter 10: Cluster Analysis: Basic Concepts and Methods*, *Density-Based Methods*. 
* **12Outlier.ppt** – *Density-Based Outlier Detection*, *Clustering-Based Outlier Detection*. 


# Differentiate between Agglomerative Clustering and Divisive Clustering

Hierarchical clustering creates a hierarchy of clusters and **does not require the number of clusters (K) as input**, but it requires a **termination condition**. The two main hierarchical clustering approaches are **Agglomerative (AGNES)** and **Divisive (DIANA)**. 

---

## Difference between Agglomerative Clustering and Divisive Clustering

| **Agglomerative Clustering (AGNES)**                                        | **Divisive Clustering (DIANA)**                                                        |
| --------------------------------------------------------------------------- | -------------------------------------------------------------------------------------- |
| Bottom-up approach.                                                         | Top-down approach.                                                                     |
| Starts with each data object as an individual cluster.                      | Starts with all data objects in one large cluster.                                     |
| Repeatedly **merges** the two closest clusters.                             | Repeatedly **splits** a cluster into smaller clusters.                                 |
| Number of clusters **decreases** after each iteration.                      | Number of clusters **increases** after each iteration.                                 |
| Stops when all objects form one cluster or a stopping condition is reached. | Stops when every object becomes a separate cluster or a stopping condition is reached. |
| Uses similarity (or distance) to merge clusters.                            | Uses dissimilarity to divide clusters.                                                 |
| More commonly used in practical applications.                               | Less commonly used because it is computationally more expensive.                       |
| Also known as **AGNES (Agglomerative Nesting)**.                            | Also known as **DIANA (Divisive Analysis)**.                                           |

---

## Agglomerative Clustering (AGNES)

### Working

1. Start with **n clusters**, each containing one object.
2. Compute the distance matrix.
3. Merge the two closest clusters.
4. Update the distance matrix.
5. Repeat until only one cluster remains or the stopping condition is met. 

### Example

```
Step 0

A   B   C   D

Step 1

AB   C   D

Step 2

AB   CD

Step 3

ABCD
```

---

## Divisive Clustering (DIANA)

### Working

1. Start with **one cluster** containing all objects.
2. Find the most dissimilar objects.
3. Split the cluster into smaller clusters.
4. Continue splitting until each object forms a separate cluster or the stopping condition is reached. 

### Example

```
Step 0

ABCD

Step 1

AB   CD

Step 2

A   B   CD

Step 3

A   B   C   D
```

---

## Diagram (from the uploaded material)

```text
Agglomerative (Bottom-Up)

A   B   C   D
 \ /     \ /
 AB      CD
    \   /
    ABCD


Divisive (Top-Down)

ABCD
 /   \
AB   CD
/ \   / \
A B   C D
```

This illustrates the bottom-up (AGNES) and top-down (DIANA) approaches shown in the uploaded material. 

---

## Advantages

### Agglomerative Clustering

* Simple to implement.
* Produces a hierarchy of clusters.
* Suitable for discovering natural cluster structures.

### Divisive Clustering

* Produces meaningful top-level partitions.
* Useful when a broad grouping is needed before finer divisions.



---

## Conclusion

**Agglomerative Clustering (AGNES)** is a **bottom-up** hierarchical method that starts with individual objects and repeatedly merges the nearest clusters. **Divisive Clustering (DIANA)** is a **top-down** method that starts with one large cluster and repeatedly splits it into smaller clusters. Both approaches create a hierarchy of clusters but differ in the direction of cluster formation. 

---

## References (Uploaded Material)

* **10ClusBasic.ppt** – *Hierarchical Clustering*, *AGNES (Agglomerative)* and *DIANA (Divisive)*. 


# Explain Different Types of Clusters and Cluster Validity Measures

## Types of Clusters

A **cluster** is a collection of data objects that are **similar to one another within the same group** and **dissimilar to objects in other groups**. Cluster analysis groups similar data objects together and is an **unsupervised learning** technique. 

According to the uploaded material, clustering methods form different types of clusters.

---

## 1. Partition-Based Clusters

### Definition

The dataset is divided into **k non-overlapping clusters**, where each object belongs to exactly one cluster.

### Characteristics

* Number of clusters (**k**) is specified in advance.
* Each cluster is represented by a **centroid** or **medoid**.
* Examples:

  * K-Means
  * K-Medoids (PAM)



---

## 2. Hierarchical Clusters

### Definition

Clusters are organized in the form of a **hierarchy (tree structure)**.

### Types

* **Agglomerative (Bottom-Up)**
* **Divisive (Top-Down)**

### Examples

* AGNES
* DIANA
* BIRCH
* CHAMELEON

---

## 3. Density-Based Clusters

### Definition

Clusters are formed based on **high-density regions** separated by **low-density regions**.

### Characteristics

* Can discover clusters of arbitrary shape.
* Handles noise effectively.

### Examples

* DBSCAN
* OPTICS
* DENCLUE

---

## 4. Grid-Based Clusters

### Definition

The data space is divided into a **grid of cells**, and clustering is performed on these grid cells instead of individual data points.

### Examples

* STING
* WaveCluster
* CLIQUE

---

## 5. Model-Based Clusters

### Definition

A statistical or mathematical model is assumed for each cluster, and the best-fitting model is found.

### Examples

* EM Algorithm
* SOM
* COBWEB



---

## Summary of Cluster Types

| Cluster Type    | Description                      | Examples                   |
| --------------- | -------------------------------- | -------------------------- |
| Partition-Based | Divides data into **k** clusters | K-Means, PAM               |
| Hierarchical    | Forms a hierarchy of clusters    | AGNES, DIANA, BIRCH        |
| Density-Based   | Forms clusters using density     | DBSCAN, OPTICS, DENCLUE    |
| Grid-Based      | Uses grid cells for clustering   | STING, WaveCluster, CLIQUE |
| Model-Based     | Uses statistical models          | EM, SOM, COBWEB            |

---

# Cluster Validity Measures

## Definition

**Cluster Validity** is the process of **evaluating the quality of the clustering results**. A good clustering method should produce:

* **High intra-cluster similarity** (objects within the same cluster are very similar).
* **Low inter-cluster similarity** (objects in different clusters are very different).

---

## 1. Intrinsic (Internal) Validity Measure

### Definition

Used when **ground truth is not available**.

It evaluates clustering by considering:

* Separation between clusters.
* Compactness within clusters.

### Example

* **Silhouette Coefficient**



---

## 2. Extrinsic (External) Validity Measure

### Definition

Used when the **ground truth (true class labels)** is available.

The obtained clusters are compared with the actual classes.

### Example

* **BCubed Precision**
* **BCubed Recall**



---

## Quality of Good Clustering

According to the uploaded material, a good clustering method should have:

* **High intra-class similarity** (cohesive clusters).
* **Low inter-class similarity** (well-separated clusters).

The quality also depends on:

* Similarity measure.
* Algorithm implementation.
* Ability to discover hidden patterns.

---

## Essential Criteria for Cluster Quality (Extrinsic Measures)

The uploaded material states that a clustering quality measure should satisfy the following criteria:

1. **Cluster Homogeneity**

   * Objects in the same cluster should belong to the same class.

2. **Cluster Completeness**

   * Objects belonging to the same category should be placed in the same cluster.

3. **Rag Bag**

   * Placing a heterogeneous object into a pure cluster should be penalized more than placing it into a miscellaneous ("rag bag") cluster.

4. **Small Cluster Preservation**

   * Small clusters should not be unnecessarily split into many pieces. 

---

# Summary Table

| Cluster Validity Measure       | Description                                                                      |
| ------------------------------ | -------------------------------------------------------------------------------- |
| **Intrinsic Measure**          | Evaluates clustering without ground truth (e.g., Silhouette Coefficient).        |
| **Extrinsic Measure**          | Compares clustering with known class labels (e.g., BCubed Precision and Recall). |
| **Cluster Homogeneity**        | Higher purity within a cluster is better.                                        |
| **Cluster Completeness**       | Objects of the same class should be in one cluster.                              |
| **Rag Bag**                    | Mixed objects should preferably be placed in miscellaneous clusters.             |
| **Small Cluster Preservation** | Small clusters should be preserved without unnecessary splitting.                |

---

# Conclusion

Clusters can be formed using **partition-based, hierarchical, density-based, grid-based, and model-based** approaches. The quality of clustering is evaluated using **cluster validity measures**, which are classified into **intrinsic** (without ground truth) and **extrinsic** (with ground truth) methods. A good clustering result should have **high intra-cluster similarity**, **low inter-cluster similarity**, and satisfy quality criteria such as **homogeneity, completeness, rag bag, and small cluster preservation**.

---

## References (Uploaded Material)

* **10ClusBasic.ppt** – *Major Clustering Approaches*, *Quality: What Is Good Clustering?*, *Measure the Quality of Clustering*, *Measuring Clustering Quality*, *Measuring Clustering Quality: Extrinsic Methods*, *Summary*.


# Explain the Agglomerative Clustering Algorithm, Single Link Technique, and Complete Link Technique

## Agglomerative Clustering (AGNES)

### Definition

**Agglomerative Clustering** is a **hierarchical clustering algorithm** that follows a **bottom-up approach**. Initially, each data object is treated as a separate cluster. At each iteration, the two **most similar (closest)** clusters are merged until all objects belong to a single cluster or a stopping condition is reached. It is also known as **AGNES (Agglomerative Nesting)**.

---

# Working Principle

Initially,

* Each object forms an individual cluster.
* Compute the distance (similarity) matrix.
* Merge the two closest clusters.
* Update the distance matrix.
* Repeat until one cluster remains or the desired number of clusters is obtained. 

---

# Agglomerative Clustering Algorithm

### Input

* Dataset containing **n objects**

### Output

* Hierarchical cluster (Dendrogram)

### Algorithm

**Step 1:** Treat each object as a separate cluster.

**Step 2:** Compute the distance matrix.

**Step 3:** Find the two closest clusters.

**Step 4:** Merge these two clusters.

**Step 5:** Update the distance matrix using a linkage method.

**Step 6:** Repeat Steps 3–5 until only one cluster remains or the stopping criterion is satisfied. 

---

# Example

Initially

| Cluster | Objects |
| ------- | ------- |
| C1      | A       |
| C2      | B       |
| C3      | C       |
| C4      | D       |

### Iteration 1

Merge A and B

```
AB   C   D
```

---

### Iteration 2

Merge C and D

```
AB   CD
```

---

### Iteration 3

Merge AB and CD

```
ABCD
```

---

# Dendrogram

```text
          ABCD
         /    \
       AB      CD
      /  \    /  \
     A    B  C    D
```

This hierarchical structure is called a **Dendrogram**. 

---

# Single Link Technique (Nearest Neighbor)

## Definition

In the **Single Link** method, the distance between two clusters is defined as the **minimum distance** between any pair of objects, where one object belongs to the first cluster and the other belongs to the second cluster.

### Formula

[
\boxed{
D(A,B)=\min(d(x,y))
}
]

where

* (x) belongs to Cluster A
* (y) belongs to Cluster B



---

## Example

Suppose

### Cluster 1

A, B

### Cluster 2

C, D

Distance matrix

| Pair | Distance |
| ---- | -------: |
| A–C  |        4 |
| A–D  |        7 |
| B–C  |        3 |
| B–D  |        6 |

### Single Link Distance

Choose the **minimum distance**

[
\boxed{
\min(4,7,3,6)=3
}
]

Therefore,

[
\boxed{
D(C_1,C_2)=3
}
]

---

## Characteristics

* Uses the **nearest neighbor**.
* Can detect clusters of arbitrary shape.
* May produce a **chaining effect** (long, thin clusters). 

---

# Complete Link Technique (Farthest Neighbor)

## Definition

In the **Complete Link** method, the distance between two clusters is defined as the **maximum distance** between any pair of objects belonging to different clusters.

### Formula

[
\boxed{
D(A,B)=\max(d(x,y))
}
]

where

* (x) belongs to Cluster A
* (y) belongs to Cluster B



---

## Example

Using the same distance table

| Pair | Distance |
| ---- | -------: |
| A–C  |        4 |
| A–D  |        7 |
| B–C  |        3 |
| B–D  |        6 |

### Complete Link Distance

Choose the **maximum distance**

[
\boxed{
\max(4,7,3,6)=7
}
]

Therefore,

[
\boxed{
D(C_1,C_2)=7
}
]

---

## Characteristics

* Uses the **farthest neighbor**.
* Produces **compact and tight clusters**.
* Less affected by the chaining effect than Single Link. 

---

# Difference Between Single Link and Complete Link

| Single Link                                     | Complete Link                                   |
| ----------------------------------------------- | ----------------------------------------------- |
| Uses the **minimum distance** between clusters. | Uses the **maximum distance** between clusters. |
| Also called **Nearest Neighbor** method.        | Also called **Farthest Neighbor** method.       |
| Produces long, chain-like clusters.             | Produces compact and well-separated clusters.   |
| Sensitive to chaining.                          | Less sensitive to chaining.                     |
| Suitable for arbitrary-shaped clusters.         | Suitable for compact clusters.                  |

---

# Advantages of Agglomerative Clustering

* Easy to understand and implement.
* Produces a hierarchical structure (dendrogram).
* No need to specify the number of clusters initially.
* Can work with different linkage methods.

---

# Disadvantages

* Computationally expensive for large datasets.
* Once clusters are merged, they cannot be split.
* Sensitive to noise and outliers. 

---

# Conclusion

**Agglomerative Clustering (AGNES)** is a **bottom-up hierarchical clustering algorithm** that starts with each object as an individual cluster and repeatedly merges the closest clusters. The **Single Link** technique measures the distance using the **minimum distance (nearest neighbor)** between clusters, whereas the **Complete Link** technique uses the **maximum distance (farthest neighbor)**. These linkage methods determine how clusters are merged and influence the final clustering structure.

---

## References (Uploaded Material)

* **10ClusBasic.ppt** – *Major Clustering Approaches*, *Hierarchical Clustering (AGNES/DIANA)*, *Cluster Analysis: Basic Concepts and Methods*.



# Explain Hierarchical Clustering with its Advantages and Disadvantages

## Definition

**Hierarchical Clustering** is a clustering technique that **creates a hierarchy (tree structure) of clusters**. It groups similar data objects into clusters based on their similarity or distance. The result is represented using a **dendrogram** (tree diagram). Unlike K-Means, it **does not require the number of clusters (K) as input**, but it requires a **termination condition**.

---

# Types of Hierarchical Clustering

The uploaded material explains two approaches:

### 1. Agglomerative Hierarchical Clustering (AGNES)

* **Bottom-up approach**.
* Starts with each object as a separate cluster.
* Repeatedly merges the two closest clusters until one cluster remains.

### 2. Divisive Hierarchical Clustering (DIANA)

* **Top-down approach**.
* Starts with all objects in one cluster.
* Repeatedly splits the cluster into smaller clusters until each object forms a separate cluster.

---

# Hierarchical Clustering Algorithm (Agglomerative)

### Step 1

Treat each object as an individual cluster.

### Step 2

Compute the distance (similarity) matrix.

### Step 3

Find the two closest clusters.

### Step 4

Merge these two clusters.

### Step 5

Update the distance matrix.

### Step 6

Repeat Steps 3–5 until:

* only one cluster remains, or
* the desired number of clusters is obtained. 

---

# Example

Suppose we have four objects:

**A, B, C, D**

### Initial Clusters

| Cluster | Objects |
| ------- | ------- |
| C1      | A       |
| C2      | B       |
| C3      | C       |
| C4      | D       |

---

### Iteration 1

Merge **A** and **B**

```
AB   C   D
```

---

### Iteration 2

Merge **C** and **D**

```
AB   CD
```

---

### Iteration 3

Merge **AB** and **CD**

```
ABCD
```

---

# Dendrogram

```text
            ABCD
           /    \
         AB      CD
        /  \    /  \
       A    B  C    D
```

A **dendrogram** visually represents the order in which clusters are merged or split. 

---

# Linkage Methods

The uploaded material describes different linkage methods used to calculate the distance between clusters.

### 1. Single Link (Nearest Neighbor)

* Distance between two clusters = **minimum distance** between any two objects in the clusters.

### 2. Complete Link (Farthest Neighbor)

* Distance between two clusters = **maximum distance** between any two objects in the clusters. 

---

# Advantages

According to the uploaded material:

* Does **not require the number of clusters (K)** in advance.
* Produces a **hierarchical structure (dendrogram)** that is easy to visualize.
* Can identify clusters at different levels of similarity.
* Flexible because different linkage methods (Single Link, Complete Link, etc.) can be used.
* Suitable for discovering natural groupings in data.

---

# Disadvantages

* Computationally expensive for large datasets.
* Once clusters are merged (or split), the decision **cannot be undone**.
* Sensitive to **noise and outliers**.
* Performance depends on the choice of **distance measure** and **linkage method**. 

---

# Applications

* Document clustering.
* Biological classification (taxonomy).
* Gene sequence analysis.
* Image segmentation.
* Customer segmentation. 

---

# Summary

Hierarchical Clustering is an **unsupervised clustering technique** that creates a hierarchy of clusters represented by a **dendrogram**. It has two approaches: **Agglomerative (bottom-up)** and **Divisive (top-down)**. It is useful for visualizing cluster relationships and does not require the number of clusters in advance, but it is computationally expensive and sensitive to noise.

---

## References (Uploaded Material)

* **10ClusBasic.ppt** – *Hierarchical Clustering*, *Major Clustering Approaches*, *Cluster Analysis: Basic Concepts and Methods*.

