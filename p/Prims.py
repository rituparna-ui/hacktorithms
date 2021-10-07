import sys
class Graph():
    def __init__(self, vertices):
        self.V = vertices
        self.graph = [[0 for column in range(vertices)] 
                    for row in range(vertices)]
    
    def prims_Algo(self):
        minEdge = sys.maxsize
        n=self.V
        mst = list()
        cost =0
        for i in range(n):
            for j in range(n):
                if self.graph[i][j]!=0 and self.graph[i][j] < minEdge:
                    minEdge = self.graph[i][j]
                    a=i
                    b=j
        mst.append([a,b,minEdge])
        cost += self.graph[a][b]

        self.graph[a][b]=0
        myList = list()
        isExpanded = [ 0 for i in range(n) ]
        while len(mst) < n-1:
            m = len(mst)
            x = mst[m-1][0]
            y = mst[m-1][1]

            if isExpanded[x] == 0:           
                for i in range(n):
                    if i!=y and self.graph[i][x] != 0 :
                        myList.append([self.graph[i][x],i,x])
                        self.graph[i][x] = 0
            if isExpanded[y] == 0:  
                for i in range(n):
                    if i!=x and self.graph[i][y] != 0 :
                        myList.append([self.graph[i][y],i,y])
                        self.graph[i][y] = 0

            minCost = sys.maxsize
            for i in range(len(myList)):
                if myList[i][0] < minCost:
                    minCost = myList[i][0]
                    index = i

            mst.append([myList[index][1],myList[index][2],minCost])
            myList.pop(index)


            isExpanded[x] = 1
            isExpanded[y] = 1
        
        print(mst)                




g = Graph(5)
g.graph = [ [0, 2, 0, 6, 0],
            [2, 0, 3, 8, 5],
            [0, 3, 0, 0, 7],
            [6, 8, 0, 0, 9],
            [0, 5, 7, 9, 0]]
g.prims_Algo()
