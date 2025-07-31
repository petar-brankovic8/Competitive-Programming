# [Codeforces Round 327 (Div. 2) C. Median Smoothing](https://codeforces.com/contest/591/problem/C)

- time limit per test: 2 seconds
- memory limit per test: 256 megabytes

### Problem statement

A schoolboy named Vasya loves reading books on programming and mathematics. He has recently read an encyclopedia article that described the method of median smoothing (or median filter) and its many applications in science and engineering. Vasya liked the idea of the method very much, and he decided to try it in practice.

Applying the simplest variant of median smoothing to the sequence of numbers a1, a2, ..., an will result a new sequence b1, b2, ..., bn obtained by the following algorithm:

    b1 = a1, bn = an, that is, the first and the last number of the new sequence match the corresponding numbers of the original sequence.
    For i = 2, ..., n - 1 value bi is equal to the median of three values ai - 1, ai and ai + 1. 

The median of a set of three numbers is the number that goes on the second place, when these three numbers are written in the non-decreasing order. For example, the median of the set 5, 1, 2 is number 2, and the median of set 1, 0, 1 is equal to 1.

In order to make the task easier, Vasya decided to apply the method to sequences consisting of zeros and ones only.

Having made the procedure once, Vasya looked at the resulting sequence and thought: what if I apply the algorithm to it once again, and then apply it to the next result, and so on? Vasya tried a couple of examples and found out that after some number of median smoothing algorithm applications the sequence can stop changing. We say that the sequence is stable, if it does not change when the median smoothing is applied to it.

Now Vasya wonders, whether the sequence always eventually becomes stable. He asks you to write a program that, given a sequence of zeros and ones, will determine whether it ever becomes stable. Moreover, if it ever becomes stable, then you should determine what will it look like and how many times one needs to apply the median smoothing algorithm to initial sequence in order to obtain a stable one.

### Input

The first input line of the input contains a single integer n (3 ≤ n ≤ 500 000) — the length of the initial sequence.

The next line contains n integers a1, a2, ..., an (ai = 0 or ai = 1), giving the initial sequence itself.

### Output

If the sequence will never become stable, print a single number  - 1.

Otherwise, first print a single integer — the minimum number of times one needs to apply the median smoothing algorithm to the initial sequence before it becomes is stable. In the second line print n numbers separated by a space  — the resulting sequence itself.

## Difficulty

- **Text** 5/10
- **Idea** 5/10
- **Code** 5/10

**Solution category:** Two pointers

## Activity Log

- **11:23** start reading
- **11:27** start thinking
- **11:55** finished thinking, verifying idea
- **11:59** finished verifying, start thinking implementation
distracted
- **12:05** continue thinking implementation
- **12:14** start implementing
stop
next day
- **12:02** continue implementing
distracted
- **13:30** finished coding, testing, submitted got AC

## Log Analysis

1. Maybe try solving more concrete examples in the beginning of thinking phase to find observations faster