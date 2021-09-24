//--------------------------------------------------------------------
//  Laboratory 5                                        ListLinked.cpp

//--------------------------------------------------------------------

#ifndef LISTLINKED_CPP
#define LISTLINKED_CPP

using namespace std;

#include <iostream>			// For showStructure

#include "ListLinked.h"

//--------------------------------------------------------------------
// NOTE: because ListNode is an inner class, references to ListNode do not take
// the <DataType> template qualifier. If it were a separate external class, then
// the <DataType> would be required.
// We switched from an external class in the 2nd edition to an inner class in
// order to demonstrate better OO design, as well as to get away from the ugly use of
// a private constructor in ListNode and "friend" to allow the List class to access 
// the ListNode's private data.
//--------------------------------------------------------------------

template <typename DataType>
List<DataType>::ListNode::ListNode(const DataType& nodeData,
				   ListNode* nextPtr)
// Creates a list node containing item elem and next pointer
// nextPtr.

{
}

//--------------------------------------------------------------------

template <typename DataType>
List<DataType>::List(int ignored)

// Creates an empty list. The argument is included for compatibility
// with the array implementation (maxSize specifier) and is ignored.
{
}

//--------------------------------------------------------------------

template <typename DataType>
List<DataType>::List(const List& other)
    : head(0), cursor(0)

// Copy constructor. Creates a list which is equivalent in content
// to the "other" list.

{
}

//--------------------------------------------------------------------

template <typename DataType>
List<DataType>& List<DataType>::operator=(const List& other)

// Overloaded assignment operator. Reinitializes the list to be 
// equivalent in content to the "other" list.
// Note: we include self-assignment protection by checking whether
// "this" object is identical to the "other" object.

{

    return *this;
}

//--------------------------------------------------------------------

template <typename DataType>
List<DataType>::~List() 

// Destructor. Frees the memory used by a list.

{
}

//--------------------------------------------------------------------

template <typename DataType>
void List<DataType>::insert(const DataType& newDataItem) throw (logic_error)

// Inserts newDataItem after the cursor. If the list is empty, then
// newDataItem is inserted as the first (and only) item in the list.
// In either case, moves the cursor to newDataItem.

{

}

//--------------------------------------------------------------------

template <typename DataType>
void List<DataType>::remove() throw (logic_error) 

// Removes the item marked by the cursor from a list. Moves the
// cursor to the next item in the list. Assumes that the first list
// item "follows" the last list item.

{
    ListNode *p,   // Pointer to removed node
             *q;   // Pointer to prior node

    

    delete p;
}

//--------------------------------------------------------------------

template <typename DataType>
void List<DataType>::replace(const DataType& newDataItem) throw (logic_error)

// Replaces the item marked by the cursor with newDataItem and
// leaves the cursor at newDataItem.

{

}

//--------------------------------------------------------------------

template <typename DataType>
void List<DataType>::clear() 

// Removes all the items from a list. Sets head and cursor to 0.

{


    // Invariant: whether or not the while loop was entered,
    // both head and cursor == 0 at this point.
    // Could explicitly set head = cursor = 0, but not needed.
}

//--------------------------------------------------------------------

template <typename DataType>
bool List<DataType>::isEmpty() const 

// Returns true if a list is empty. Otherwise, returns false.

{
    return head == 0;
}

//--------------------------------------------------------------------

template <typename DataType>
bool List<DataType>::isFull() const 

// Returns true if a list is full. Otherwise, returns false.
//
// Note: determining whether the free store/heap would be able to
// satisfy the request to allocate another ListNode is either ugly,
// non-portable, or both. We explain the issue to our students and
// tell them that it is acceptible to simply return false. The main
// reason we include isFull() is for compatibility with the array-based
// implementation of the list. You may choose to instruct your students
// to use a different implementation.

{
    return false;		// See note above and alternative below.


  
}

//--------------------------------------------------------------------

template <typename DataType>
void List<DataType>::gotoBeginning() throw (logic_error)

// If a list is not empty, then moves the cursor to the beginning of
// the list. If list is empty, throws logic error.

{
 
}

//--------------------------------------------------------------------

template <typename DataType>
void List<DataType>::gotoEnd() throw (logic_error)

// If a list is not empty, then moves the cursor to the end of the
// list. Otherwise, throws logic_error.

{
 
}

//--------------------------------------------------------------------

template <typename DataType>
bool List<DataType>::gotoNext() throw (logic_error)

// If the cursor is not at the end of a list, then moves the
// cursor to the next item in the list and returns true. Otherwise, 
// leaves cursor unmoved and returns false.

{
  
}

//--------------------------------------------------------------------

template <typename DataType>
bool List<DataType>::gotoPrior() throw (logic_error)

// If the cursor is not at the beginning of a list, then moves the
// cursor to the preceeding item in the list and returns true.
// Otherwise, returns false.

{


    return true;
}

//--------------------------------------------------------------------

template <typename DataType>
DataType List<DataType>::getCursor() const throw (logic_error)

// Returns the item marked by the cursor. Requires that list is not empty.

{

}

//--------------------------------------------------------------------

template <typename DataType>
void List<DataType>::showStructure() const

// Outputs the items in a list. If the list is empty, outputs
// "Empty list". This operation is intended for testing and
// debugging purposes only.

{
  
}

//--------------------------------------------------------------------
//
//                        Programming Exercises 2 and 3
//
//--------------------------------------------------------------------

// Programming exercise 2

template < typename DataType >
void List<DataType>:: moveToBeginning() throw ( logic_error )

// Removes the item marked by the cursor from a list and
// reinserts it at the beginning of the list. Moves the cursor to the
// beginning of the list.

{
    ListNode *temp;   //  Pointer to prior node

  
}

//--------------------------------------------------------------------
// Programming exercise 3

template < typename DataType >
void List<DataType>:: insertBefore ( const DataType &newDataItem )
    throw ( logic_error )

// Inserts newDataItem before the cursor. If the list is empty, then
// newDataItem is inserted as the first (and only) item in the list.
// In either case, moves the cursor to newDataItem.
// -------------
// NOTE regarding the logic_error if the list is full:
// Because determining whether the free store/heap would be
// able to satisfy the next request is ugly and compiler
// dependent, in our isFull() we don't really check whether the next
// dynamic memory allocation would work, but hard-code it to false.
// If you wish to teach your students how to check for that, then
// the requirement that the list be not full will make more sense.
// -------------

{
   
}

#endif		// #ifndef LISTLINKED_CPP
