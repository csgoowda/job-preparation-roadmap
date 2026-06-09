# DSA Theory (1 Hour)

## 1. Prefix Sum (20 Minutes)

### What is Prefix Sum?

A Prefix Sum array stores the sum of all elements from the beginning up to the current index.

Example:

```text
Array:
[2, 4, 6, 8]

Prefix Sum:
[2, 6, 12, 20]
```

Calculation:

```text
2
2+4 = 6
2+4+6 = 12
2+4+6+8 = 20
```

### Code

```cpp
vector<int> prefix(n);

prefix[0] = arr[0];

for(int i = 1; i < n; i++)
{
    prefix[i] = prefix[i-1] + arr[i];
}
```

### Why Prefix Sum?

Without Prefix Sum:

To find sum from index 2 to 5:

```cpp
sum = arr[2] + arr[3] + arr[4] + arr[5];
```

Time = `O(n)`

With Prefix Sum:

```cpp
sum = prefix[r] - prefix[l-1];
```

Time = `O(1)`

### When to Use?

✅ Multiple range sum queries

Examples:

* Sum of elements between L and R
* Range queries
* Cumulative calculations

---

## 2. Running Sum (15 Minutes)

### What is Running Sum?

Running Sum is the cumulative sum while traversing the array.

Example:

```text
Input:
[1, 2, 3, 4]

Running Sum:
[1, 3, 6, 10]
```

### Code

```cpp
vector<int> runningSum(vector<int>& nums)
{
    for(int i = 1; i < nums.size(); i++)
    {
        nums[i] += nums[i-1];
    }

    return nums;
}
```

### Complexity

* Time: `O(n)`
* Space: `O(1)` (if modifying original array)

---

## 3. Sliding Window Introduction (25 Minutes)

### What is Sliding Window?

A technique used to process a continuous subarray efficiently.

Instead of recalculating every window, move the window forward.

---

### Example

Find sum of every subarray of size 3.

```text
Array:
[1, 2, 3, 4, 5]

Window Size = 3

[1,2,3] = 6
[2,3,4] = 9
[3,4,5] = 12
```

### Brute Force

```cpp
for(int i=0;i<=n-k;i++)
{
    int sum=0;

    for(int j=i;j<i+k;j++)
        sum+=arr[j];
}
```

Time = `O(n*k)`

---

### Sliding Window

First Window:

```text
1+2+3 = 6
```

Move Window:

```text
Remove 1
Add 4

6 - 1 + 4 = 9
```

Move Again:

```text
Remove 2
Add 5

9 - 2 + 5 = 12
```

### Code

```cpp
int sum = 0;

for(int i=0;i<k;i++)
    sum += arr[i];

int maxSum = sum;

for(int i=k;i<n;i++)
{
    sum = sum - arr[i-k] + arr[i];
    maxSum = max(maxSum, sum);
}
```

### Complexity

* Time = `O(n)`
* Space = `O(1)`

---

# Notes

## Why Prefix Sum?

Because it makes repeated range-sum calculations very fast.

```text
Without Prefix Sum:
Each query = O(n)

With Prefix Sum:
Each query = O(1)
```

---

## When to Use Sliding Window?

Use when the problem contains:

✅ Continuous subarray

✅ Fixed-size window

Examples:

* Maximum sum subarray of size K
* Average of K elements
* Count elements in a window

Keywords that often indicate Sliding Window:

* "Subarray"
* "Continuous"
* "Window size K"
* "Longest substring"
* "Maximum sum of K elements"

---

# Quick Revision

| Topic          | Use                          |
| -------------- | ---------------------------- |
| Prefix Sum     | Fast range sum queries       |
| Running Sum    | Cumulative totals            |
| Sliding Window | Continuous subarray problems |

### Homework

1. Build Prefix Sum for `[3,1,4,2,5]`.
2. Find sum from index 1 to 3 using Prefix Sum.
3. Solve "Running Sum of 1D Array" on LeetCode.
4. Learn the Sliding Window pattern before moving to problems.

**Most important:** If you see **many range-sum queries → Prefix Sum**. If you see **continuous subarray/window of size K → Sliding Window**.
Got it. From now on, when you're learning DSA, I'll give **complete C++ programs** that you can copy, paste, compile, and run directly.

### Example: Prefix Sum (Full Code)

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {2, 4, 6, 8};

    int n = arr.size();

    vector<int> prefix(n);

    prefix[0] = arr[0];

    for(int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    cout << "Prefix Sum Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << prefix[i] << " ";
    }

    return 0;
}
```

Output:

```text
Prefix Sum Array:
2 6 12 20
```

### Example: Running Sum (Full Code)

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4};

    for(int i = 1; i < nums.size(); i++)
    {
        nums[i] += nums[i - 1];
    }

    cout << "Running Sum: ";

    for(int num : nums)
    {
        cout << num << " ";
    }

    return 0;
}
```

Output:

```text
Running Sum:
1 3 6 10
```

### Example: Sliding Window (Full Code)

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 3;

    int sum = 0;

    for(int i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    int maxSum = sum;

    for(int i = k; i < arr.size(); i++)
    {
        sum = sum - arr[i - k] + arr[i];
        maxSum = max(maxSum, sum);
    }

    cout << "Maximum Sum of Subarray Size " << k << " = " << maxSum;

    return 0;
}
```

Output:

```text
Maximum Sum of Subarray Size 3 = 12
```

### DSA Learning Rule

For every problem, I will provide:

1. Problem Statement
2. Explanation
3. Brute Force Approach
4. Full C++ Code
5. Time & Space Complexity
6. Optimal Approach
7. Full C++ Code
8. Time & Space Complexity
9. Interview Notes

This format is best for your placement preparation and GitHub DSA notes.
