#include <iostream>
using namespace std;

/*
==================================================
PROBLEM: Reverse String 
==================================================

QUESTION:

Given a string, reverse it.

--------------------------------------------------

EXAMPLE 1 :

Input:
"hello"

Output:
" olleh "

--------------------------------------------------

EXAMPLE 2:

Input:
"world"

Output:
"dlrow"

--------------------------------------------------

UNDERSTAND THE PROBLEM:

We need to reverse the characters
of the string.

Example:

h e l l o

After Reverse:

o l l e h

--------------------------------------------------

HOW TO THINK?

Take two pointers:

left  -> Start of string
right -> End of string

Swap both characters.

Move inward.

Example:

h e l l o
↑       ↑

Swap

o e l l h

Move pointers

o e l l h
  ↑   ↑

Swap

o l l e h

Done.

--------------------------------------------------

BRUTE FORCE APPROACH:

Create a new string.

Traverse original string from end
to beginning.

Add characters one by one.

Example:

hello

Start from:

o
l
l
e
h

Result:

olleh

Time Complexity:
O(n)

Space Complexity:
O(n)

--------------------------------------------------

OPTIMAL APPROACH:

Use Two Pointers.

left = 0
right = n - 1

Swap characters.

Move both pointers.

No extra string required.

Time Complexity:
O(n)

Space Complexity:
O(1)

--------------------------------------------------

DRY RUN:

str = "hello"

Initial:

left = 0
right = 4

h ↔ o

String becomes:

o e l l h

left = 1
right = 3

e ↔ l

String becomes:

o l l e h

left = 2
right = 2

Stop

Answer:

olleh

--------------------------------------------------

PATTERN:

Two Pointers

--------------------------------------------------

INTERVIEW KEYWORDS:

- Reverse String
- Reverse Array
- Swap Characters
- Reverse Order

--------------------------------------------------

MEMORY TRICK:

First ↔ Last

Second ↔ Second Last

Move inward

==================================================
*/

int main()
{
    // Input string
    string str = "hello";

    // Left pointer starts from beginning
    int left = 0;

    // Right pointer starts from end
    int right = str.length() - 1;

    // Continue until pointers meet
    while(left < right)
    {
        // Swap characters
        swap(str[left], str[right]);

        // Move left pointer forward
        left++;

        // Move right pointer backward
        right--;
    }

    // Print reversed string
    cout << "Reversed String = " << str << endl;

    return 0;
}
