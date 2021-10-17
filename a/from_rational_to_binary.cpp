// problem link:- https://www.codechef.com/LTIME97B/problems/REALBIN

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >>t;
    while (t--) {
        long long a, b;
        cin>>a>>b;
        while(b%2 == 0)
            b = b/2;
        
		if (b == 1)
            cout <<"Yes\n";
        else
            cout <<"No\n";
    }
}

