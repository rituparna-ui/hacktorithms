def searchMatrix(A, B):
        def binary_search(arr, low, high, x):
                    if high >= low:                
                        mid = (high + low) // 2
                        if arr[mid] == x:
                            return 1
                        elif arr[mid] > x:
                            return binary_search(arr, low, mid - 1, x)
                        else:
                            return binary_search(arr, mid + 1, high, x)
                
                    else:
                        return 0
        n = len(A)
        m = len(A[0])
        l = 0
        h = n-1
        mid = 0
        if B==A[0][0]:
            return 1
        while l<=h:
            mid = (l+h)//2
            if B >= A[mid][0] and B<= A[mid][m-1]:
                break
            if B <A[mid][0]:
                h = mid-1
            else:
                l = mid+1
        

        return binary_search(A[mid],0,m-1,B)
           

A = [[1, 2, 3, 4], [5, 6,10,11], [7, 8, 9,12]]
#Checks if the element is present in the matrix or not
print(searchMatrix(A,12))