#include<iostream>
using namespace std;
const unsigned int ARRAYSIZE = 100;
int linearSearch(const int Arr[], unsigned int n, const int x);
int main() {
	int newsize;
	int arr[ARRAYSIZE];
	int searchnum;

	cout << "Enter the number of elements that you want in the array: ";
    cin >> newsize;

	cout << "Enter the element:";
    for (int i = 0; i < newsize; i++) {
		cin >> arr[i];
	}
	cout << "Enter the element you are searching for ";
	cin >> searchnum;

	int search = linearSearch(arr, newsize, searchnum);
	if (search > -1) {
		cout << "The index of " << searchnum << " is " << search << endl;
	}
	else {
		cout << "The index of could not be found" << endl;
	}
	cout << "Thank you" << endl;

	return 0;
}
int linearSearch(const int Arr[], unsigned int n, const int x)
{

	for (int i = 0; i < n; i++)
	{
		if (x == Arr[i])
		{
         	return i;
		}

			
    }
	return -1;
}
