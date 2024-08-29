#include <iostream>
using namespace std;

// Function to remove vowels from a string
void removeVowels(char* str) {
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // Null-terminate the modified string
}

int main() {
    char arr[20] = "geeksforgeeks";
    removeVowels(arr);
    cout << "Modified string: " << arr << endl;
    return 0;
}
