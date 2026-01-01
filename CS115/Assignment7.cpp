// Name: Emmanuel Dairo
// Student ID: 200503652


#include <iostream>
#include <string>
using namespace std;

class Entry {
  private:
	string name;// The name of the person
	string number; // the phone number of the person
public:
	Entry(); // default constructor that initialize the name and the phone number to empty string
	Entry(string name, string number); // initilaizing constructor that initializes name to s1 and phone number to s2
	Entry(string s1); // constructor that initialzes name to s1 and phone number in the entry object
	void setEntry(string s1, string s2); // stores s1 as the name and s2 as the phone number in the entry object
	void setEntry(string s1);// stores s1 as the name and "306-999-9999" as the phone number in the entry object
	string getName();// returns the name of the person
	string getNumber();// returns the phone number of the person

	bool operator == (const Entry& e); // equality checker, checks if their are the same
	bool operator != (const Entry& e); // checks if the name as different



};

Entry::Entry() {
	name = "";
	number = "";
}
Entry::Entry(string s1, string s2){
	name = s1;
	number = s2;
}
Entry::Entry(string s1) {
	name = s1;
	number = "";

}
void Entry::setEntry(string s1, string s2) {
	name = s1;
	number = s2;
}
void Entry::setEntry(string s1) {
	name = s1;
}
string Entry::getName() {
	return name;
}
string Entry::getNumber() {
	return number;
}
bool Entry::operator == (const Entry& e) {
	if (name == e.name && number == e.number) {
		return true;
	}
}
bool Entry::operator != (const Entry& e) {
	if (name == e.name && number == e.number) {
		return false;
	}
}


int main() {
	Entry e1, e2("John"), e3("Chris", ""), e4("chris");

	if (e3 == e4)
		cout << "e3 == e4" << endl;
	else
		cout << "NOT e3 == e4" << endl;
	if (e1 != e2)
		cout << "e1 != e2" << endl;
	else
		cout << "NOT e1 != e2" << endl;

	e1.setEntry("Chris");
	cout << e1.getName() << endl;

	return 0;
}

