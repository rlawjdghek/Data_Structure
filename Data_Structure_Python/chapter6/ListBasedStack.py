# class Node:
#     def __init__(self,data):
#         self.data = data
#         self.next = None

# class ListStack:
#     def __init__(self):
#         self.head = None
#         self.NumOfData = 0

#     def SIsEmpty(self):
#         if self.NumOfData ==0: return True
#         return False

#     def SPush(self, data):
#         newnode = Node(data)
#         if self.NumOfData ==0:
#             self.head = newnode
#         else:
#             newnode.next = self.head
#             self.head = newnode
#         self.NumOfData +=1

#     def SPop(self):
#         if self.NumOfData ==0: return "stack is empty"
#         rnode = self.head
#         rdata = self.head.data
#         self.head = self.head.next
#         del(rnode)
#         self.NumOfData -=1
#         return rdata


#     def SPeek(self):
#         if self.SIsEmpty(): return "Stack is Empty"
#         else: return self.head

   
    


        

    