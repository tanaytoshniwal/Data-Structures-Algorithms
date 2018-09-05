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

def combine(list1, list2):
    
    l = Node(1)
    ptr = l

    while list1 is not None and list2 is not None:
        if list1.data <= list2.data:
            ptr.next = list1
            ptr = ptr.next
            list1 = list1.next
        else:
            ptr.next = list2
            ptr = ptr.next
            list2 = list2.next
    
    if list1 is None:
        ptr.next = list2
    
    if list2 is None:
        ptr.next = list1

    return l.next

if __name__ == "__main__":
    
    l1 = LinkedList()

    l1.add_first(1)
    l1.add_first(2)
    l1.add_first(4)
    l1.add_last(6)
    l1.add_last(5)

    l1.print();

    l2 = LinkedList()

    l2.add_first(3)
    l2.add_first(7)
    l2.add_last(8)
    l2.add_first(9)

    l2.print()

    l1.root = merge_sort(l1.root)
    l2.root = merge_sort(l2.root)

    l1.root = combine(l1.root, l2.root)

    l1.print()