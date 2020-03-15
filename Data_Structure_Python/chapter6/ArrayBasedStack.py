# class ArrayStack:
#     def __init__(self):
#         self.stackarr = []
#         self.TopIndex = -1

#     def SIsEmpty(self):
#         if self.TopIndex == -1: return True
#         return False

#     def SPush(self,data):
#         self.stackarr.append(data)
#         self.TopIndex +=1
        
#     def SPop(self):
#         if self.TopIndex == -1: return "Stack is empty"
#         dummyidx = self.TopIndex
#         self.TopIndex -=1
#         return self.stackarr[dummyidx]


#     def Speek(self):
#         if self.TopIndex == -1: return "Stack is empty"
#         return self.stackarr[self.TopIndex]


        