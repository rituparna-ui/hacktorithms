// problem link:- https://www.codechef.com/START13B/problems/ADDNDIV

#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define fr(a,b) for(int i=a;i<b;i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
void solve(){
   ll a,b;
   cin>>a>>b;
   if(a%2==0){
        if(b%2){
            cout<<"NO\n";
            return ;
        }
        while (a % 2 == 0)
        {
            a = a/2;
        }
   }
    for (ll j = 3; j*j <= a; j = j + 2)
    {
        while (a % j == 0)
        {
            if(b%j){
                cout<<"NO\n";
                return ;
            }
            while(a%j==0){
                a/=j;
            }
        }
    }
    if (a > 2)
    {
        if(b%a){
            cout<<"NO\n";
            return ;
        }
    } 
    cout<<"YES\n";
}
int main(){
    fast_io;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}