#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        if(n==1){
            return arr[0];
        }else if(n==2){
            return max(arr[1],arr[0]);
        }
        
        int dp[2][n];
        memset(dp,0,sizeof(dp));
        dp[0][0] = arr[0];
        dp[1][0] = 0;
        
        dp[0][1] = arr[1];
        dp[1][1] = max(dp[0][0],dp[1][0]);
        for(int i=2;i<n;i++){
            dp[0][i] = dp[1][i-1] + arr[i];
            dp[1][i] = max(dp[0][i-1],dp[1][i-1]);
        }
        // for(int i=0;i<n;i++){
        //     cout << dp[0][i] << " "<< dp[1][i] << endl;
        // }
        return max(dp[0][n-1],dp[1][n-1]);
    }
};




// { Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}
  // } Driver Code Ends
