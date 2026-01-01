// Name: Dairo Emmanuel
// ID: 200503652

#include <iostream>
#include <iomanip>

using namespace std;
int Reversedigit(int integer); // Function prototype decleration
int main(){
    
    int number;
    int number2;
    cout << "Enter an interger: "<< endl; // Prompt user to enter an integer
    cin >> number;
    number2 = Reversedigit(number); // Function call to get the reversed integer
    cout << "The reversed integer is: " << number2 << endl;
    
    return 0; //To return safe execution


}
int Reversedigit(int integer) // Value returning function to store the get the reversedinterger and return
{

    int newinteger; // Variable to store new integer
    
    string numberstr = to_string(integer); // Convert integer to string
    string reversed="";
    int arn_of_integer = numberstr.length() - 1; // Decclared arrayposition for use in while loop to store each digit
  
    while(arn_of_integer >= 0) //While loop to reverse the integer
    {
     
        reversed += numberstr[arn_of_integer];
        arn_of_integer--;
        
    }
    newinteger = stoi(reversed); // Used  stoifunction to convert string to interger
    
  return newinteger; //Return the new integer
}