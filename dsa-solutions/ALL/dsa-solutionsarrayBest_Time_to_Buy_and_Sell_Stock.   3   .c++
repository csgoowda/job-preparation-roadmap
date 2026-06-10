#include <iostream>
#include <vector>
using namespace std;

/*
==================================================
PROBLEM: Best Time to Buy and Sell Stock
==================================================

QUESTION:

You are given an array prices where prices[i]
is the price of a stock on the i-th day.

You want to maximize your profit by choosing
a single day to buy one stock and choosing
a different future day to sell that stock.

Return the maximum profit you can achieve.

If no profit can be made, return 0.


EXAMPLE 1:

Input:
prices = [7,1,5,3,6,4]

Output:
5

Explanation:
Buy at price 1
Sell at price 6

Profit = 6 - 1 = 5


EXAMPLE 2:

Input:
prices = [7,6,4,3,1]

Output:
0

Explanation:
Prices keep decreasing.
No profit can be made.


PATTERN:
Minimum Price Tracking


BRUTE FORCE:

Check every buy day and every sell day.

Time Complexity:
O(n²)

Space Complexity:
O(1)


OPTIMAL APPROACH:

1. Keep track of minimum price seen so far.
2. Calculate profit for each day.
3. Update maximum profit if current profit
   is greater.

Time Complexity:
O(n)

Space Complexity:
O(1)


DRY RUN:

prices = [7,1,5,3,6,4]

Initial:
minPrice = 7
maxProfit = 0

Day 2:
price = 1

minPrice = 1

profit = 1 - 1 = 0

maxProfit = 0


Day 3:
price = 5

profit = 5 - 1 = 4

maxProfit = 4


Day 4:
price = 3

profit = 3 - 1 = 2

maxProfit = 4


Day 5:
price = 6

profit = 6 - 1 = 5

maxProfit = 5


Day 6:
price = 4

profit = 4 - 1 = 3

maxProfit = 5


Final Answer:
5


INTERVIEW KEYWORDS:

- Buy Stock
- Sell Stock
- Maximum Profit
- Future Day
- One Transaction

INTERVIEW TRICK:

Keep track of the minimum price seen so far
and calculate profit at every step.

==================================================
*/

int main()
{
    // Input stock prices
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    // Store minimum price seen so far
    int minPrice = prices[0];

    // Store maximum profit
    int maxProfit = 0;

    // Traverse the array
    for(int i = 1; i < prices.size(); i++)
    {
        // Update minimum price if current price is smaller
        if(prices[i] < minPrice)
        {
            minPrice = prices[i];
        }

        // Calculate profit if sold today
        int profit = prices[i] - minPrice;

        // Update maximum profit
        if(profit > maxProfit)
        {
            maxProfit = profit;
        }
    }

    // Print answer
    cout << "Maximum Profit = " << maxProfit << endl;

    return 0;
}
