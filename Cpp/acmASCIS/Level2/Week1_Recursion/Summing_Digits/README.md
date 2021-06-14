# [Summing Digits](https://vjudge.net/problem/UVA-11332/origin) 
For a positive integer n, let f(n) denote the
sum of the digits of n when represented in base
10. It is easy to see that the sequence of numbers n, f(n), f(f(n)), f(f(f(n))), . . . eventually
becomes a single digit number that repeats forever. Let this single digit be denoted g(n).
For example, consider n = 1234567892.
Then:
* f(n) = 1+2+3+4+5+6+7+8+9+2 = 47
* f(f(n)) = 4 + 7 = 11
* f(f(f(n))) = 1 + 1 = 2
Therefore, g(1234567892) = 2.

## Input
Each line of input contains a single positive integer n at most 2,000,000,000. Input is terminated
by n = 0 which should not be processed.

## Output
For each such integer, you are to output a single
line containing g(n).

## Constraints
* 1<=T<=1000
* 0<=a,b,n<=10^9

## Example
**input**
> 2
> 11
> 47
> 1234567892
> 0

**output**
> 2
> 2
> 2
> 2

## Category
* Recursion
