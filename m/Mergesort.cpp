#include <bits/stdc++.h>
using namespace std;


void merge(int arr[],int l,int mid,int r)
{
	int n1=mid-l+1;
	int i,j;
	int n2=r-mid;
	int a[n1],b[n2];
	for(int i=0;i<n1;i++)
	{
		a[i]=arr[l+i];
	}
	for(int j=0;j<n2;j++)
	{
		b[j]=arr[mid+j+1];
	}
	int q=0,h=0,k=l;
	while(q<n1 && h<n2)
	{
		if(a[q]<b[h])
		{
			arr[k]=a[q];
			k++;
			q++;
		}
		else
		{
			arr[k]=b[h];
			k++;
			h++;
		}
	}
	while(q<n1)
	{
		arr[k]=a[q];
		k++;q++;
	}
	while(h<n2)
	{
		arr[k]=b[h];
		k++;h++;
	}
}


void mergesort(int arr[],int l,int r)
{
	if(l<r)
	{
		int mid=(l+r)/2;
		mergesort(arr,l,mid);
		mergesort(arr,mid+1,r);
		merge(arr,l,mid,r);
	}
}
int main()
{
	int n;
	cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
    	cout<<arr[i]<<" ";
    }
}
