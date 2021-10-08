#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> s;
    int i, n, q, a, b;
    set<int>::iterator j;
    cin>>q;
    for(i=0;i<q;i++){
        cin>>a>>b;
        if(a==1){
            s.insert(b);
        }
        else if(a==2){
            s.erase(b);
        }
        else{
            j = s.find(b);
            if(j==s.end()){
                cout<<"No"<<endl;
            }
            else {
            cout<<"Yes"<<endl;
            }
        }
    }
    return 0;
}



