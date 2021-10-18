#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;



class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        int dp[x+1][y+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<y+1;i++){
            for(int j=1;j<x+1;j++){
                if(s1[j-1] == s2[i-1]){
                    dp[j][i] = dp[j-1][i-1] + 1;
                }else{
                    dp[j][i] = max(dp[j-1][i],dp[j][i-1]);
                }
            }
        }
        return dp[x][y];
    }
};





int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          
        string s1,s2;
        cin>>s1>>s2;        
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
  
