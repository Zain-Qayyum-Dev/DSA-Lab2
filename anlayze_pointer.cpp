#include <iostream>
using namespace std;

void analyze_pointer ( int* ptr ){
    cout << "Variable address :" << ptr <<endl ;
    cout << "Variable vale : "<< *ptr <<endl ;
}

int main() {

    int stack_var = 10 ;
    int* heap_var = new int (20) ;

    analyze_pointer( & stack_var );
    analyze_pointer( heap_var);
    
    cout << endl;
    
    return 0;
}