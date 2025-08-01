# [Codeforces Round 381 (Div. 2) C. Alyona and mex](https://codeforces.com/contest/740/problem/C)

- time limit per test: 2 seconds
- memory limit per test: 256 megabytes

### Problem statement

Alyona's mother wants to present an array of n non-negative integers to Alyona. The array should be special.

Alyona is a capricious girl so after she gets the array, she inspects m of its subarrays. Subarray is a set of some subsequent elements of the array. The i-th subarray is described with two integers li and ri, and its elements are a[li], a[li + 1], ..., a[ri].

Alyona is going to find mex for each of the chosen subarrays. Among these m mexes the girl is going to find the smallest. She wants this minimum mex to be as large as possible.

You are to find an array a of n elements so that the minimum mex among those chosen by Alyona subarrays is as large as possible.

The mex of a set S is a minimum possible non-negative integer that is not in S.

### Input

The first line contains two integers n and m (1 ≤ n, m ≤ 105).

The next m lines contain information about the subarrays chosen by Alyona. The i-th of these lines contains two integers li and ri (1 ≤ li ≤ ri ≤ n), that describe the subarray a[li], a[li + 1], ..., a[ri].

### Output

In the first line print single integer — the maximum possible minimum mex.

In the second line print n integers — the array a. All the elements in a should be between 0 and 109.

It is guaranteed that there is an optimal answer in which all the elements in a are between 0 and 109.

If there are multiple solutions, print any of them.

## Difficulty

- **Text** 6/10
- **Idea** 5/10
- **Code** 2/10

**Solution category:** Greedy

## Activity Log

- **12:00** start reading
- **12:08** start thinking
distracted
- **12:40** continue thinking
- **12:44** verifying idea
- **12:47** implementation thinking
- **12:49** start coding
- **12:54** finished coding, start testing
- **12:55** finished revising and testing, submitted, got AC

## Log Analysis

1. Try to work in isolated enviorment