#include <iostream>
#include <vector>
using namespace std;

/*
==================================================
PROBLEM: Longest Common Prefix
==================================================

QUESTION:

Write a function to find the longest
common prefix string among an array of strings.

If there is no common prefix,
return an empty string "".

--------------------------------------------------

EXAMPLE 1:

Input:

["flower","flow","flight"]

Output:

"fl"

Explanation:

flower
flow
flight

Compare from beginning:

f ✓
l ✓
o ✗

Stop at mismatch.

Answer:

fl

--------------------------------------------------

EXAMPLE 2:

Input:

["dog","racecar","car"]

Output:

""

Explanation:

d != r

No common prefix.

Answer:

Empty String

--------------------------------------------------

UNDERSTAND THE PROBLEM:

We need to find common characters
from the START of every string.

Important:

Prefix means beginning part.

Example:

flower

Prefixes:

f
fl
flo
flow
flowe
flower

--------------------------------------------------

HOW TO THINK?

Take the first string as reference.

Example:

flower

Check each character with
all other strings.

Index 0:

f == f == f

Common

Index 1:

l == l == l

Common

Index 2:

o == o != i

Mismatch Found

Stop

Answer:

fl

--------------------------------------------------

BRUTE FORCE APPROACH:

Take first string.

Check every character position.

Compare with all strings.

If mismatch found,
stop immediately.

Time Complexity:

O(n × m)

n = Number of Strings
m = Length of Shortest String

Space Complexity:

O(1)

--------------------------------------------------

DRY RUN:

Input:

["flower","flow","flight"]

answer = ""

i = 0

Current Character = 'f'

flower -> f
flow   -> f
flight -> f

All Same

answer = "f"

--------------------------------------------------

i = 1

Current Character = 'l'

flower -> l
flow   -> l
flight -> l

All Same

answer = "fl"

--------------------------------------------------

i = 2

Current Character = 'o'

flower -> o
flow   -> o
flight -> i

Mismatch

Stop

Final Answer:

fl

--------------------------------------------------

PATTERN:

String Comparison

--------------------------------------------------

INTERVIEW KEYWORDS:

- Longest Common Prefix
- Common Starting Characters
- Matching Beginning
- Prefix

--------------------------------------------------

MEMORY TRICK:

Take First String

Check Character By Character

Compare With All Strings

Mismatch → Stop

Match → Add To Answer

==================================================
*/

int main()
{
    // Input strings
    vector<string> strs =
    {
        "flower",
        "flow",
        "flight"
    };

    // Store final answer
    string answer = "";

    // Traverse characters of first string
    for(int i = 0; i < strs[0].length(); i++)
    {
        // Current character from first string
        char currentChar = strs[0][i];

        // Assume all strings match
        bool same = true;

        // Compare with remaining strings
        for(int j = 1; j < strs.size(); j++)
        {
            // If current index exceeds string length
            if(i >= strs[j].length())
            {
                same = false;
                break;
            }

            // Character mismatch found
            if(strs[j][i] != currentChar)
            {
                same = false;
                break;
            }
        }

        // Stop if mismatch found
        if(!same)
        {
            break;
        }

        // Add matching character to answer
        answer += currentChar;
    }

    // Print answer
    cout << "Longest Common Prefix = " << answer << endl;

    return 0;
}
