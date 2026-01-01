// Name : Emmanuel Dairo
// ID: 200503652


#include <iostream> // Decalred I/O Stream
#include<fstream>  // Decalred File I/O Stream
using namespace std;
const unsigned int SIZE = 20000; // Declared a large array constant in other to allow large inputs of text to be entered in the array
bool isPalindrome(string items[], int first, int last); // Function Prototype Decleration

int main(){


    string text;
    cout << "Enter a string: "; // Asked user for string name
    cin >> text;


    
    int last = text.length();

    int first = 0;
    string array[SIZE]; // Declared array name and size

    for (int i = 0; i < SIZE; i++) // Used for loop to empty array
    {
        array[i] = "";
    }
    for (int j = 0; j < last; j++) // Created String as an array and stored into new array
    {
        array[j] = text[j];
    }
  
    
    bool isplain; // Declared boolean data type for if statement


    isplain = isPalindrome(array, first, last); // Called function

    if (isplain) // If satement to check palindrome is true or fasle
    {
        cout << " This is a palindrome" << endl;
    }
    else {
        cout << "This is not a palindrome" << endl;
    }

    return 0; // Return Succesful running of program
}
bool isPalindrome(string items[], int first, int last) // Dec
 {
    
    int i = 0;
    int arraylast = last - 1;
    while (i <= arraylast)  // While loop to check if the code is a palindrome
    {
        if(items[i] != items[arraylast]){
            return false; // Returns false for no plaindrome in the while loop
        }
        
        i++;
        arraylast--;
    }
    return true; // Return true for palindrome if while loop does not return false

}