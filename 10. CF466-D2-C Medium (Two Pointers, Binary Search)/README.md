# [Codeforces Round 266 (Div. 2) C. Number of Ways](https://codeforces.com/contest/466/problem/C)

- time limit per test: 2 seconds
- memory limit per test: 256 megabytes

### Problem statement

You've got array a[1], a[2], ..., a[n], consisting of n integers. Count the number of ways to split all the elements of the array into three contiguous parts so that the sum of elements in each part is the same.

More formally, you need to find the number of such pairs of indices i, j (2 ≤ i ≤ j ≤ n - 1), that (picture).

### Input

The first line contains integer n (1 ≤ n ≤ 5·10^5), showing how many numbers are in the array. The second line contains n integers a[1], a[2], ..., a[n] (|a[i]| ≤  10^9) — the elements of array a.

### Output

Print a single integer — the number of ways to split the array into three parts with the same sum.

## Difficulty

- **Text** 3/10
- **Idea** 5/10
- **Code** 4/10

**Solution category:** Two pointers, Binary search

## Activity Log

- **18:45** start reading
- **18:47** start thinking
- **18:51** verifying idea
- **18:55** idea verified, start implementation thinking
- **18:57** start coding
- **19:06** finished coding, start testing
- **19:11** idea too brute force, thinking again 
- **19:18** stop
- **11:25** next day, continue
- **11:45** found optimisation, implemented, testing
- **11:50** got TLE, code mistake, copying vectors
- **11:55** should use reference, got AC
- **11:58** forgot i solved this problem 4 years ago, reviewing old solution, much faster with observation


## Log Analysis

1. Focus more on observation, solution candidated, even if found a solution, maybe you could O(n) instead of O(nlogn)
2. Verify idea better, and verify code implementation and hidden complexities better