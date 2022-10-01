#include <iostream>
using namespace std;

int main(){
	int number;
	cout<<"Input Number : ";
	cin>>number;
	cout<<endl;

	if (number%2==0){
		cout<<number<<" Your Number is Even"<<endl;
	}else {
		cout<<number<<" Your Number is Odd"<<endl;	
	}
}
