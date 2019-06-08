# Network Overflow
A distributed computing network receives data in the form of packets that need to be processed. The network is in the form of a complete binary tree, where each node has a value associated with it that represents the number of packets it can process. If a node receives more packets than it can process, then it sends the remaining unprocessed packets to its children. Each children receives an equal number of packets.

__Note:__
+   If the number of packets to be divided is odd and packets cannot be divided equally, then the left child receives one more packets than the right child.
+   If a node does not have children, then the packets that it cannot process are lost as '**overflow packets**'.

You are given the initial number of packets sent to the root node of this network. Determine the total number of **overflow packets**.

__Note:__ In a scenario where only a left child exists for a root node **n** and 10 packets need to be passed to the children of **n**. Now, only five packets is passed to the left child and the other five packets are considered as overflow packets.
### Input Format
+   First line: An integer **n** denoting the number of packets that are considered as the input
+   Next line: An integer **m** denoting the number of nodes in the network
+   Each **ith** line of the **m** subsequent lines **(0<=i<=m)**: Input capacity of the **ith** node.

**Note**: If a new a level of a tree needs to be defined, then the nodes must be added from the leftmost node. The new level must be created only when all the nodes in the level have two children.
### Output Format
Print an integer **x** denoting the total number of overflow packets in the network.
### Constraints
```
    1 <= n <= 10^5
    1 <= m <= 10^5
    1 <= note_capacity[i] <= 10^9
```
### Sample Input
```
    200
    4
    100
    30
    50
    20
```
### Sample Output
```
    10
```
### Explanation
200 packets are input. 100 packets are handled by node 0. It then propagates the remaining 100 packets to its children (50 each). 20 packets propagate from node 1 to node 4 where it is consumed, while node 2 consumes the packets.