# Day 1 – DSA (2 Hours)

## Part 1: Theory (45 Minutes)

### 1. Array Basics

An **Array** is a collection of elements stored in contiguous memory locations.

Example:

```cpp
int arr[5] = {10, 20, 30, 40, 50};
```

**Advantages**

* Fast access using index (`O(1)`)
* Easy traversal

**Disadvantages**

* Fixed size
* Insertion/Deletion can be costly

---

### 2. Array Traversal

Visiting each element one by one.

```cpp
for(int i = 0; i < n; i++)
{
    cout << arr[i] << " ";
}
```

**Time Complexity:** `O(n)`

---

### 3. Array Insertion

Insert an element at a specific position.

Example:

```cpp
Position = 2
Value = 25

Before:
10 20 30 40

After:
10 20 25 30 40
```

Steps:

1. Shift elements right.
2. Insert value.

**Time Complexity:** `O(n)`

---

### 4. Array Deletion

Delete an element from a specific position.

Example:

```cpp
Delete 30

Before:
10 20 30 40 50

After:
10 20 40 50
```

Steps:

1. Shift elements left.
2. Reduce size.

**Time Complexity:** `O(n)`

---

### 5. Time Complexity Basics

| Complexity | Meaning      |
| ---------- | ------------ |
| O(1)       | Constant     |
| O(log n)   | Logarithmic  |
| O(n)       | Linear       |
| O(n log n) | Linearithmic |
| O(n²)      | Quadratic    |

Examples:

* Access array element → `O(1)`
* Traverse array → `O(n)`
* Nested loops → `O(n²)`

---

# Part 2: Problem 1 – Two Sum (35 Minutes)

### Problem

Given an array and a target, return indices of two numbers whose sum equals target.

Example:

```cpp
nums = [2,7,11,15]
target = 9

Output:
[0,1]
```

---

## Step 1: Understand Problem

Need two numbers:

```cpp
nums[i] + nums[j] = target
```

Return their indices.

---

## Step 2: Brute Force

Check every pair.

```cpp
vector<int> twoSum(vector<int>& nums, int target)
{
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[i]+nums[j]==target)
                return {i,j};
        }
    }
    return {};
}
```

### Complexity

* Time: `O(n²)`
* Space: `O(1)`

---

## Step 3: Optimal Solution (Hash Map)

```cpp
vector<int> twoSum(vector<int>& nums, int target)
{
    unordered_map<int,int> mp;

    for(int i=0;i<nums.size();i++)
    {
        int complement = target - nums[i];

        if(mp.find(complement)!=mp.end())
            return {mp[complement], i};

        mp[nums[i]] = i;
    }

    return {};
}
```

### Complexity

* Time: `O(n)`
* Space: `O(n)`

---

### Notes

| Method      | Time  | Space |
| ----------- | ----- | ----- |
| Brute Force | O(n²) | O(1)  |
| Hash Map    | O(n)  | O(n)  |

---

# Part 3: Problem 2 – Contains Duplicate (25 Minutes)

### Problem

Check whether any value appears at least twice.

Example:

```cpp
Input:
[1,2,3,1]

Output:
true
```

---

## Step 1: Understand Problem

Need to determine if any element repeats.

---

## Step 2: Brute Force

```cpp
bool containsDuplicate(vector<int>& nums)
{
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[i]==nums[j])
                return true;
        }
    }
    return false;
}
```

### Complexity

* Time: `O(n²)`
* Space: `O(1)`

---

## Step 3: Optimal Solution (Hash Set)

```cpp
bool containsDuplicate(vector<int>& nums)
{
    unordered_set<int> st;

    for(int num : nums)
    {
        if(st.find(num)!=st.end())
            return true;

        st.insert(num);
    }

    return false;
}
```

### Complexity

* Time: `O(n)`
* Space: `O(n)`

---

# Today's Checklist

✅ Learn Array Basics
✅ Learn Traversal
✅ Learn Insertion
✅ Learn Deletion
✅ Learn Time Complexity
✅ Solve Two Sum (Brute + Optimal)
✅ Solve Contains Duplicate (Brute + Optimal)
✅ Note Time & Space Complexity

### Homework

1. Solve Two Sum without looking at notes.
2. Solve Contains Duplicate without looking at notes.
3. Write all complexities from memory.
4. Revise arrays for 15 minutes before sleeping.

**Target:** Understand the difference between **Brute Force** and **Optimal Solution**. This is one of the most common interview patterns.
