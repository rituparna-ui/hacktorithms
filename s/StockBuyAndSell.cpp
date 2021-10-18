//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        int min = 0;
        vector<vector<int>> v;
        for(int i=0;i<n-1;i++){
            if(A[i+1] < A[i] && i > 0){
                if(A[i] - A[min] > 0){
                    v.push_back({min,i});
                }
                min = i+1;
                continue;
            }
            if(i > 0){
                if(A[i-1] > A[i]){
                    min = i;
                }
            }
        }
        if(A[n-1] > A[n-2]){
            v.push_back({min,n-1});
        }
        //cout << v.size() << endl;
        // for(int i=0;i<v.size();i++){
        //     cout << v[i][0] << " " << v[i][1] << endl;
        // }
        return v;
    }
};

// { Driver Code Starts.

int check(vector<vector<int>> ans, vector<int> A, int p)
{
    int c = 0;
    for(int i=0; i<ans.size(); i++)
        c += A[ans[i][1]]-A[ans[i][0]];
    return (c==p) ? 1 : 0;
}

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        int p = 0;
        for(int i=0; i<n-1; i++)
        {
            int x = A[i+1]-A[i];
            if(x>0)
                p += x;
        }
        if(ans.size()==0)
            cout<<"No Profit";
        else{
            cout<<check(ans,A,p);
        }cout<<endl;
    }
    return 0;
}
