# from InfixToPostfix import*
# from ListBasedStack import *

# class Calculator:
#     def calculate(self, exp):
#         convertor = InToPostMachine()
#         postexp = convertor.ConvertExp(exp)
#         stack = ListStack()
        
#         for i in range(len(postexp)):
#             if postexp[i].isdigit(): stack.SPush(postexp[i])
#             else:
#                 num1 = int(stack.SPop())
#                 num2 = int(stack.SPop())
#                 if postexp[i] == '+': stack.SPush(num1+num2)
#                 elif postexp[i] == '-': stack.SPush(num1-num2)
#                 elif postexp[i] =='*': stack.SPush(num1*num2)
#                 elif postexp[i] == '/': stack.SPush(num1/num2)

#         return stack.SPop()


