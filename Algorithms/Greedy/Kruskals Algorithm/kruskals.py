class Graph:

    def __init__(self):
        self.edges = list()
        self.vertices = list()
    
    def add(self, edge):
        self.edges.append(edge)
        v1, v2, _ = edge
        self.vertices.append(v1)
        self.vertices.append(v2)
    
    def parent(self, vertices, vertex):
        if vertices[vertex] == -1:
            return vertex
        return self.parent(vertices, vertices[vertex])
    
    def union(self, vertices, x, y):
        a = self.parent(vertices, x)
        b = self.parent(vertices, y)
        vertices[a] = b
    
    def remove(self, edge):
        self.edges.remove(edge)
        v1, v2, _ = edge
        if v1 in self.vertices:
            self.vertices.remove(v1)
        if v2 in self.vertices:
            self.vertices.remove(v2)
    
    def hasCycle(self):
        dictionary = {i: -1 for i in self.vertices}
        for v1, v2, _ in self.edges:
            x = self.parent(dictionary, v1)
            y = self.parent(dictionary, v2)
            if x==y:
                return True
            self.union(dictionary, x, y)
        return False
    
    def kruskalMST(self):
        new_graph = Graph()

        self.edges = sorted(self.edges, key = lambda data: data[2])
        
        for edge in self.edges:
            if len(new_graph.edges) == (len(self.vertices)-1):
                break
            new_graph.add(edge)
            if new_graph.hasCycle():
                new_graph.remove(edge)
        return new_graph

def main():

    graph = Graph()

    #   The Graph Used:
    #   
    #   (0)---10---(1)
    #    |\         |
    #    |  \       |
    #    6    5     15
    #    |      \   |
    #    |        \ |
    #   (2)--- 4---(3)

    graph.add([0, 1, 10])
    graph.add([0, 2, 6])
    graph.add([0, 3, 5])
    graph.add([1, 3, 15])
    graph.add([2, 3, 4])

    graph = graph.kruskalMST()

    for edge in graph.edges:
        print('{v1}-----{v2} : cost:{cost}'.format(v1 = edge[0], v2 = edge[1], cost = edge[2]))

if __name__ == "__main__":
    main()