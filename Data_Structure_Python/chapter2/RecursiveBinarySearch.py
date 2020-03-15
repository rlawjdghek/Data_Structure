# def RecurBinarySearch(listA, firstidx, endidx, target):
#     mid = int((firstidx+endidx)/2)
#     if firstidx>endidx: return -1
#     if target>listA[mid]: return RecurBinarySearch(listA, mid+1, endidx,target)
#     elif target<listA[mid]: return RecurBinarySearch(listA, firstidx,mid-1, target)
#     else: return mid




# exlist = [1,3,5,6,7,8,9]
# find = RecurBinarySearch(exlist, 0, 6, 9)
# print(find)