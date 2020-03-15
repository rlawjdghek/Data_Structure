# class BinaryTreeNode:
#     def __init__(self):
#         self.data =None
#         self.right = None
#         self.left =None
        
    
#     def GetData(self):
#         return self.data

#     def SetData(self, data):
#         self.data =data

#     def GetLeftSub(self):
#         return self.left
    
#     def GetRightSub(self):
#         return self.right

#     def MakeLeftSub(self, sub):
#         self.left = sub
#     def MakeRightSub(self, sub):
#         self.right = sub
#     def VisitFunc(self, data):
#         print(data)
    
#     def PreorderTraverse(self):
#         if self == None:
#             print('노드가 비었습니다')
#             return
#         self.VisitFunc(self.data)
#         if self.left: 
#             self.left.PreorderTraverse()
#         if self.right: 
#             self.right.PreorderTraverse()


#     def InorderTraverse(self):
#         if self == None:
#             print("노드가 비었습니다")
#             return
#         if self.left:
#             self.left.InorderTraverse()
#         self.VisitFunc(self.data)

#         if self.right:
#             self.right.InorderTraverse()

#     def PostorderTraverse(self):
#         if self == None:
#             print("노드가 비었습니다")
#             return
#         if self.left:
#             self.left.InorderTraverse()
#         if self.right:
#             self.right.InorderTraverse()
#         self.VisitFunc(self.data)

    