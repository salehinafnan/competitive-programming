# Competitive Programming

My solutions to 190+ competitive programming problems in C++, mostly from CodeChef contests and practice sets, plus a handful from Codeforces, SPOJ and LightOJ.

| Judge                    | Solutions |
| ------------------------ | --------- |
| [CodeChef](codechef)     | 183       |
| [Codeforces](codeforces) | 7         |
| [LightOJ](lightoj)       | 2         |
| [SPOJ](spoj)             | 1         |

## Selected problems

Most of the CodeChef problems are beginner-level implementation and math. These are the ones where the approach matters most:

| Problem                                                                        | Technique                                                                           |
| ------------------------------------------------------------------------------ | ----------------------------------------------------------------------------------- |
| [Prime Generator](codechef/Prime_Generator.cpp)                                | Segmented sieve: primes in ranges up to 10^9 using only the base primes up to √10^9 |
| [Aggressive Cows (SPOJ)](spoj/AGGRCOW_Aggressive_Cows.cpp)                     | Binary search on the answer with a greedy feasibility check                         |
| [Guilty Prince (LightOJ 1012)](lightoj/1012_Guilty_Prince.cpp)                 | DFS flood fill on a grid                                                            |
| [Triangle Partitioning (LightOJ 1043)](lightoj/1043_Triangle_Partitioning.cpp) | Geometry: similar triangles and area ratios                                         |
| [DZY Loves Physics (CF 444A)](codeforces/444A_DZY_Loves_Physics.cpp)           | Proof that the densest subgraph is always a single edge                             |
| [Find The Array (CF 1463B)](codeforces/1463B_Find_The_Array.cpp)               | Constructive: round every value down to a power of two                              |
| [Spiritual Chef](codechef/Spiritual_Chef.cpp)                                  | Geometric series mod m with fast exponentiation and Fermat's modular inverse        |
| [Danny Wants To Know](codechef/Danny_Wants_To_Know.cpp)                        | Prefix sums for O(1) range queries                                                  |
| [Hotel Bytelandia](codechef/Hotel_Bytelandia.cpp)                              | Maximum overlap of intervals                                                        |
| [Smart Phone](codechef/Smart_Phone.cpp)                                        | Sorting + greedy to maximise revenue                                                |
| [Ambiguous Permutations](codechef/Ambiguous_Permutations.cpp)                  | Inverse permutation                                                                 |
| [Chef and Dolls](codechef/Chef_and_Dolls.cpp)                                  | XOR to find the unpaired element                                                    |
| [The Lead Game](codechef/The_Lead_Game.cpp)                                    | Running cumulative lead                                                             |

## Structure

```
codechef/      CodeChef problems, file named after the problem title
codeforces/    <contest><index>_<title>.cpp, e.g. 1426A_Floor_Number.cpp
lightoj/       <problem id>_<title>.cpp
spoj/          <problem code>_<title>.cpp
practice/      small warm-up programs
```

Codeforces, SPOJ and LightOJ files start with a comment linking to the original problem statement.

## Running a solution

Every file is a standalone program that reads from standard input and writes to standard output, as the judges expect. Solutions use `<bits/stdc++.h>`, so compile with GCC (on macOS, install `g++` through Homebrew):

```bash
g++ -std=c++17 -O2 codeforces/1426A_Floor_Number.cpp -o solution
printf "4\n7 3\n1 5\n22 5\n987 13\n" | ./solution
# 3
# 1
# 5
# 77
```

A GitHub Actions workflow compiles every solution on each push.

## Code style

- `while (t--)` test-case loops, with the per-test logic inline or in a `solve()` function
- `ios::sync_with_stdio(false); cin.tie(nullptr);` for fast I/O where input is large
- Formatted with clang-format (Microsoft style: Allman braces, 4-space indent)
