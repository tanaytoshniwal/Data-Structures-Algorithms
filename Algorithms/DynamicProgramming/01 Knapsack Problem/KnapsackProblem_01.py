def knapsack(view_table, val, weights, W):
    for i in range(len(val)+1):
        for j in range(W+1):
            if i == 0 or j == 0:
                view_table[i][j] = 0
            elif weights[i-1] > W:
                view_table[i][j] = view_table[i-1][j]
            else:
                view_table[i][j] = max(view_table[i-1][j], val[i-1] + view_table[i-1][j - weights[i-1]])

#input values
val = [60, 100, 120]
#input weights
weights = [10, 20, 30]
#size of the knapsack
W = 50

view_table = [[0 for i in range(W+1)] for j in range(len(val)+1)]

knapsack(view_table, val, weights, W)

print(view_table[-1][-1])
