#include <iostream>
using namespace std;

void moveZerosToEnd(int arr[], int n) {
    int count = 0;  // Count of non-zero elements

    // Traverse the array. If the element is non-zero, then
    // replace the element at index 'count' with this element
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i]; // Here count is incremented
        }
    }

    // Now all non-zero elements have been shifted to the front
    // and 'count' is set as the index of the first 0. Make all
    // elements 0 from count to end.
    while (count < n) {
        arr[count++] = 0;
    }
}

int main() {
    int arr[] = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveZerosToEnd(arr, n);

    cout << "Modified array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
