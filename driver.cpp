#include "Header.h"
#include <iostream>

using namespace std;

// constructor definition: initializes head to indicate no value
LinkedList::LinkedList()
{
    head = nullptr;
}


void LinkedList::insertItem(int n, bool atHead)
{
   Node listItem;
   listItem.val = n;
  
    Node *newNode;          // to point to a new node
    Node *nodePtr;          // to move through the list
    
    // Allocate a new node
        newNode = new Node;
    // Store the value
        newNode->val = n;
    // Redirect pointer to null
        newNode->next = nullptr;
        
        cout << "Node value: " << listItem.val << endl;
    
    // If there are no nodes in the list, make newNode the first
    if (!atHead)
    {
        if(!head)
        {
            head = newNode;
        }
        cout << "... there were no nodes in list, first node created." << endl;
    }
    
    // Insert newNode at the end of the list
    else
    {
        // initialize nodePtr to head of the list
        nodePtr = head;
        
        // find the last node in the list
        while(nodePtr->next)
            nodePtr = nodePtr->next;
        
        // insert newNode at the last node
        nodePtr->next = newNode;
        cout << "previous node(s) exist, node added to end of list" << endl;
    }
    
    // destructor
    LinkedList::~LinkedList();
}


int LinkedList::findItem(int searchNum)
{
    Node *nodePtr;

    int count = 1;
    
    // check to see if head contains searchNum
    if(head->val == searchNum)
    {
        cout << "Yes, that number is located at the head of the list" << endl;
    }
    
        // initialize nodePtr to the head of the list
        nodePtr = head;
        
        // skip all nodes whose value member is not equal to searchNum
        while (nodePtr != nullptr && nodePtr->val != searchNum)
        {
            // move to next node
            nodePtr = nodePtr->next;
            count++;
            
            if(nodePtr->val == searchNum)
            {
                cout << searchNum << " is in the list at Node " << count << "!" << endl;
                return 1;
            }
        }
        if (nodePtr == nullptr)
        {
            cout << "Not in the list" << endl;
            return 0;
        }
    return nodePtr->val;
}



// Display List
void LinkedList::display(int nodeCount)
{
    Node *nodePtr;      // to traverse the list
    
    // position nodePtr at head
    nodePtr = head;

    if(head == nullptr)
    {
        cout << "Empty list." << endl;
    }
    else
    {
        // print node position and value, then proceed to next
        int count = nodeCount;
        cout << "There are " << count << " nodes total." << endl;

        while (nodePtr != nullptr)
        {
            int j = 0;
            j++;
            cout << "Node " << j << ", value = " << nodePtr->val << endl;
            nodePtr = nodePtr->next;
        }
    }
}


int LinkedList::getNodeCount(int nodeCount)
{
    int count = nodeCount;
    Node *nodePtr; // to traverse the list
    
    // position nodePtr at head
    nodePtr = head;
    
    if( head == nullptr)
    {
        cout << "The list is empty" << endl;
    }
    while (nodePtr != nullptr)
    {
        nodePtr = nodePtr->next;
        count++;
    };
    return count;
}


bool LinkedList::removeNodePosition(int n)
{
    int choice = n;
    
    if(choice == 1)
    {
    }
    return 0;
}

bool LinkedList::removeValue(int n)
{
    int choice = n;
    return 0;
}



// Destructor function
void LinkedList::destroyList()
{
    Node *nodePtr;      // to traverse the list
    Node *nextNode;     // to point to the next node
    
    // position nodePtr at head
    nodePtr = head;
    
    // while nodePtr is not at the end of the list
    while (nodePtr != nullptr)
    {
        // save a pointer to the next node
        nextNode = nodePtr->next;
        
        // delete the current node, starting with head
        delete nodePtr;
        
        // set nodePtr to the next node
        nodePtr = nextNode;
    }
}


