from Heap import *
for i in range(5):
    
    H = heap()
    H.HInsert(input("데이터입력"), i)

for i in range(5):
    print(H.HDelete())



