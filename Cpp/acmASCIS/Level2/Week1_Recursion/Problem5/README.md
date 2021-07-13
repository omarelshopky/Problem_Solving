# [Problem5](https://www.spoj.com/problems/CODEM5/en/) 
You are given an array of weights of n objects and your task is to select minimum number of objects whose sum of weights is exactly equals to some given k.

## Input
- Line 1 - Number of test cases T(<=10) followed by 2 lines for each test case
- Line 2 - Number of objects n(<=20) and total weight k(<=10^4)
- Line 3 - weights(<=10^4) of n objects(each separated by space)

## Output
Minimum number of objects whose weights sums to k.

## Example
**input**
> 2
> 5 9
> 10 9 4 3 5
> 3 7
> 1 2 3

**output**
> 1
> impossible
---
### Explanation:
For 1st case the two combinations are possible:
- (9),(4,5) hence minimum no of objects is 1

- For 2nd case there is no combination possible hence impossible.

## Category
* Recursion
