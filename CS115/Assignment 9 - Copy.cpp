// Name: Emmanuel Dairo
// Student ID: 200503652

#include <iostream>
#include<string>
using namespace std;



int main() {


	char arrayold[] = "10000";


	
 cout << "Enter the character" << endl;
 cin >> arrayold;
 int length = 0;

 int i = 0;
 while (arrayold[i] != '\0') {

	 i++;
 }

 while (i > length || i != length) {
	 length = 1 + length;
 }
 int y = length;
 char* arraynew = new char[length];

 for (int i = 0; i < length; i++) {
	 arraynew[i] = toupper(arrayold[i]);
 }
 while (arrayold[i] != '\0') {
	 arraynew[i] = toupper(arrayold[i]);
	 i++;
 }
 
 for (int i = 0; i < length; i++) {
	 cout << arraynew[i];
 }

		
}