#pragma once

#ifndef HEADER_H
#define HEADER_H


struct Node
{
    int val;
    Node *next;
    
    
};
class LinkedList
{
private:
    
    int nodeCount ;
    
    
public:
    Node *head;
    
    // Constructor: defined in driver.cpp
    LinkedList();
    
   /* // Deconstructor
    ~LinkedList(); */
    
    // Linked List Operations
    
    void insertItem(int, bool);
    int findItem(int n);
    int getNodeCount(int);
    bool removeNodePosition(int n);
    bool removeValue(int n);
    void destroyList();
    void display(int);
    
};


#endif
