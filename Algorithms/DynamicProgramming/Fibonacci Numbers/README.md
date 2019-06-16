# Fibonacci numbers
The Fibonacci numbers are the numbers in the following integer sequence.

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..

In mathematical terms, the sequence Fn of Fibonacci numbers is defined by the recurrence relation

    Fn = Fn-1 + Fn-2
with seed values

    F0 = 0 and F1 = 1.


## Observations

Using recursion on input number _**25**_
```
    Input: 25
    Output: 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 10946 17711 28657 46368

    time: 77.29029655456543ms

```

Using dynamic programming on same input _**25**_
```
    Input: 25
    Output: 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 10946 17711 28657 46368

    time: 0.27751922607421875ms
```
