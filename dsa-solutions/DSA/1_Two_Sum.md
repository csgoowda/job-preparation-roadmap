🟢 LeetCode #1 — Two Sum
📌 Question

Given an array nums and an integer target, return the indices of two numbers whose sum is equal to target.

Example:

Input:
nums = [2,7,11,15]
target = 9

Output:
[0,1]

Because:

nums[0] + nums[1]
= 2 + 7
= 9
💡 Approach — Hash Map

Instead of checking every pair using two loops, we use a Hash Map.

For every number:

complement = target - current number

Then check:

"Have I already seen this complement?"

If yes → answer found.

If no → store the current number and its index.

💻 Optimal Code — C++
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {

            int complement = target - nums[i];

            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};
🔍 Code Explanation
1. Create Hash Map
unordered_map<int, int> mp;

Stores:

number → index

Example:

2 → 0
7 → 1
2. Traverse the array
for (int i = 0; i < nums.size(); i++)

Visit every element one by one.

3. Find required number
int complement = target - nums[i];

Example:

target = 9
current = 7

complement = 9 - 7
           = 2

We need 2 to make 9.

4. Check Hash Map
if (mp.find(complement) != mp.end())

Means:

Is the required number already stored?

If yes → we found the pair.

5. Return indices
return {mp[complement], i};

mp[complement] = previous number's index.

i = current number's index.

Example:

2 → 0

current 7 → index 1

Answer = [0,1]
6. Store current number
mp[nums[i]] = i;

If the answer isn't found yet, save the current number.

Example:

number = 2
index = 0

mp[2] = 0
🧠 Dry Run
nums = [2, 7, 11, 15]
target = 9
i = 0
current = 2
complement = 9 - 2 = 7

7 not in map ❌

Store:

2 → 0
i = 1
current = 7
complement = 9 - 7 = 2

2 exists ✅

2 → 0
7 → 1

Return:

[0,1]
⚡ Why is this Optimal?
Brute Force

Two loops:

O(n²)

We check many pairs.

Hash Map

One loop:

O(n)

Hash map lookup is approximately O(1) average.

So:

Time  → O(n)
Space → O(n)
⭐ What You MUST Remember
1. The pattern
Two Sum
   ↓
Hash Map
   ↓
Find Complement
2. The formula
complement = target - nums[i]
3. Hash Map stores
number → index
4. Check
mp.find(complement) != mp.end()

means:

"Complement exists."

5. Store
mp[nums[i]] = i;

means:

"Store number and its index."

🧩 Interview Memory Trick

When you see:

"Find two numbers that add up to target."

Immediately think:

TARGET
  ↓
CURRENT NUMBER
  ↓
TARGET - CURRENT
  ↓
COMPLEMENT
  ↓
HASH MAP
🔥 One-line memory

Two Sum = Find complement using Hash Map.
