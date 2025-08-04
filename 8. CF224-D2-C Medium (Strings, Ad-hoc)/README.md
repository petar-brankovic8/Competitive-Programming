# [Codeforces Round 138 (Div. 2) C. Bracket Sequence](x)

- time limit per test: 2 seconds
- memory limit per test: 256 megabytes

### Problem statement

A bracket sequence is a string, containing only characters "(", ")", "[" and "]".

A correct bracket sequence is a bracket sequence that can be transformed into a correct arithmetic expression by inserting characters "1" and "+" between the original characters of the sequence. For example, bracket sequences "()[]", "([])" are correct (the resulting expressions are: "(1)+[1]", "([1+1]+1)"), and "](" and "[" are not. The empty string is a correct bracket sequence by definition.

A substring s[l... r] (1 ≤ l ≤ r ≤ |s|) of string s = s1s2... s|s| (where |s| is the length of string s) is the string slsl + 1... sr. The empty string is a substring of any string by definition.

You are given a bracket sequence, not necessarily correct. Find its substring which is a correct bracket sequence and contains as many opening square brackets «[» as possible.

### Input

The first and the only line contains the bracket sequence as a string, consisting only of characters "(", ")", "[" and "]". It is guaranteed that the string is non-empty and its length doesn't exceed 10^5 characters.

### Output

In the first line print a single integer — the number of brackets «[» in the required bracket sequence. In the second line print the optimal sequence. If there are more than one optimal solutions print any of them.

## Difficulty

- **Text** 2/10
- **Idea** 5/10
- **Code** 6/10

**Solution category:** Strings, Ad-hoc

## Activity Log

- **07:09** start reading
- **07:12** start thinking
- **07:20** idea verification
- **07:27** think implementation
distracted
- **07:32** start coding
- **07:45** found a loop in idea, thinking
stop
next day
- **07:22** fix loop, continue coding
- **08:22** finished coding, testing
- **08:28** finished testing, submitting got AC

## Log Analysis

1. Wasted a lot of time on nothing thinking the idea thoroughly in the start
2. Then tried a lot of quick fixes that had not enough in depth thinking to them
3. Think more, then code