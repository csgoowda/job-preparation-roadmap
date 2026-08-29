## 🟢 LeetCode #217 — Contains Duplicate

### 📌 Question

Given an integer array `nums`, return `true` if **any value appears at least twice** in the array.

Otherwise, return `false`.

### Example

```text
Input:
nums = [1, 2, 3, 1]

Output:
true
```

Because `1` appears twice.

Another example:

```text
Input:
nums = [1, 2, 3, 4]

Output:
false
```

Every number appears only once.

---

# 💡 Approach — Hash Set

Here we don't need the **index**.

We only need to remember:

> **Have I already seen this number?**

So we use:

```cpp
unordered_set<int> seen;
```

A **set stores only values**, unlike the Two Sum hash map that stores:

```text
number → index
```

---

# 💻 Optimal C++ Code

```cpp
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> seen;

        for (int i = 0; i < nums.size(); i++) {

            if (seen.find(nums[i]) != seen.end()) {
                return true;
            }

            seen.insert(nums[i]);
        }

        return false;
    }
};
```

---

# 🔍 Line-by-Line Explanation

### 1️⃣ Create Hash Set

```cpp
unordered_set<int> seen;
```

Creates an empty set.

It stores only numbers:

```text
1
2
3
```

No index/value pair.

---

### 2️⃣ Traverse the array

```cpp
for (int i = 0; i < nums.size(); i++)
```

Visit every number one by one.

---

### 3️⃣ Check if number already exists

```cpp
if (seen.find(nums[i]) != seen.end())
```

Meaning:

> **Is this number already in the set?**

If yes:

```cpp
return true;
```

We found a duplicate.

---

### 4️⃣ Insert the number

```cpp
seen.insert(nums[i]);
```

If the number hasn't appeared before, store it.

Example:

```text
nums = [1,2,3,1]
```

First `1`:

```text
seen = {1}
```

Then `2`:

```text
seen = {1,2}
```

Then `3`:

```text
seen = {1,2,3}
```

Then another `1`:

```text
1 already exists ✅
```

Return:

```text
true
```

---

# 🧠 Dry Run

```text
nums = [1, 2, 3, 1]
```

| i | Current | Already Exists? | Set       |
| - | ------: | --------------- | --------- |
| 0 |       1 | ❌               | `{1}`     |
| 1 |       2 | ❌               | `{1,2}`   |
| 2 |       3 | ❌               | `{1,2,3}` |
| 3 |       1 | ✅               | `{1,2,3}` |

At `i = 3`, `1` already exists.

Therefore:

```text
return true
```

---

# ⚡ Complexity

```text
Time  → O(n)
Space → O(n)
```

We visit the array once.

---

# ⭐ What You MUST Remember

### Two Sum

```text
unordered_map
number → index
```

### Contains Duplicate

```text
unordered_set
number only
```

### Main pattern

If the question asks:

> **"Have I seen this value before?"**

Think:

```text
HASH SET
```

And remember:

```cpp
seen.find(x)
```

→ Check if `x` exists.

```cpp
seen.insert(x)
```

→ Store `x`.

---

# 🔥 Interview Memory Trick

**Duplicate question → Set**

```text
Need index/value pair → unordered_map

Only need to know existence → unordered_set
```


