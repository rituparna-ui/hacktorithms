#include<bits/stdc++.h>
using namespace std;
 
int main(){
     int n,c=1,i=1,l;
     cin>>n;
     while(n>=c)
     {
          i++;
          l=(i*(i+1))/2;
          c+=l;
     }
     cout<<i-1;
     return 0;
}