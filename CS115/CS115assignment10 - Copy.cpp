// Name: Emmanuel Dairo
// Student ID: 200503652
#include <iostream>

using namespace std;

struct Node {
    int Item;
    Node* Next;
};


bool IsEmpty(Node* Ptr) {
    Node* Newnodeptr = Ptr; bool value; 
    if (Newnodeptr == nullptr) 
        { value = true; }
    else { value = false; } 
    return value;
}


int GetLength(Node* Ptr) {
    int length = 0;
    Node* Getlenptr = Ptr;
    while (Getlenptr != nullptr) { 
        length++;
        Getlenptr = Getlenptr->Next;
    }
    return length;
}


Node* FindItem(Node* Ptr, int ItemToFind) {
    Node* Curr = Ptr;
    while (Curr != nullptr) {
        if (Curr->Item == ItemToFind) {
            cout << "Item was found" << endl;
            return Curr;
        }
        Curr = Curr->Next;
    }
    cout << "Item not found" << endl;
    return nullptr;
}


Node* InsertItem(Node* Ptr, int NewItem) {
    Node* Newnodeptr = new Node; 
    Newnodeptr->Item = NewItem;
    Newnodeptr->Next = nullptr;

    if (Ptr == nullptr) {
        
        return Newnodeptr;
    }

    Node* currpointer = Ptr;
    while (currpointer->Next != nullptr) {
        currpointer = currpointer->Next;
    }
    currpointer->Next = Newnodeptr;
    return Ptr; 
}

// Delete an item from the list
Node* DeleteItem(Node* Ptr, int ItemToDelete) {
    if (Ptr == nullptr) return nullptr;

    if (Ptr->Item == ItemToDelete) {
        Node* deleteptr = Ptr;
        Ptr = Ptr->Next;
        delete deleteptr;
        return Ptr;
    }

    Node* preptr = Ptr;
    while (preptr->Next != nullptr && preptr->Next->Item != ItemToDelete) {
        preptr = preptr->Next;
    }

    if (preptr->Next != nullptr) {
        Node* deleteptr = preptr->Next;
        preptr->Next = deleteptr->Next;
        delete deleteptr;
    }
    else {
        cout << "Value not found" << endl;
    }

    return Ptr;
}

void Print(Node* Ptr) {
    Node* CurrPtr = Ptr;
    while (CurrPtr != nullptr) { 
        cout << CurrPtr->Item << endl;
        CurrPtr = CurrPtr->Next;
    }
}

int main() {
    Node* Numptr = nullptr;
    char option;
    option = '9';

        while (option != '0') {

            cout << "Enter 1 to know if the list is empty. Enter 2 to know the number of elements in the list. Enter 3 to insert an item. Enter 4 to delete an item. Enter 5 to print all the items" << endl;
            cin >> option;

            switch (option) {
            case '1':
                if (IsEmpty(Numptr)) {
                    cout << "The linked list is empty" << endl;
                }
                else {
                    cout << "The linked list has been created" << endl;
                }
                break;

            case '2': {
                int length = GetLength(Numptr);
                cout << "The number of elements in the list is " << length << endl;
                break;
            }

            case '3': {
                int item;
                cout << "Enter the item you want to insert: ";
                cin >> item;
                Numptr = InsertItem(Numptr, item);
                break;
            }

            case '4': {
                int delitem;
                cout << "Enter the item you want to delete: ";
                cin >> delitem;
                Numptr = DeleteItem(Numptr, delitem);
                break;
            }

            case '5':
                cout << "The elements are: " << endl;
                Print(Numptr);
                break;

            default:
                cout << "Wrong input" << endl;
            }
        }
    

    return 0;
}