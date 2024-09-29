#include<iostream>
using namespace std;

void printUniqueNumbers(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        bool isUnique = true;
        for(int j = 0; j < n; j++) {
            if(i != j && arr[i] == arr[j]) {
                isUnique = false;
                           cout << " Not Unique number: " << arr[i] << endl;
                break;
            }
        }
        if(isUnique) {
            cout << "Unique number: " << arr[i] << endl;
        }
    }
}

int main() {
    int arr[8] = {1, 1, 2, 3, 4, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printUniqueNumbers(arr, n);

    return 0;
}