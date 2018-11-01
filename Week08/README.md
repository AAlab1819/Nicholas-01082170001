# WEEK 8 (26 OCTOBER - 1 NOVEMBER 2018)

## 433B KURIYAMA MIRAI'S STONES
	1.first scenario is the sum will be taken from the unordered list os stone
	2.second scenario is th esum will be taken from the list sorted in an ascending order
	3.add the first scenario with the second scenario (cummulative)
	4.use the list we can find the sum within by substract the cummulative sum at the right and the left

Complexity : O (n(log n))

[Problem](http://codeforces.com/contest/433/problem/B)

[Solution](http://codeforces.com/contest/433/submission/45170841)

## 913C PARTY LEMONADE
	1.first make the list from the given list.
	2.if the price of 2 (1L) bottles is cheaper than 1 (1L) bottle, then buy the 2 (1L) bottle, because of that we will change the price of c[i] to c[i-1].
	3.the price at the end will be the most problem.
	4.we can find the cheaper alternatives with enough L, to do that we will compare the previous price and the current price.
	5.current price = sum(previous sum + bottles needed x price) + L (liter of lemonade needed left after subtracting L of bottles needed) x price.
	6.Bottles needed is the maximum amount of bottles we can use to cover as much L of lemonade that is left with condition not more than L.

Complexity : O (n)

[Problem](http://codeforces.com/contest/913/problem/C)

[Solution](http://codeforces.com/contest/913/submission/45171072)
