#include<bits/stdc++.h>
using namespace std;

int main()
{
 cout<<"testcases\n";
 int t;
 cin>>t;
 while(t--)
 {
    cout<<"size\n";
    int size;
    cin>>size;
    int x[size];
    for(int i=0;i<size;i++)
    {
        cin>>x[i];
    }
    stack<int>satya;
    satya.push(x[size-1]);
    vector<int>satyam;
    cout<<-1<<endl;
    satyam.push_back(-1);
    for(int i=size-2;i>=0;i--)
    {
        if(satya.top()<x[i])
   { 
            while(!satya.empty() && satya.top()<x[i] )
            {
                satya.pop();
            }
            if(satya.empty()){
               // cout<<-1<<" ";
                satyam.push_back(-1);
            }
            else{
               // cout<<satya.top()<<" ";
                satyam.push_back(satya.top());
            }
            satya.push(x[i]);
        }
        else
        {
            
            // cout<<satya.top()<<" ";
            satyam.push_back(satya.top());
            satya.push(x[i]);

        }
    }
    cout<<endl;
    for(int i=satyam.size()-1;i>=0;i--){
        cout<<satyam[i]<<" "; 
    }
    cout<<endl;
    }
 }
