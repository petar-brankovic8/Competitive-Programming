# [Codeforces Round 243 (Div. 2) C. Sereja and Swaps](https://codeforces.com/contest/426/problem/C)

- time limit per test: 1 second
- memory limit per test: 256 megabytes

### Problem statement


As usual, Sereja has array a, its elements are integers: a[1], a[2], ..., a[n]. Let's introduce notation:

A swap operation is the following sequence of actions:

    choose two indexes i, j (i ≠ j);
    perform assignments tmp = a[i], a[i] = a[j], a[j] = tmp. 

What maximum value of function m(a) can Sereja get if he is allowed to perform at most k swap operations?

### Input

The first line contains two integers n and k (1 ≤ n ≤ 200; 1 ≤ k ≤ 10). The next line contains n integers a[1], a[2], ..., a[n] ( - 1000 ≤ a[i] ≤ 1000).

### Output

In a single line print the maximum value of m(a) that Sereja can get if he is allowed to perform at most k swap operations.

## Difficulty

- **Text** 2/10
- **Idea** 4/10
- **Code** 3/10

**Solution category:** Brute force, Greedy

## Activity Log

- **05:54** start reading
- **05:57** trace samples
- **05:59** start thinking
- **06:14** stoping brainstorm, trying thinking concretely
- **06:17** dive in to idea of expending inital best segment
- **06:29** thinking about most basic brute force, and then start from that
- **06:32** got a good idea, but brain is fatigued, reading editorial
- **06:35** stop
- **09:38** next day, start coding
- **09:57** finished coding and testing, got AC

## Log Analysis

1. Use constraints to solve problem faster
2. Don't dive in ultra optimising ideas