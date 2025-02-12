#ifndef ALIST_H
#define ALIST_H

#include <iostream>
#include <deque>
using namespace std;

template <typename Object>
class AList 
{
  public:
    AList()
      {  
         theCapacity = 12 ;
         objects = new Object[ theCapacity ]; 
         theSize = 0 ;
         left = 0 ; // array index of location just before the left-most list element 
         right = 1 ; // array index just past the right-most list element
      }
      
    ~AList( )
      { delete [ ] objects; }

    bool empty( ) const  { return size( ) == 0; }
    int size( ) const { return theSize; }
    void clear( ){
        // remove all list contents 
        // 
        // Implement this...
        theSize = 0 ;
         left = 0 ; 
         right = 1 ; 
        //objects = new Object[ theCapacity ];
    }

    // Operations 

    void addLeft( const Object x )// Insert a new object at the left end 
    {
	// Implement this....
        theSize ++ ;
	objects[left] = x ;
        left = (left-1 + theCapacity) % theCapacity ;
    }

    void addRight( const Object x )// Insert a new object at the right end
    {
        theSize ++ ;
	objects[right] = x ;
        right = (right+1) % theCapacity ;
    }

    Object removeRight( )// Remove and return the object at the right end
    {
        // Implement this 
        theSize -- ;
        right = (right-1 +  theCapacity) % theCapacity ;
        return objects[right] ;
      
    }

    Object removeLeft( )// Remove and return the object at the left end
    {
        // Implement this 
        theSize -- ;
        left = (left + 1 - theCapacity) % theCapacity ;
        return objects[left] ;
    }

    void display() const // print out the contents of the deque
    {
       if (empty()) {
            cout << "Deque is empty" << endl;
            return;
       }

      int index = left + 1;
    for (int i = 0; i < theSize; i++){
      cout << objects[index] << " "; 
      index = (index + 1) % theCapacity ;
    }
    cout << endl;
       // Implement this.
    }

    void ddisplay() const // print out the contents of the objects 
    // array, and relevant variables, for debugging or verifying 
    // correctness. 
    {
      cout << "the Capacity: " << theCapacity << endl << "the Size: " << theSize << endl;
      cout << "left: " << left << endl << "right: " << right << endl;
      cout << "Array contents: " ;
      for (int i = 0; i < theCapacity; i++){
        cout << objects[i] << " ";

      }
        // Implement this. 
    }


  private:
    int theSize;
    int left;
    int right;
    int theCapacity;
    Object * objects;
};

#endif
