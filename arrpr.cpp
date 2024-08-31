#include<iostream>
using namespace std;

void merge(int arr[], int arr2[], int add[], int size) {
    for (int i = 0; i < size; i++) {
        add[i] = arr[i] + arr2[i];
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {4, 2, 6, 7, 8};
    int add[5];

    merge(arr, arr2, add, 5);

    cout << "Merged array: ";
    for (int i = 0; i < 5; i++) {
        cout << add[i] << " ";
    }
    cout << endl;

    return 0;
}