def solveNQueens(A):
        if A == 1:
            return ["Q"]
        def f(n,columns,d1,d2,i,state,res):
            if i == n:
                res.append(state[:])
                return 
            for j in range(n):
                if columns[j]==0 and d1[i+j]==0 and d2[i-j+n-1]==0:
                    state[i] = j
                    columns[j]=1
                    d1[i+j]=1
                    d2[i-j+n-1]=1
                    f(n,columns,d1,d2,i+1,state,res)
                    state[i] = 0
                    columns[j]=0
                    d1[i+j]=0
                    d2[i-j+n-1]=0
        n = A 
        left_diagonals = [0 for i in range(2*n-1)]
        right_diagonals = [0 for i in range(2*n-1)]
        columns = [0 for i in range(n)]
        state = [0 for i in range(n)]
        res = []
        f(n,columns,left_diagonals,right_diagonals,0,state,res)
        ans = []
        for i in res:
            temp =[]
            for pos in i:
                t = "."*n 
                t = t[:pos]+'Q'+t[pos+1:]
                temp.append(t)
            ans.append(temp)
        return ans
            
            

n = int(input())

res = solveNQueens(n)
for sol in res:
    for row in sol:
        print(row)
    print()