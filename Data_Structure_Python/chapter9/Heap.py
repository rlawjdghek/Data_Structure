class elem:
    def __init__(self,data, priority):
        self.data = data
        self.priority = priority
    

class heap:
    def __init__(self):
        self.NumOfData = 0
        self.HeapArr = [None] * 10

    def HIsEmpty(self):
        if self.NumOfData ==0:
            print("Heap is empty")
            return True
        return False
    def GetParentIdx(self,idx):
        return int(idx/2)


    def GetLChildIdx(self,idx):
        return idx*2
       
    def GetRChildIdx(self, idx):
        return self.GetLChildIdx+1

    def GetHighPriorChildIdx(self,idx):
        if self.NumOfData < self.GetLChildIdx(idx):
            return 0
        elif self.GetLChildIdx(idx) == self.NumOfData:
            return self.GetLChildIdx(idx)
        else: 
            if self.HeapArr[self.GetLChildIdx(idx)].priority > self.HeapArr[self.GetRChildIdx(idx)].priority:
                return self.GetLChildIdx(idx)
            else:
                return self.GetRChildIdx(idx)


    def HInsert(self, data,priordata):
        newelem = elem(data , priordata)
        idx = self.NumOfData +1
        while idx != 1:
            if priordata < self.HeapArr[self.GetParentIdx(idx)].priority:
                self.HeapArr[idx] = self.HeapArr[self.GetParentIdx(idx)]
                idx = self.GetParentIdx(idx)
            else: 
                break

        self.HeapArr[idx] = newelem
        self.NumOfData +=1

    def HDelete(self):
        rdata = self.HeapArr[1].data
        lastelem = self.HeapArr[self.NumOfData]
        parentidx = 1
        childidx = 1


        while self.GetHighPriorChildIdx(parentidx) != 0:
            if lastelem.priority <= self.HeapArr[childidx].priority:
                break
            self.heapHeapArr[parentidx] = self.HeapArr[childidx]
            parentidx = childidx
            childidx = self.GetHighPriorChildIdx(parentidx)


        self.HeapArr[parentidx] = lastelem
        self.NumOfData -=1
        return rdata

    

