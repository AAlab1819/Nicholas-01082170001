# WEEK 7 (19 - 25 OCTOBER 2018)

## 946A PARTITION
	1.input a number and input that number into an arrA
	2.if the number is positive, put the number into arrB, and make totB for calculation the positive num
	3.if the number is negative, put the number into arrC, and make totC for calculation the negative num
	4.finally just totB - totC

Complexity : O(n)

[Problem](http://codeforces.com/contest/946/problem/A)

[Solution](http://codeforces.com/contest/946/submission/44721367)

## 978B FILE NAME
	1.input the string
	2.string can be read as an array
	3.if we found multiple x 3 times or more, set the totX++, and if the totX >= 3, set the delX++
	4.if we found i , set the totX into 0 (reset to 0)
	5.finally just cout the delX
	
Complexity : O(n)

[Problem](http://codeforces.com/contest/978/problem/B)

[Solution](http://codeforces.com/contest/978/submission/44757389)

## 731B COUPONS AND DISCOUNTS
	1.iterating the days and check the number of team that day is odd
	2.all pizzas in a day can be bought using discounts, unless the teams is odd which then a coupon can be usedd.
	3.if a coupon is used in the previous day then a pizza will be minus from today
	3.if there is an odd number of teams and no pizza is need in the next day, then cannot to buy pizza using only discount and coupons.
	
Complexity : O(n)

[Problem](http://codeforces.com/contest/731/problem/B)

[Solution](http://codeforces.com/contest/731/submission/44757569)
