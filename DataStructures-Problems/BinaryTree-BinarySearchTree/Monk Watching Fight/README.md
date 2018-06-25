# Monk Watching Fight

Once Monk was watching a fight between an array and a tree, of being better. Tree got frustrated and converted that array into a Binary Search Tree by inserting the elements as nodes in BST, processing elements in the given order in the array. Now Monk wants to know the height of the created Binary Search Tree.

Help Monk for the same.

### Note:

1) In Binary Search Tree, the left sub-tree contains only nodes with values less than or equal to the parent node; the right sub-tree contains only nodes with values greater than the parent node.

2) Binary Search Tree with one node, has height equal to 1.

### Input Format :

The first line will consist of 1 integer N, denoting the number of elements in the array.
In next line, there will be N space separated integers,  , where , denoting the elements of array.

### Output Format :

Print the height of the created Binary Search Tree.

| SAMPLE INPUT        | SAMPLE OUTPUT           |
| ------------- |:-------------:|
| 4     | 3 |
| 2 1 3 4     |     |

### Explanation :

N = 4

Insert 2. It becomes root of the tree.
Insert 1. It becomes left child of 2.
Insert 3. It becomes right child of 2.
Insert 4. It becomes right child of 3.
Final height of tree = 3.
