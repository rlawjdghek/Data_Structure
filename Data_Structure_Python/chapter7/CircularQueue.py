# class Queue:
#     def __init__(self):
#         self.front = 0
#         self.rear = 0
#         self.arrqueue = [0]*30

#     def QIsEmpty(self):
#         if self.front == self.rear: return True
#         return False
    
#     def NextPos(self,pos):
#         if pos+1 == len(self.arrqueue): return 0
#         else: return pos+1

#     def Enqueue(self, data):
#         if self.front == self.NextPos(self.rear): 
#             print("Queue is full") 
#             exit()
#         else: 
#             self.rear = self.NextPos(self.rear)
#             self.arrqueue[self.NextPos(self.rear)] = data
           

#     def Dequeue(self):
#         if self.QIsEmpty(): exit()
#         else: 
#             self.front = self.NextPos(self.front)
#             return self.arrqueue[self.front]

#     def QPeek(self):
#         return self.arrqueue[self.NextPos(self.front)]
    