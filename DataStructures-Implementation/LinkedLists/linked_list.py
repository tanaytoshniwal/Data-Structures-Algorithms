class Node:

    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:

    def __init__(self):
        self.root = None
    
    def add(self, data):
        node = Node(data)

        if self.root is None:
            self.root = node
        else:
            current = self.root
            while current.next is not None:
                current = current.next
            current.next = node

    def print(self):
        current = self.root
        while current.next is not None:
            print(current.data)
            current = current.next
        print(current.data)

if __name__ == "__main__":
    
    l = LinkedList()

    l.add(1)
    l.add(2)
    l.add(3)
    l.add(4)
    l.add(5)

    l.print()