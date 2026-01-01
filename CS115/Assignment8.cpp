// Name: Emmanuel Dairo
// ID: 200503652

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
	string getName	();// returns the name of the person
	string getNumber();// returns the phone number of the person

	bool operator == (const Entry& e); // equality checker, checks if their are the same
	bool operator != (const Entry& e); // checks if the name as different



};
class EntryPlus : public Entry {
private:
	string Streetname;
	string City;
	string Province;
	string Postalcode;
	string Phone;

public:

	EntryPlus() :Entry() { Streetname = "", City = "", Province = "", Postalcode = "", Phone = ""; }
	EntryPlus(string name, string number, string stname, string Ct, string Prov, string Pos, string num) :Entry(name, number), Streetname(stname), City(Ct), Province(Prov), Postalcode(Pos), Phone(num) {};

	void setCity(string city) {
		City = city;
	}
	void setstreet(string street) {
		Streetname = street;
	}
	void setProvince(string province) {
		Province = province;
	}
	void setPost(string post) {
		Postalcode = post;
	}
	void setPhone(string phone) {
		Phone = phone;
	}
	string getCity() const {
		return City;
	}
	string getStreet()const {
		return Streetname;
	}
	string getProvince()const {
		return Province;
	}
	string getPost()const {
		return Postalcode;
	}
	string getPhone()const {
		return Phone;
	}
	void Print();
};

Entry::Entry() {
	name = "";
	number = "";
}
Entry::Entry(string s1, string s2) {
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
void EntryPlus::Print() {
	cout << "Person name:" << getName() << endl;
	cout << " Street number:" << getNumber() << endl;
	cout << "Street name:" << Streetname << endl;
	cout << "City:" << City << endl;
	cout << "Province:" << Province << endl;
	cout << "Postal code:" << Postalcode << endl;
	cout << "Phone:" << Phone << endl;
}




int main() {
	EntryPlus e("John", "3737", "Wascna Pky", "Regina", "SK", "S4S 0A2","784-4934");

	e.Print();


	return 0;
}

