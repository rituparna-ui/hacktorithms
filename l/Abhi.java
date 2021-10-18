// { Driver Code Starts
import java.io.*;
import java.util.*;
class Abhi
{
    public static void main(String args[])throws IOException
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            int r = sc.nextInt();
            int c = sc.nextInt();
            
            int matrix[][] = new int[r][c];
            
            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < c; j++)
                 matrix[i][j] = sc.nextInt();
            }
            Solution ob = new Solution();
            ArrayList<Integer> ans = ob.spirallyTraverse(matrix, r, c);
            for (Integer val: ans) 
                System.out.print(val+" "); 
            System.out.println();
        }
    }
}// } Driver Code Ends


class Solution
{
    //Function to return a list of integers denoting spiral traversal of matrix.
    static ArrayList<Integer> spirallyTraverse(int matrix[][], int r, int c)
    {
        ArrayList<Integer>arr=new ArrayList<>();
       int minr=0;
       int minc=0;
       int maxr=r-1;
       int maxc=c-1;
       int i;
       int j;
       
       int t=r*c;
       int count=0;
       
       while(t>count)
       {
            //   for top
      for(i=minc,j=minr;i<=maxc && t>count ;i++)
      {
          arr.add(matrix[j][i]);
          count++;
      }
      minr++;
      
    //   for right
       for(i=minr,j=maxc;i<=maxr && t>count;i++)
      {
          arr.add(matrix[i][j]);
          count++;
      }
      maxc--;
      
    //   for bottom
      for(i=maxc,j=maxr;i>=minc && t>count;i--)
      {
         arr.add(matrix[j][i]) ;
          count++;
      }
      maxr--;
       
       for(i=maxr,j=minc;i>=minr && t>count;i--)
       {
           arr.add(matrix[i][j]);
            count++;
       }
       minc++;
       }
   
       return arr;
    }
}
