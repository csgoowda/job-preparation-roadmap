## Problem 2 – Contains Duplicate (25 Minutes)

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



**Target:** Understand the difference between **Brute Force** and **Optimal Solution**. This is one of the most common interview patterns.
