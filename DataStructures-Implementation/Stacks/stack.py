class Node:

    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None

class Stack:

    def __init__(self):
        self.root = None
    
    def push(self, data):
        temp = Node(data)
        if self.root is None:
            self.root = temp
        else:
            current = self.root
            while current.next is not None:
                current = current.next
            current.next = temp
            temp.prev = current

    def pop(self):
        if self.root is None:
            try:
                raise Exception('Stack Underflow')
            except Exception as e:
                print(e)
        if self.root.next is None:
            res = self.root.data
            self.root = None
            return res
        ptr = self.root.next
        preptr = self.root
        while ptr.next is not None:
            ptr = ptr.next
            preptr = preptr.next
        preptr.next = None
        return ptr.data
    
    def print(self):
        current = self.root
        while current is not None:
            print(current.data, end=' ')
            current = current.next
        print()
    
if __name__ == "__main__":

    stack = Stack()
    stack.push(1)
    stack.push(2)
    stack.push(3)
    stack.push(5)

    stack.print()
    print(stack.pop())
    stack.print()