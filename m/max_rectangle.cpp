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
        stack<int>st;
       //building right index array//
        int right[size];
        right[size-1]=size;
        st.push(size);
        for(int i=size-2;i>=0;i--)
        {   
            if(x[i]<x[st.top()-1])
            {
                while(x[st.top()-1]<x[i] && !st.empty())
                {
                    st.pop();
                }
                if(st.empty())
                {
                    st.push(size);
                    right[i]=size;
                }slid
                else
                {
                  st.push(st.top());
                }
            }
            else
            {
                x[i]=size;
                st.push(x[i]);
            }
        }
        for(int i=0;i<size;i++)
        {
            cout<<right[i]<<" ";
        }
       cout<<endl;
        //getting emptied stack//
        while(!st.empty())
        {
            st.pop();
        }


    //building left index array//

        int left[size];
        left[0]=-1;
        st.push(-1);
        for(int i=1;i<size;i++)
        {   
            if(x[i]<x[st.top()])
            {
                while(x[st.top()]<x[i] && !st.empty())
                {
                    st.pop();
                }
                if(st.empty())
                {
                    st.push(-1);
                    left[i]=size;
                }
                else
                {
                  st.push(st.top());
                }
            }
            else
            {
                x[i]=-1;
                st.push(x[i]);
            }
        }
         for(int i=0;i<size;i++)
        {
            cout<<left[i]<<" ";
        }


        //23987590328//
        int john=0;
        int wick=0;
        for(int i=0;i<size;i++)
        {
            john=(abs(left[i]-right[i]))*x[i];
            if(john>wick)
            {
                wick=john;
            } 
        }
      //  cout<<wick<<" ";
    }
}
