
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


**Target:** Understand the difference between **Brute Force** and **Optimal Solution**. This is one of the most common interview patterns.
