#include<bits/stdc++.h>
using namespace std;
 
int main(){
     int n,a,c=0,x=0,m=0,r=-1;
     cin>>n;
     while(n--)
     {
          cin>>a;
          c+=a;
          x+=1-a*2;
          r=max(r,x-m);
          m=min(x,m);
     }
     cout<<r+c;
}