INF = 99999
def find_min(key, is_picked):

    min_val = INF
    min_index = -1

    for i in range(len(key)):
        if is_picked[i] == False and key[i]<min_val:
            min_val = key[i]
            min_index = i
    
    return min_index

def print_mst(picked_vertices):
    print('{start_vertex}\t{cost}\t{end_vertex}'.format(start_vertex = "X", cost = "cost", end_vertex = "Y"))
    print('-----------------------')

    sum = 0

    for i in range(1, len(picked_vertices)):
        print('{0}\t{1}\t{2}'.format(picked_vertices[i], graph[i][picked_vertices[i]], i))
        sum += graph[i][picked_vertices[i]]

    print('-----------------------')
    print('Total cost of MST: {cost}'.format(cost = sum))

def mst(graph):

    key = [INF] * len(graph[0])
    picked_vertices = [None] * len(graph[0])
    is_picked = [False] * len(graph[0])

    key[0] = 0
    picked_vertices[0] = -1

    for i in range(len(graph[0])):

        minimum = find_min(key, is_picked)
        
        is_picked[minimum] = True

        for j in range(len(graph[0])):

            if graph[minimum][j] != 0 and is_picked[j] == False and key[j] > graph[minimum][j]:
                key[j] = graph[minimum][j]
                picked_vertices[j] = minimum
        
    print_mst(picked_vertices)

if __name__ == "__main__":

    graph = [[0, 4, 0, 0, 0, 0, 0, 8, 0],
             [4, 0, 8, 0, 0, 0, 0, 11, 0],
             [0, 8, 0, 7, 0, 4, 0, 0, 2],
             [0, 0, 7, 0, 9, 14, 0, 0, 0],
             [0, 0, 0, 9, 0, 10, 0, 0, 0],
             [0, 0, 4, 14, 10, 0, 2, 0, 0],
             [0, 0, 0, 0, 0, 2, 0, 1, 6],
             [8, 11, 0, 0, 0, 0, 1, 0, 7],
             [0, 0, 2, 0, 0, 0, 6, 7, 0]]

    mst(graph)