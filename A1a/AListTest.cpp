
#include "AList.h"

#include <iostream>
using namespace std;

int main(){

    AList<int> s1 ;
    //add left and right
    cout << "adding elements: " << endl;
    s1.addLeft(10);
    s1.addLeft(20);
    s1.addRight(30);
    s1.addRight(40);
    s1.display();

    //remove right and left
    cout << "removing elements: " << endl;
    s1.removeRight();
    s1.removeLeft();
    s1.display();

    //removing the list
    cout << "clearing the list: " << endl; 
    s1.clear();
    s1.display();

    //ddisplay the array contents
    cout << "debug display: " << endl;
    s1.ddisplay();
    
}