// Adam Gemperline
// 11/15/17
// CPSC 121 - Lab 9


#include <iostream>
#include <string>
#include "Header.h"
using namespace std;


int main()
{
    int num;
    char option;
    
    LinkedList list;
  
    do {
        
    cout << "Linked List Options:\n" << endl;
    cout << "a. Add an item" << endl;
    cout << "b. Find an item" << endl;
    cout << "c. Remove an item" << endl;
    cout << "d. Display list" << endl;
    cout << "e. Destroy list" << endl;
    cout << "f. Destroy list and Exit" << endl;
    cin >> option;
    
 
        
    switch (option)
    {
        case 'a':
        {
            cout << "Enter a number to add to the list:" << endl;
            cin >> num;
            list.insertItem(num, list.head);
            break;
        }
        case 'b':
        {
            cout << "Enter a number to search for: " << endl;
            cin >> num;
            list.findItem(num);
            break;
        }
        case 'c':
        {
            break;
        }
        case 'd':
        {
            int count = 0;
            list.display(list.getNodeCount(count));
        }
        case 'e':
        {
            int choice;
            cout << "Choose between removing a position or value: " << endl;
            cout << "1. Position \n2.Value" << endl;
            cin >> choice;
            if(choice == 1)
            {
                cout << "Enter a node position to remove: " << endl;
                cin >> choice;
                list.removeNodePosition(choice);
            }
            else
            {
                cout << "Enter a value to remove: " << endl;
                cin >> choice;
                list.removeValue(choice);
            }
        }
        case 'f':
        {
            cout << "Destroying list, then exiting..." << endl;
            list.destroyList();
        }
    };
     
    } while (option != 'f');
    
    cout << "Exiting." << endl;
    return 0;
}
