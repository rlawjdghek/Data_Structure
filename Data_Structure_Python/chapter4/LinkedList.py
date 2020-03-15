# class Node:
#     def __init__(self,data):
#         self.data = data
#         self.next = None

# class LinkedList:
#     class Node:
#         def __init__(self,data):
#             self.data = data
#             self.next = None



#     def __init__(self):
#         self.head = Node("dummy")
#         self.tail = Node("dummy")
#         self.head.next = self.tail

#     def add_node(self,newnode):
#         cur = self.head
#         while cur.next != self.tail:
#             cur = cur.next
#         cur.next = newnode
#         newnode.next = self.tail

#     def del_node(self, data):
#         cur = self.head
#         while cur.next.data != data:
#             cur = cur.next
#         cur.next = cur.next.next
#     def print_node(self):
#         cur = self.head.next
#         while cur !=self.tail:
#             print(cur.data , end=" ")
#             cur = cur.next
