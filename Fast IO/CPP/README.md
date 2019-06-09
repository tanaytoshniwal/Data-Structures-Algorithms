# Fast I/O in CPP
*cin* and *cout* are slower as compared to *scanf* and *printf*.
To achieve similar speed with *cin* and *cout* we can use:
```
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
```

Also, **Use '\n' instead of endl**.