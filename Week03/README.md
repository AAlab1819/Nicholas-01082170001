## WEEK 3 (14 SEPTEMBER 2018 - 20 SEPTEMBER 2018)
# 148A INSOMNIA CURE

1.first i make punchDrag, tailDrag, pawsDrag, momDrag, for each Dragon variable

2.then if there is variable that holds number '1', the whole DamageDragon is set to totalDragon we input

3.then for the else if, i modulus all the variable and if its equal to 0, i make DamageDragon++

4.cout the damageDragon


Worst case complexity : O(n)

Average case complexity : θ(n)

Best case complexity : Ω(1)


[Problem](http://codeforces.com/contest/148/problem/A)

[Solution](http://codeforces.com/contest/148/submission/43024443)

# 469A I WANNA BE THE GUY

1.first input the how many level

2.then set each array in level to 1 (for later)

3.then input how many level X can pass

4.input for the what level X can pass

5.then what level X can pass set to before array to 0 (passed)

6.do it same for Y 

7.at last make the bool solved = true

8.if there is number 1 in array set the solved = false

9.if solved true, i become the guy

10.if solved false , oh my keyboard


Worst case complexity : O(n)

Average case complexity : θ(n)

Best case complexity : Ω(n)


[Problem](http://codeforces.com/contest/469/problem/A)

[Solution](http://codeforces.com/contest/469/submission/43024437)

# 492B VANYA AND LANTERNS

1.for the radius i declare it as a double because the prolem want to decimal number

2.after i input the number i sort the n (lantern)

3.to find d i find it with arr[i] - arr[i-1] for loop until loop end to find which is the very longest gap

4.then d = d/2

5.i make if condition if the arr[0]>d , i set it d = arr[0]

6.the last if condition if l-arr[n-1] > d, i set it d = l-arr[n-1]

7.to make it more decimal (the output want 10 numbers behind the coma) make it with fixed<<setprecision(10) and output the d


Worst case complexity : O(n log(n))

Average case complexity : θ(n log(n))

Best case complexity : Ω(1)

[Problem](http://codeforces.com/problemset/problem/492/B)

[Solution](http://codeforces.com/contest/492/submission/43085189)
