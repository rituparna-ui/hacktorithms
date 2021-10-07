#include <iostream>
using namespace std;

int main() {

    int r;
    int c;
    cout<<"Enter no. of rows";
    cin>>r;
    cout<<"Enter no. of columns";
    cin>>c;
    int numbers[20][20];

    cout << "Enter  numbers: " << endl;

    // Storing user input in the array
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> numbers[i][j];
        }
    }

    cout << "The numbers are: " << endl;

    //  Printing array elements
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << "numbers[" << i << "][" << j << "]: " << numbers[i][j] << endl;
        }
    }

    return 0;
}