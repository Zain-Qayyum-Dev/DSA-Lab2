#include <iostream>
#include <cassert>
using namespace std;

bool isSorted(const int* arr, const int size) {
    for (int i = 0; i < size - 1; i++) {
        if (*(arr + i) > *(arr + i + 1)) {
            return false;
        }
    }
    return true;
}

void testSortedArray() {
    int* arr = new int[5]{1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true);
    delete[] arr;
    cout << "testSortedArray passed\n";
}

void testUnsortedArray() {
    int* arr = new int[5]{5, 2, 8, 1, 3};
    assert(isSorted(arr, 5) == false);
    delete[] arr;
    cout << "testUnsortedArray passed\n";
}

void testDuplicateValues() {
    int* arr = new int[5]{1, 1, 2, 3, 3};
    assert(isSorted(arr, 5) == true);
    delete[] arr;
    cout << "testDuplicateValues passed\n";
}

void testSingleElement() {
    int* arr = new int[1]{7};
    assert(isSorted(arr, 1) == true);
    delete[] arr;
    cout << "testSingleElement passed\n";
}

void testDescendingArray() {
    int* arr = new int[5]{5, 4, 3, 2, 1};
    assert(isSorted(arr, 5) == false);
    delete[] arr;
    cout << "testDescendingArray passed\n";
}

void testNegativeValues() {
    int* arr = new int[5]{-3, -1, 0, 2, 5};
    assert(isSorted(arr, 5) == true);
    delete[] arr;
    cout << "testNegativeValues passed\n";
}

void testEmptyArray() {
    int* arr = new int[0];
    assert(isSorted(arr, 0) == true);
    delete[] arr;
    cout << "testEmptyArray passed\n";
}

void testAllIdentical() {
    int* arr = new int[4]{4, 4, 4, 4};
    assert(isSorted(arr, 4) == true);
    delete[] arr;
    cout << "testAllIdentical passed\n";
}

int main() {
    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testEmptyArray();
    testAllIdentical();

    cout << "\nAll tests passed!\n";
    return 0;
}