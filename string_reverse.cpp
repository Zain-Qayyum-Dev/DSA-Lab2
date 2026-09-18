#include <iostream>
#include <string>

using namespace std ;

int main () {
 
    string* str = new string ;
    cout << "Enter a string : " ;
    cin >> *str ;
    cout <<"Reversed String is : ";
    for ( int i = (*str).size() -1 ; i >= 0 ; i-- ) {
        cout << (*str)[i] ;
    }
   

}