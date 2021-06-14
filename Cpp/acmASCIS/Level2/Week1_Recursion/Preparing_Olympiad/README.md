# [Preparing Olympiad](https://vjudge.net/problem/CodeForces-550B/origin) 
You have n problems. You have estimated the difficulty of the i-th one as integer ci. Now you want to prepare a problemset for a contest, using some of the problems you've made.

A problemset for the contest must consist of at least two problems. You think that the total difficulty of the problems of the contest must be at least l and at most r. Also, you think that the difference between difficulties of the easiest and the hardest of the chosen problems must be at least x.

Find the number of ways to choose a problemset for the contest.


## Input
The first line contains four integers n, l, r, x (1 ≤ n ≤ 15, 1 ≤ l ≤ r ≤ 10^9, 1 ≤ x ≤ 10^6) — the number of problems you have, the minimum and maximum value of total difficulty of the problemset and the minimum difference in difficulty between the hardest problem in the pack and the easiest one, respectively.

The second line contains n integers c1, c2, ..., cn (1 ≤ ci ≤ 10^6) — the difficulty of each problem.

## Output
Print the number of ways to choose a suitable problemset for the contest.


## Example
**input**
> 3 5 6 1
> 1 2 3

**output**
> 2

---
**input**
> 4 40 50 10
> 10 20 30 25

**output**
> 2

---
**input**
> 5 25 35 10
> 10 10 20 10 20

**output**
> 6



## Category
* Recursion
