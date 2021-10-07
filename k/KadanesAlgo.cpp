#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    
    int maxSubarraySum(int arr[], int n){
        int ans = 0;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum = sum + arr[i];
            if(sum > ans){
                ans = sum;
            }
            if(sum < 0){
                sum = 0;
            }
        }
        if(ans == 0){
            int altans = INT_MIN;
            for(int i=0;i<n;i++){
                if(arr[i] > altans){
                    altans = arr[i];
                }
            }
            return altans;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
