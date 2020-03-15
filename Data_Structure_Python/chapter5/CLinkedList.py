# class CNode:
#     def __init__(self,data):
#         self.data = data
#         self.next = None

# class CLinkedList:
#     def __init__(self):
#         self.NumOfData = 0
#         self.tail = None
#         self.cur = CNode(None)
#         self.before = CNode(None)

#     def LInsertFront(self, data):
#         newnode = CNode(data)
#         if self.NumOfData ==0:
#             self.tail = newnode
#             newnode.next = newnode
#         else:
#             newnode.next = self.tail.next
#             self.tail.next = newnode
#         self.NumOfData +=1

#     def LInsertLast(self, data):
#         newnode = CNode(data)
#         if self.NumOfData ==0:
#             self.tail = newnode
#             newnode.next = newnode
#         else:
#             newnode.next = self.tail.next
#             self.tail.next = newnode
#             self.tail = newnode
#         self.NumOfData +=1

#     def LFirst(self):
#         if self.NumOfData ==0:
#             return False
#         self.before = self.tail
#         self.cur = self.tail.next
#         return self.cur.data
#     def LNext(self):
#         self.before = self.cur
#         self.cur = self.cur.next
#         return self.cur.data

#     def LCount(self):
#         return self.NumOfData

#     def LRemove(self):
#         rpos = self.cur
#         rdata = self.cur.data
#         if self.cur == self.tail:
#             if self.tail == self.tail.next:
#                 self.tail = None
#             else:
#                 self.tail = self.before
        
#         self.before.next = self.cur.next
#         self.cur = self.before
#         self.NumOfData -=1
#         del(rpos)
#         return rdata


        