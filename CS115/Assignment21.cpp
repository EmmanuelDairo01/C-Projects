// Name: Emmanuel Dairo
// ID:200503652


#include <iostream>
#include <cassert>
using namespace std;

class myInt
{
private:
	int number; // Declared private variable
public:
	
	myInt(int v); // Defined function to the value of number
	


	bool IsMultiple7()const; // Declared function prototype for the class to check if the number is a multiple of 7
	bool IsMultiple11()const;// Declared function prototype for the class to check if the number is a multiple of 11
	bool IsMultiple13()const;// Declared function prototype for the class to check if the number is a multiple of 13

	bool Sumofdig()const;// Declared function protoype to sum digits

	bool Isprime()const; // Declared function protoypr to check if the number is a prime

};

myInt::myInt(int v) // Defined function to store value
{
	number = v;
}

bool myInt::IsMultiple7() const 
{
	
	if (number % 7 == 0) {
		return true;
	}
	else {
		return false;
	}
}
bool myInt::IsMultiple11()const {
	if (number % 11 == 0) {
		return true;
	}
	else
	{
		return false;
	}
}


bool myInt::IsMultiple13()const // Defined function
{
	
	if (number % 13 == 0) {
		return true;
	}
	else {
		return false;
	}
}
bool myInt::Isprime()const {
	
	if (number == 2|| number == 3|| number == 7|| number == 5) {
		
		return true;
	}
	else if (number % 2 == 0 || number % 3 == 0 || number % 5 == 0 || number % 7 == 0 || number % 11 == 0) {
		
		return false;
	}
	else {
		
		return true;
	}
}
bool myInt::Sumofdig()const 
{
	int num = number;
	int y = 0;
	while (num != 0) {
		y = y +  num % 10;
		num = num / 10;

    }
	if (num % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}

int main() {

	int integer;
	
	cout << "Enter an integer ";
	cin >> integer;
	myInt myIt(integer); // Created an object baised on prototype
	
	if (myIt.IsMultiple7()) {
		cout << "The interger is a multiple 7" << endl;
	}
	else {
		cout << "The interger is not a multiple 7" << endl;
	}

	if (myIt.IsMultiple11()) {
		cout << "The interger is a multiple 11" << endl;
	}
	else {
		cout << "The interger is not a multiple 11" << endl;
	}

	if (myIt.IsMultiple13()) {
		cout << "The interger is a multiple 13" << endl;
	}
	else{
		cout << "The interger is not a multiple 13" << endl;
	}

	if (myIt.Sumofdig()) {
		cout << "The sum of integer is even" << endl;
	}
	else {
		cout << "The sum of integer is odd" << endl;
	}
	if (myIt.Isprime()) {
		cout << "This is a prime number" << endl;
	}
	else {
		cout << "This is not a prime number" << endl;
	}
}