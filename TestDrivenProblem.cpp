#include <iostream>
using namespace std ;

bool isSorted(const int* arr, const int size){

    for ( int i = 0 ; i < size-1 ; i++ ){
        if( *( arr + i ) >= *( arr + i + 1) ){
            return false ;
        }
    }
    return true ;
}

int main() {

    int* arr1 = new int[5]{1, 2, 3, 4, 5};
    int* arr2 = new int[5]{5, 2, 8, 1, 3};
    int* arr3 = new int[5]{1, 1, 2, 3, 3};
    int* arr4 = new int[1]{7};
    int* arr5 = new int[5]{5, 4, 3, 2, 1};
    int* arr6 = new int[5]{-3, -1, 0, 2, 5};
    int* arr7 = new int[0];
    int* arr8 = new int[4]{4, 4, 4, 4};

   bool result1 = isSorted(arr1, 5);
   bool result2 = isSorted(arr2, 5);
   bool result3 = isSorted(arr3, 5);
   bool result4 = isSorted(arr4, 1);
   bool result5 = isSorted(arr5, 5);
   bool result6 = isSorted(arr6, 5);
   bool result7 = isSorted(arr7, 0);
   bool result8 = isSorted(arr8, 4);

  cout << "Already sorted:          " << result1 << endl;
  cout << "Unsorted:                " << result2 << endl;
  cout << "Sorted with duplicates:  " << result3 << endl;
  cout << "One element:             " << result4 << endl;
  cout << "Descending order:        " << result5 << endl;
  cout << "Negative values:         " << result6 << endl;
  cout << "Empty array:             " << result7 << endl;
  cout << "All elements identical:  " << result8 << endl;

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    delete[] arr4;
    delete[] arr5;
    delete[] arr6;
    delete[] arr7;
    delete[] arr8;

    
    return 0;
}