//Name: Emmanuel Dairo
//ID: 200503652

#include<iostream>
using namespace std;
const int ARRAYSIZE = 100;
int binaryse(const int[ARRAYSIZE], int low, int high, int target);
int low = 0;

int main() {
	int element[ARRAYSIZE];
	int newsize;
    int searchnum;

	cout << "Enter number of elements you want in the array" << endl;
	cin >> newsize;

	cout << "Enter elemnts in the array ";
	for (int i = 0; i < newsize; i++) {
		cin >> element[i];
	}
    for (int currentIndex = 0; currentIndex < newsize; currentIndex++)
    {
        // Find index of largest element in unsorted section of elements


        for (int searchIndex = currentIndex + 1; searchIndex < newsize; searchIndex++) {


            if (element[currentIndex] > element[searchIndex]) {
                int TempValue;
                TempValue = element[searchIndex];
                element[searchIndex] = element[currentIndex];
                element[currentIndex] = TempValue;
            }
               
        }
    }
    for (int i = 0; i < newsize; i++) {
        cout << element[i] << " ";
    }
    cout << endl;

    cout << "Enter the element that you are searching for: ";
    cin >> searchnum;
    cout << endl;
    
    int elementloca;
    elementloca = binaryse(element, low, newsize, searchnum);
    if (elementloca > -1) {
        cout << "The index of " << searchnum << " is " << elementloca<< endl;
    }
    else if (elementloca <= -1) {
        cout << "The index of " << searchnum << " was not found" << endl;
    }
    cout << "Thank you " << endl;
    return 0;

}
int binaryse(const int array[ARRAYSIZE], int low, int high, int target) {
    int mid;
    int difference;
    while (low <= high) {

        mid = (low + high) / 2;
        difference = array[mid] - target;

        if (difference == 0) {
            return mid;
        }
        else if(difference < 0) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }

    } 
    return -1;
}
