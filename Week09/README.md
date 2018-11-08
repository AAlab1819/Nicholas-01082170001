# WEEK 9 (2 NOVEMBER - 8 NOVEMBER 2018)
## 10130 SuperSale
	1. find the good value that fully criteria find the value within not more than maxWeight each person can bring
	2. with the algorithm ( arr[k] = max(arr[k],arr[k - itemWeight[j]] + itemPrice[j]); ) *nested for loop to access the array
	3. cout the total how much weight can each person bring
	
Complexity : O (t.n.mw)

## 147 Dollar
	1. example :	$5.00 = 500 cents
			$2.00 = 200 cents
			$7.80 = 780 cents
			$300.00 = 30000 cents
	2. find how many ways the coins can be made and that is the answer
	3. put all the ways the coin to an array. then use that calculate count.
	4. whenever we can divide the amount with a specific coin we increase the count.
	5. we need calculate for all the specific coins
	6. with the following algorithm we can find how many ways to get the coins separate
	
	( for(i = 0; i < 11; ++i){
           for(j = coins[i]; j < N; ++j)	--- N = 30002 ---
              c[j] += c[j - coins[i]];
           }
	)

Complexity : O (n^2)
