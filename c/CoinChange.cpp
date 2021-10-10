#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    long long int count( int S[], int m, int n )
    {
       
        //code here.
        long long int dp[n+1];
        for(int i=0;i<n+1;i++){
            dp[i] = 0;
        }
        dp[0] = 1;
        for(int i=0;i<m;i++){
            for(int j=S[i];j<n+1;j++){
                dp[j] = dp[j] + dp[j - S[i]];
            }
        }
        return dp[n];
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int arr[m];
		for(int i=0;i<m;i++)
		    cin>>arr[i];
	    Solution ob;
		cout<<ob.count(arr,m,n)<<endl;
	}
    
    
    return 0;
}  // } Driver Code Ends
