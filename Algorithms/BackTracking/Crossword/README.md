# Crossword

Provided a crossword of 10*10 grid. The grid contains '+' or '-' as its cell values. Now, you are also provided with word list which needs to placed accurately in the grid. Cells marked with '-' are to be filled with word list.

**For example**: The following is an example for the input crossword grid and the word list.
```
    +-++++++++
    +-++-+++++
    +-------++
    +-++-+++++
    +-++-+++++
    +-++-+++++
    ++++-+++++
    ++++-+++++
    ++++++++++
    ----------
    CALIFORNIA;NIGERIA;CANADA;TELAVIV
```
**Output for the given input should be:**
```
    +C++++++++
    +A++T+++++
    +NIGERIA++
    +A++L+++++
    +D++A+++++
    +A++V+++++
    ++++I+++++
    ++++V+++++
    ++++++++++
    CALIFORNIA
```
**Note:** We have provided such test cases that there is only one solution for the given input.

### Input format:
The first 10 lines of input contains crossword. Each of 10 lines have a character array of size 10. Input characters are either '+' or '-'.
Next line of input contains the word list, in which each word is separated by ';'. 
### Output format:
Print the crossword grid, after placing the words of word list in '-' cells.  
### Sample Test Cases:
Sample Input 1:
```
    +-++++++++
    +-++-+++++
    +-------++
    +-++-+++++
    +-++-+++++
    +-++-+++++
    ++++-+++++
    ++++-+++++
    ++++++++++
    ----------
    CALIFORNIA;NIGERIA;CANADA;TELAVIV
```
Sample Output 1:
```
    +C++++++++
    +A++T+++++
    +NIGERIA++
    +A++L+++++
    +D++A+++++
    +A++V+++++
    ++++I+++++
    ++++V+++++
    ++++++++++
    CALIFORNIA
```