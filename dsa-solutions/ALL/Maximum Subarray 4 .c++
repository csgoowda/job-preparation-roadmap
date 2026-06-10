#include <iostream>
#include <vector>
#include <climits>
using namespace std;

/*
==================================================
PROBLEM: Maximum Subarray
==================================================

QUESTION:

Given an integer array nums, find the
contiguous subarray (containing at least one number)
which has the largest sum and return its sum.

A subarray is a continuous part of an array.


EXAMPLE 1:

Input:
nums = [-2,1,-3,4,-1,2,1,-5,4]

Output:
6

Explanation:

Subarray = [4,-1,2,1]

Sum = 4 + (-1) + 2 + 1

Sum = 6


EXAMPLE 2:

Input:
nums = [1]

Output:
1


EXAMPLE 3:

Input:
nums = [5,4,-1,7,8]

Output:
23


PATTERN:

Kadane's Algorithm


KEYWORDS TO IDENTIFY:

- Maximum Sum
- Largest Sum
- Contiguous Subarray
- Continuous Subarray


BRUTE FORCE APPROACH:

Generate all possible subarrays.
Find sum of each subarray.
Store maximum sum.

Time Complexity:
O(n²)

Space Complexity:
O(1)


OPTIMAL APPROACH (Kadane's Algorithm):

1. Keep adding elements to currentSum.
2. Update maxSum whenever currentSum is bigger.
3. If currentSum becomes negative,
   reset it to 0.
4. Continue till end.

Why reset?

Because a negative sum will decrease
future subarray sums.

Example:

currentSum = -5

Next element = 10

Taking -5 + 10 = 5

Starting fresh from 10 = 10

So keeping -5 is useless.


DRY RUN:

nums = [-2,1,-3,4,-1,2,1,-5,4]

Initial:

currentSum = 0
maxSum = -∞


i = 0

currentSum = 0 + (-2)

currentSum = -2

maxSum = -2

currentSum < 0

Reset currentSum = 0


i = 1

currentSum = 0 + 1

currentSum = 1

maxSum = 1


i = 2

currentSum = 1 + (-3)

currentSum = -2

maxSum = 1

Reset currentSum = 0


i = 3

currentSum = 0 + 4

currentSum = 4

maxSum = 4


i = 4

currentSum = 4 + (-1)

currentSum = 3

maxSum = 4


i = 5

currentSum = 3 + 2

currentSum = 5

maxSum = 5


i = 6

currentSum = 5 + 1

currentSum = 6

maxSum = 6


i = 7

currentSum = 6 + (-5)

currentSum = 1

maxSum = 6


i = 8

currentSum = 1 + 4

currentSum = 5

maxSum = 6


Final Answer:

6


TIME COMPLEXITY:

O(n)

Because array is traversed only once.


SPACE COMPLEXITY:

O(1)

Only two variables are used.


INTERVIEW TRICK:

If current sum becomes negative,
throw it away and start a new subarray.


MOST IMPORTANT RULE:

currentSum < 0

↓

currentSum = 0


This is the heart of Kadane's Algorithm.

==================================================
*/

int main()
{
    // Input array
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    // Store maximum sum found so far
    int maxSum = INT_MIN;

    // Store current subarray sum
    int currentSum = 0;

    // Traverse the array
    for(int i = 0; i < nums.size(); i++)
    {
        // Add current element
        currentSum += nums[i];

        // Update maximum sum
        if(currentSum > maxSum)
        {
            maxSum = currentSum;
        }

        // If current sum becomes negative
        // start a new subarray
        if(currentSum < 0)
        {
            currentSum = 0;
        }
    }

    // Print answer
    cout << "Maximum Subarray Sum = " << maxSum << endl;

    return 0;
}
