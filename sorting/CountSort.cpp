#include<bits/stdc++.h>
using namespace std;

void countSort(vector<int>& arr)
{
	int max = *max_element(arr.begin(), arr.end()); //finding largest element in array
	int min = *min_element(arr.begin(), arr.end()); //finding smallest element in array
	int range = max - min + 1;

	vector<int> count(range), output(arr.size());
	for (int i = 0; i < arr.size(); i++)    //counting 
		count[arr[i] - min]++;

	for (int i = 1; i < count.size(); i++)  //storing preSum of #digits 
		count[i] += count[i - 1];

	for (int i = arr.size() - 1; i >= 0; i--) {
		output[count[arr[i] - min] - 1] = arr[i];   //sorting the element by finding appro. position
		count[arr[i] - min]--;
	}

	for (int i = 0; i < arr.size(); i++)
		arr[i] = output[i];
}

void printArray(vector<int>& arr)
{
	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << " ";
	cout << "\n";
}

int main()
{
	vector<int> arr = { -5, -10, 0, -3, 8, 5, -1, 10 };
	countSort(arr);
	printArray(arr);
	return 0;
}
