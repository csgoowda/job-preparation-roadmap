#include <iostream>
using namespace std;

/*
==================================================
PROBLEM: Valid Palindrome
==================================================

QUESTION:

Given a string, determine whether
it is a palindrome.

A palindrome reads the same
forward and backward.

Return true if palindrome,
otherwise return false.

--------------------------------------------------

EXAMPLE 1:

Input:
str = "madam"

Output:
True

Explanation:

Forward:
m a d a m

Backward:
m a d a m

Both are same.

Therefore:
True

--------------------------------------------------

EXAMPLE 2:

Input:
str = "racecar"

Output:
True

Explanation:

Forward:
r a c e c a r

Backward:
r a c e c a r

Both are same.

Therefore:
True

--------------------------------------------------

EXAMPLE 3:

Input:
str = "hello"

Output:
False

Explanation:

Forward:
h e l l o

Backward:
o l l e h

Both are different.

Therefore:
False

--------------------------------------------------

HOW TO THINK?

We need to compare:

First character  <-> Last character

Second character <-> Second Last character

And so on.

If every pair matches:

Palindrome

If any pair mismatches:

Not Palindrome

--------------------------------------------------

OPTIMAL APPROACH:

Use Two Pointers.

left  = 0
right = string length - 1

Compare:

str[left]
str[right]

If equal:
Move both pointers.

left++
right--

Continue until left >= right

--------------------------------------------------

DRY RUN:

str = "madam"

Initial:

left = 0
right = 4

m == m

Move:

left = 1
right = 3

a == a

Move:

left = 2
right = 2

Loop Ends

Answer:
True

--------------------------------------------------

ANOTHER DRY RUN:

str = "hello"

Initial:

left = 0
right = 4

h != o

Mismatch Found

Answer:
False

--------------------------------------------------

PATTERN:

Two Pointers

--------------------------------------------------

INTERVIEW KEYWORDS:

- Palindrome
- Same Forward and Backward
- Mirror Comparison
- Symmetric String

--------------------------------------------------

TIME COMPLEXITY:

O(n)

Reason:

We traverse the string only once.

--------------------------------------------------

SPACE COMPLEXITY:

O(1)

Reason:

Only two variables are used:

left
right

--------------------------------------------------

MEMORY TRICK:

Palindrome

Left ↔ Right

If all pairs match
=> True

If any pair mismatches
=> False

==================================================
*/

int main()
{
    // Input string
    string str = "madam";

    // Left pointer starts from beginning
    int left = 0;

    // Right pointer starts from end
    int right = str.length() - 1;

    // Compare characters until pointers meet
    while(left < right)
    {
        // If characters do not match
        if(str[left] != str[right])
        {
            cout << "False";
            return 0;
        }

        // Move left pointer forward
        left++;

        // Move right pointer backward
        right--;
    }

    // All characters matched
    cout << "True";

    return 0;
}
