
#include "StdAfx.h"
#include <iostream>
#include "List.h"

using namespace std;

List::List(void)
{size = 0;}


List::~List(void)
{
}

bool List::IsEmpty () { return size==0;}
bool List::IsFull () {return (size == MaxSize); }

void List::Insert (DataType e) //function that inserts an item into a list
{
 if (!(IsFull()))
 {    Item[size] = e;
      size++;
 }
}


/* ordinary function - not a member function */
void Swap (DataType& x, DataType& y) //function that swaps items on a list through a user define type Temp
{                                
  DataType Temp;
  Temp = x;
  x = y;
  y =Temp;
}                                  

void List::Delete (DataType e) //function that deletes an item from a list
{ 
 int index = 0;    
if  (!(IsEmpty()))
  {
    while ((index  < size) && (Item[index] != e) )
       index++;
    if (Item[index] == e)
    {  
     Swap (Item[index], Item[size-1]);
     size--;
    }
  }
}


void List::ShowData () //function that displays the elements of a list
{
 for (int index = 0; index < size; index++)
    cout << Item[index] << "   ";
    cout << endl;
	
}

