class Node:
    def __init__(self,data):
        self.data=data
        self.next=None

class Queue:
    def __init__(self):
        self.head=None
        self.tail=None
        self.cnt = 0
    def push(self,data):
        new_node=Node(data)
        if self.head==None:
            self.tail=self.head = new_node
        else:
            self.tail.next = new_node
            self.tail = new_node   
        self.cnt += 1

    def pop(self):
        if self.empty():
            return -1
        data=self.head.data
        self.head=self.head.next
        self.cnt -= 1
        if self.empty():
            self.tail=None
        return data
        
    def size(self):
        return self.cnt

    def empty(self):
        return self.head is None

    def front(self):
        if self.empty():
            return -1
        return self.head.data

    def back(self):
        return -1 if self.empty() else self.tail.data

card=Queue()
n=int(input())

for i in range(1,n+1):
    card.push(i)
while card.size() != 1:
    card.pop()
    card.push(card.pop())
print(card.front())