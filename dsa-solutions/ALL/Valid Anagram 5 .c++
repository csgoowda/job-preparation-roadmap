#include <iostream>
#include <vector>
using namespace std;

/*
==================================================
PROBLEM: Valid Anagram
==================================================

QUESTION:

Given two strings s and t,
return true if t is an anagram of s,
otherwise return false.

An Anagram means both strings contain
the same characters with the same frequency.

--------------------------------------------------

EXAMPLE 1:

Input:
s = "anagram"
t = "nagaram"

Output:
True

Explanation:

anagram

a = 3
n = 1
g = 1
r = 1
m = 1

nagaram

a = 3
n = 1
g = 1
r = 1
m = 1

Both strings have same characters
with same frequency.

Therefore:
True

--------------------------------------------------

EXAMPLE 2:

Input:
s = "rat"
t = "car"

Output:
False

Explanation:

rat

r = 1
a = 1
t = 1

car

c = 1
a = 1
r = 1

Characters are different.

Therefore:
False

--------------------------------------------------

HOW TO THINK?

Step 1:
Check length.

If lengths are different,
they cannot be anagrams.

Example:

abc
abcd

Answer:
False

--------------------------------------------------

OPTIMAL APPROACH:

Create a frequency array of size 26.

Why 26?

Because there are 26 lowercase letters:
a to z

Step 1:
Count characters of first string.

Step 2:
Subtract characters of second string.

Step 3:
Check frequency array.

If every value becomes 0,
both strings have same frequency.

Therefore:
Anagram

--------------------------------------------------

DRY RUN:

s = "anagram"
t = "nagaram"

Frequency Array Initially:

[a=0,b=0,c=0....]

After Processing s:

a = 3
n = 1
g = 1
r = 1
m = 1

After Processing t:

a = 0
n = 0
g = 0
r = 0
m = 0

All frequencies become 0.

Answer:
True

--------------------------------------------------

PATTERN:

Frequency Array

--------------------------------------------------

INTERVIEW KEYWORDS:

- Anagram
- Same Characters
- Same Frequency
- Rearrange String

--------------------------------------------------

TIME COMPLEXITY:

O(n)

Reason:
We traverse both strings once.

--------------------------------------------------

SPACE COMPLEXITY:

O(1)

Reason:
Frequency array size is fixed (26).

--------------------------------------------------

MEMORY TRICK:

First String  -> ++

Second String -> --

Everything becomes 0

=> Anagram

==================================================
*/

int main()
{
    // Input strings
    string s = "anagram";
    string t = "nagaram";

    // Length check
    if(s.length() != t.length())
    {
        cout << "False";
        return 0;
    }

    // Frequency array for a-z
    vector<int> freq(26, 0);

    // Count characters from first string
    for(char ch : s)
    {
        freq[ch - 'a']++;
    }

    // Remove characters using second string
    for(char ch : t)
    {
        freq[ch - 'a']--;
    }

    // Check if every frequency is 0
    for(int count : freq)
    {
        if(count != 0)
        {
            cout << "False";
            return 0;
        }
    }

    // All frequencies are 0
    cout << "True";

    return 0;
}
