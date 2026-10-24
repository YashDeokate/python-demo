#linear queue using linked list

class node:
    def __init__(self,value):
        self.front=self.rear=None
class LQueue:        
    def enqueue(self, new_node) :
        if self.rear:
            self.rear.next=new_node
            self.rear=new_node
        else:
            self.front=self.rear=new_node  
    def print(self):
        temp=self.front
        while temp:
            print(temp.data, end="->")             
            temp=temp.next       
que=LQueue()  
          
que.enqueue(node(10))
que.enqueue(node(20))
que.enqueue(node(30))
que.enqueue(node(40))
que.enqueue(node(50))

que.print()