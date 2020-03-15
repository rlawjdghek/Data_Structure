# from ListBasedStack import *

# class InToPostMachine:
#     def GetOpPrec(self,operator):
#         if operator == '*' or operator == '/': return 5
#         elif operator == '+' or operator =='-' : return 3
#         elif operator == '(' : return 1
#         else: return -1

#     def WhoPrecOp(self,op1, op2):
#         op1prec = self.GetOpPrec(op1)
#         op2prec = self.GetOpPrec(op2)
#         if op1prec>op2prec: return 1
#         elif op1prec<op2prec : return -1
#         else: return 0

#     def ConvertExp(self,exp):
#         stack = ListStack()
#         resultExp = ""
    
#         for i in range(len(exp)):
#             if exp[i].isdigit(): resultExp+=exp[i]
#             else: 
#                 if exp[i] =='(':
#                     stack.SPush(exp[i])
#                 elif exp[i]==')':
#                     while True:
#                         popresult = stack.SPop()
#                         if popresult =='(': break
#                         resultExp += popresult
#                 else:
#                     while not stack.SIsEmpty() and self.WhoPrecOp(stack.SPeek(), exp[i]):
#                         resultExp += stack.SPop()
#                     stack.SPush(exp[i])


#         while not stack.SIsEmpty():
#             resultExp += stack.SPop()
#         return resultExp


    