# Competitive Programming Progress Tracker

This repo is for tracking my progress and improvement in:
- Problem solving
- Algorithms
- Data Structures
- Competitive Programming

## Folder structure

Solved problem folders structure: `[Order number]. [Platform][Problem ID] [Diffficulty] (Tags)`
- **Order number:** The order in which it was solved.
- **Platform:** Codeforces, Leetcode, etc.
- **Problem ID:** Identifier of a problem.
- **Difficulty:** General difficulty - Easy, Medium, Hard.
- **Tags:** Used algorithms, data structures and techniques to solve a problem.

## Thought process logging and discipline

During solving I'm keeping a log of my thoughts, timestamping phases of solving, so I can reflect and analyse my thoughts, finding mistakes to know what to improve.

While trying to solve problems, trying to keep my thoughts disciplined following a created structure for every phase of solving:

- Reading: Relax, Dont rush, Check time & Monitor progress
    1. Read slowly and fully understand each statement.
    2. Number all important details on paper.
    3. Write all constraints beside on paper (All constraints are important).
    4. Trace samples as long as they are traceable.
    5. Reread the problem statement once for getting the full picture.
- Thinking:
    - **Brainstorm** first, don't "dive" on one idea, rank ideas and start with best one.
    - Try thinking **Concretely** (examples), **Symbolically** (x, n, variables, ...), **Pictorially** (draw elements and their relations).
    - Focus on **Problem constraints**, understand them, get hints from them.
    - Use **Abstracting** (Generalizing) to maybe get an idea for algorithm or data structure that sounds familiar with that generalized problem.
    - Solve **Reverse problem** (instead of x, try 1 - x, ...).
    - Problem simplification (usually when stuck):
        - **Decompose** problem into subproblems.
        - Try **Special case** (Simpler version of problem), then update to general.
        - Make **Assumption** like you know one thing you dont, and then try to solve.
    - Solve **Incrementally**, solve while inputing (solved for first m? how to update for m+1).
    - **Problem domain reinterpretation**, view variables as points in eucledian space, or points as graph nodes, etc.
    - Think about **Output**, all solution candidates, all possible options output can be, narrow it down, it can give you some hint what algorithm you need.
    - Search for **Observations** by tracing test cases, from smaller to bigger ones, discover properties and patterns.
    - Miscellaneous:
        - Try **Brute force**, often solution is that + some observation / code optimisation.
        - Maybe there is some possible **Precomputation** to be done.
- Verification:
    1. Test cases verification (ones in statement, boundries, yours).
    2. Time & Memory.
    3. Full logic & intuitive revision.
    4. Correctness, at least good intuitive - assumptions validations.
    5. In case of:
        - Recursion: Check depth.
        - (*+^) operations: Check overflow.
        - Double and '/': Check precision.
- Implementation:
    - First have a full vision of code:
        1. Think about code blocks, the "repeated" ones, and the code order (Build mental model).
        2. Think about little different ways to do it (Optimize logic and code).
        3. For every block out of your comfort zone, write full code on paper (Forcing to be precise and clear, memorizing and internalize structure).
    - After implementation:
        1. Revise code order & logic, make sure it matches what you intended.
        2. Challenge every block of code, never read in a way that drops even ONE character.
        3. Think how this block of code may fail, think corner cases of it.
        4. Revise data types, especially in overflow problems.
- Testing:
    - Test special cases and boundaries is a must.
- Accepted? Check other coders available code for shorter and faster ways. Check editorials for other approaches.