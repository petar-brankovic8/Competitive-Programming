# [Codeforces Round 422 (Div. 2) C. Hacker, pack your bags!](https://codeforces.com/contest/822/problem/C)

- time limit per test: 2 seconds  
- memory limit per test: 256 megabytes

### Problem statement

It's well known that the best way to distract from something is to do one's favourite thing. Job is such a thing for Leha.

So the hacker began to work hard in order to get rid of boredom. It means that Leha began to hack computers all over the world. For such zeal boss gave the hacker a vacation of exactly x days. You know the majority of people prefer to go somewhere for a vacation, so Leha immediately went to the travel agency. There he found out that n vouchers left. i-th voucher is characterized by three integers li, ri, costi — day of departure from Vičkopolis, day of arriving back in Vičkopolis and cost of the voucher correspondingly. The duration of the i-th voucher is a value ri - li + 1.

At the same time Leha wants to split his own vocation into two parts. Besides he wants to spend as little money as possible. Formally Leha wants to choose exactly two vouchers i and j (i ≠ j) so that they don't intersect, sum of their durations is exactly x and their total cost is as minimal as possible. Two vouchers i and j don't intersect if only at least one of the following conditions is fulfilled: ri < lj or rj < li.

Help Leha to choose the necessary vouchers!

### Input

The first line contains two integers n and x (2 ≤ n, x ≤ 2·10^5) — the number of vouchers in the travel agency and the duration of Leha's vacation correspondingly.

Each of the next n lines contains three integers li, ri and costi (1 ≤ li ≤ ri ≤ 2·10^5, 1 ≤ costi ≤ 10^9) — description of the voucher.

### Output

Print a single integer — a minimal amount of money that Leha will spend, or print  - 1 if it's impossible to choose two disjoint vouchers with the total duration exactly x.

## Difficulty

- **Text** 2/10
- **Idea** 5/10
- **Code** 4/10

**Solution category:** Two Pointers, Sorting, Bucketing

## Activity log

- **18:24** start reading
- **18:28** start thinking
- **18:30** diving on buckets and sparse table idea
- **18:34** reading to remember sparse tables
- **18:36** no sparse tables, brainstorm again
- **18:37** sorting each bucket by cost and two pointers idea
- **18:40** no sorting, thinking about sub problem for solving a single bucket
- **distracted**
- **18:57** again sparse table idea for finding a minimum for a given range
- **19:02** verifying that idea
- **distracted**
- **19:21** no sparse tables, maybe prefix/suffix array?
- **19:24** no prefix/suffix, maybe two pointers?
- **19:26** sort each bucket by l and r value, and then do two pointers
- **stop**
- **09:21** verifying that idea
- **09:25** idea verified, implementation thinking
- **distracted** 
- **10:40** start coding
- **11:00** reading some c++ stuff for implementation
- **11:30** finished coding, start checking code
- **11:55** finished checking and fixing code, start testing
- **12:00** found boundry case mistake
- **12:03** thinking on solution for this mistake
- **12:11** implemented solution, submitted got WA
- **distracted**
- **12:35** start finding mistake
- **12:49** found mistake in traversing and erasing elements in unordered_set
- **stop**
- **18h** found another mistake, by reading editorial, in implementing two pointers, fixed and got AC

## Log Analysis

1. First time tried thinking discipline and logging activity, happy with the way it works.
2. Focus more on solution candidates that are possible, later think about maximizing, minimizing, etc.
3. Think a little more about parts of code you are not 100% confident about
4. Try to picture on examples while testing how your idea works



