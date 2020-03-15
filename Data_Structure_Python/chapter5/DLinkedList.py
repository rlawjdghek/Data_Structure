# class DNode:
#     def __init__(self,data):
#         self.data = data
#         self.prev = None
#         self.next = None


# class DLinkedList:
#     def __init__(self):
#         self.head = DNode("dummy")
#         self.tail = DNode("dummy")
#         self.head.next = self.tail
#         self.head.prev = None
#         self.tail.prev = self.head
#         self.tail.next = None
#         self.NumOfdata = 0
#         self.cur = DNode(None)

#     def LInsert(self, data):
#         newnode = DNode(data)
#         self.head.next.prev = newnode
#         newnode.next = self.head.next
#         self.head.next = newnode
#         newnode.prev = self.head
#         self.NumOfdata +=1
#     def LFirst(self,data):
#         if self.head.next == self.tail:
#             return False
        
#         self.cur = self.head.next
#         data = self.cur.data
#         return data
#     def LNext(self,data):
        
#         if self.cur.next == self.tail: return False
            
#         self.cur = self.cur.next
#         data = self.cur.data
#         return data
#     def LRemove(self):
#         rpos = self.cur
#         rdata = self.cur.data
#         self.cur.prev.next = self.cur.next
#         self.cur.next.prev = self.cur.prev
#         self.cur = self.cur.prev
#         del(rpos)
#         self.NumOfdata -=1
#         return rdata
#     def LCount(self):
#         return self.NumOfdata

    


