class Node:

    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:

    def __init__(self):
        self.root = None

    def add_first(self, data):
        node = Node(data)
        node.next = self.root
        self.root = node
    
    def add_last(self, data):
        node = Node(data)

        if self.root is None:
            self.root = node
        else:
            current = self.root
            while current.next is not None:
                current = current.next
            current.next = node

    def delete_first(self):
        self.root = self.root.next

    def delete_last(self):
        current = self.root
        mem = None

        if current is None:
            print('Underflow')
        else:
            while current.next is not None:
                mem = current
                current = current.next
            mem.next = None

    def print(self):
        current = self.root
        while current is not None:
            print(current.data, end=' ')
            current = current.next
        print()

    def size(self):
        current = self.root
        size = 0

        while current is not None:
            size += 1
            current = current.next
        
        return size

def split(root):
    if root is None:
        return root, None
    
    slow_ptr = root
    fast_prt = root.next

    while fast_prt is not None:
        fast_prt = fast_prt.next
        if fast_prt is not None:
            fast_prt = fast_prt.next
            slow_ptr = slow_ptr.next
    
    two = slow_ptr.next
    slow_ptr.next = None
        
    return root, two

def merge(one, two):
    if one is None:
        return two
    if two is None:
        return one
    
    res = None

    if one.data <= two.data:
        res = one
        res.next = merge(one.next, two)
    else:
        res = two
        res.next = merge(one, two.next)
    
    return res

def merge_sort(root):
    if root is None or root.next is None:
        return root
    one, two = split(root)
    one = merge_sort(one)
    two = merge_sort(two)

    root = merge(one, two)

    return root

if __name__ == "__main__":
    
    l = LinkedList()

    l.add_first(1)
    l.add_first(2)
    l.add_first(3)
    l.add_last(4)
    l.add_last(5)

    l.print()

    l.root = merge_sort(l.root)

    l.print()