#include<iostream>
using namespace std;

void swap(int* a,int* b){
	int temp;
	temp=*b;
	*b=*a;
	*a=temp;
}

void SelectionSort(int a[],int n){
	int i,j;
	int min; 
	
	for(i=0;i<n-1;++i){
		min=i;
		for(j=i+1;j<n;++j){
			if(a[min]>a[j]) 
					 min=j;
		}
		swap(&a[min],&a[i]);
	}
}


int main(){
	int a[]={22,45,6,3,22,65,77,6,88,9,76,34,65,3};
	int n=sizeof(a)/sizeof(a[0]);
	SelectionSort(a,n);	
	
	//printing sorted array
	for(int k=0;k<n;++k)
	cout<<a[k]<<" ";
}