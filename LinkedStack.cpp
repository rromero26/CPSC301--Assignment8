// Adapted from version by Frank Carrano and Timothy Henry
#include "LinkedStack.h"

template<class Type>
LinkedStack<Type>::LinkedStack() : head(nullptr) {

}
//--------------------------------------------------------------
template<class Type>
LinkedStack<Type>::LinkedStack(const LinkedStack<Type> & aStack) {
    // TODO: Implement pseudocode
    Node<Type> * originalPointer = nullptr;
    // Point to nodes in original chain

    if(originalPointer == nullptr) {

    }
    else {
        // Copy first node

        // Point to first node in new chain

        // Copy remaining nodes
        while(originalPointer != nullptr) {
            // Advance original-chain pointer
            // Get next item from original chain
            // Create a new node containing the next item
            // Link new node to end of new chain
            // Advance pointer to new last node
        } // end while
        // Set the end of new chain
    } // end if
}
//--------------------------------------------------------------
template<class Type>
LinkedStack<Type>::~LinkedStack() {
  Node<Type> * tempHead = nullptr;          //create temp ptr
    while(isEmpty() != true){               //while stack is not empty, delete nodes
      tempHead = head;
      head = head->next;
      delete tempHead;
    }
}
//--------------------------------------------------------------
template<class Type>
bool LinkedStack<Type>::isEmpty() {
    if(head != nullptr)                     // if element exist, return false
      {return false;}
    else                                    // if head = NULL, return true
    {return true;}
}
//--------------------------------------------------------------
template<class Type>
bool LinkedStack<Type>::push(Type & newElement) {
    Node<TYPE> *temp = new Node;                  //creates new node
    temp->data = newElement;                      //sets element of node

    temp->next = head;                            // add it to front of "stack"
    head = temp;                                  //has head point to top
}
//--------------------------------------------------------------
template<class Type>
bool LinkedStack<Type>::pop() {

    Node<TYPE> *temp = new Node;
    temp = head;
    TYPE holder = head->data;
    head = head->next;                             //move head to next element

    delete temp;                                   //delete previous elemnt
    return holder;                                 //return value of deleted element
}
//--------------------------------------------------------------

template<class Type>
Type LinkedStack<Type>::peek() {
  if(isEmpty() == true){                           //check if stack is empty
    cout << "ERROR: stack is empty" << endl;
    return 0;
  }

  return head->data;                               //return value of top
}
