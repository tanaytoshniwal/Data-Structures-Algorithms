# Correct a BST

Given a Binary Search Tree(BST), with nodes violating the BST rules(Not in a given order).

#### Approach 1:
Traverse the BST (InOrder) and store all the elements in an array.
Inorder Traversal results in a sorted array. If the rules are violated, than the array is not sorted.
Idea is to sort the array explicitly, and put all the elements back in the BST one by one.

#### Approach 2:
As the elements are sorted in an inorder Traversal, we can swap the elements that are violating the rules of a BST.

### Tree:


```
Input Tree:
             10
            /  \
           5    8
          / \
         2   20

In the above tree, nodes 20 and 8 must be swapped to fix the tree.  
Following is the output tree

         10
        /  \
       5    20
      / \
     2   8
```

<p align="center"><> with &hearts; by Tanay Toshniwal&copy;</p>
