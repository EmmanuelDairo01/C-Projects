// Name: Emmanuel Dairo
// Student ID: 200503652



#include <iostream>
using namespace std;
const unsigned long int COLUMN_SIZE = 1000; // Declared array constant for Column in 2D Array
const unsigned long int ROW_SIZE = 1000; // Decalred array constant for row in 2D Array
const unsigned long int SIZE = 1000; // Decalred array constant for 2D Array

int main()
{
    int number_o_rows;
    int number_o_columns;

    cout << "Please enter the number of rows "; // Asked user fo number of rows
    cin >> number_o_rows;
    cout << "Please enter number of colums "; // Asked user for number of colums
    cin >> number_o_columns;

    int Twodiarray[ROW_SIZE][COLUMN_SIZE];
    cout << "Enter the values:\n";


    for (int i = 0; i < number_o_rows; i++)  // For loop to store values into the TwoD array
    {
        for (int j = 0; j < number_o_columns; j++) {
            cin >> Twodiarray[i][j];
        }
    }


    int OneDArray[SIZE]; // big enough for 100x100
    int size = 0;
    for (int i = 0; i < number_o_rows; i++) {
        for (int j = 0; j < number_o_columns; j++) {
            OneDArray[size++] = Twodiarray[i][j];
        }
    }

    
    bool Duplicatenum = false; // Decalred boolean expression and named it true

    cout << "Thank you. ";
    for (int i = 0; i < size; i++) {

        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (OneDArray[i] == OneDArray[j]) {
                count++;
            }
        }
        if (count > 1) {
                cout << OneDArray[i] << " appears " << count << " times. ";
                Duplicatenum = true;
            }

        if (!Duplicatenum) {
            cout << "There are no duplicate elements.";
        }

        cout << endl;
        
    }
    return 0;
}