# WEEK 10 (9 NOVEMBER - 15 NOVEMBER 2018)

## 601A THE TWO ROUTES
	1.Find which vehicle takes the least time to travel from town 1 to n and its time. The routes the train will take we have and traveling to each town will take an hour for train and bus.
	2.Use the BFS algorithm to solve this kind of problem. First traverse the path followed by the train and calculate the minimum time taken.
	3.Make the queue of all the possible path taken by the train and traversing it by its breadth, mark each one of the town it has already passed, and accumulated the time to reach it.
	4.If at any point the queue reaches town n, we will have the shortest time taken by the train.
	5.If by the end of the queue havent reach town n, its not possible for the train to reach town n.
	6.Repeat the same process for the bus.
	7.Finally compare which of its time taken is shortest or If ther is no way to reach town n.
	
Complexity = O (n+m)

[Problem](http://codeforces.com/problemset/problem/601/A)

[Solution](http://codeforces.com/contest/601/submission/45768849)

## 20C DJIKSTRA ?
	1.Print the shortest path from point 1 to n. A set of undirected path with own weight are given.
	2.Use the djikstra algorithm with priority queue to solve this problem.
	3.Start from 1, make a priority queue of all its edges storing their accumulated weight and vertex.
	4.then move to the next highest priority, which is the edge with least weight, and then update the priority queue with its edges.
	5.this will repeat until we reach the node n.
	6.After that print back the vertexes of the shortest path to n.

Complexity = O (nlogm)

[Problem](http://codeforces.com/problemset/problem/20/C)

[Solution](http://codeforces.com/contest/20/submission/45768877)
