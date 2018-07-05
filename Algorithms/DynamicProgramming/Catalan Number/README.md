# Catalan Number
Catalan numbers are a sequence of natural numbers that occurs in many interesting counting problems like following.

- Count the number of expressions containing n pairs of parentheses which are correctly matched. For n = 3, possible expressions are ((())), ()(()), ()()(), (())(), (()()).

- Count the number of possible Binary Search Trees with n keys (See this)

- Count the number of full binary trees (A rooted binary tree is full if every vertex has either two children or no children) with n+1 leaves.

## Observations

Using recursion on input number _**25**_
```
    Input: 15
    Output: 1 1 2 5 14 42 132 429 1430 4862 16796 58786 208012 742900 2674440

    time: 816.8413639068604ms

```

Using dynamic programming on same input _**25**_
```
    Input: 15
    Output: 1 1 2 5 14 42 132 429 1430 4862 16796 58786 208012 742900 2674440

    time: 0.6663799285888672ms
```
