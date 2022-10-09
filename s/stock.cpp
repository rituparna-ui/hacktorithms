#include<bits/stdc++.h>
using namespace std; 
void stockprice(int x[],int size)
{
  int buy=x[0];
  int profit=0;
  int max_profit=0;
  int start=0;
  int end=0;
  for(int i=1;i<size;i++)
  {
    profit=x[i]-buy;
    if(buy>x[i])
    {
        buy=x[i];
        start=i;

    }
    if(profit>max_profit)
    {
        max_profit=profit;
        end=i;

    }
  }
  cout<<start+1<<" "<<end+1<<endl;
  cout<<max_profit<<endl;
}
int main()
{
   cout<<"size\n";
   int size;
   cin>>size;
   int x[size];
   for(int i=0;i<size;i++)
   {
    cin>>x[i];
   }
   stockprice(x,size);
   
}
