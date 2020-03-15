# class Node:
#     def __init__(self,data):
#         self.data = data
#         self.next = None

# class Queue:
#     def __init__(self):
#         self.front = None
#         self.rear = None

#     def QisEmpty(self):
#         if self.front ==None: 
#             return True
#         return False


#     def Enqueue(self,data):
#         newnode = Node(data)
#         newnode.next = None
#         if self.front == None: 
#             self.front = newnode
#             self.rear = newnode
#         else:
#             self.rear.next = newnode
#             self.rear = newnode

#     def Dequeue(self):
#         if self.front == None:
#             print("Queue is empty")
#             return True
#         rdata = self.front.data
#         rnode = self.front
#         self.front  = self.front.next
#         del(rnode)
#         return rdata

#     def Qpeek(self):
#         return self.front.data 


