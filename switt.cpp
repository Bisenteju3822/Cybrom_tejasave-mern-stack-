#include<iostream>
using namespace std;

int main() {
    int hour;
    cin >> hour;
    int minutes;
    cin >> minutes;
    cout << "A For AM" << endl;
    cout << "P For PM" << endl;
    char c;
    cin >> c;
    
    switch(c) {
        case 'A': {
            if(hour >= 00 && hour <= 11 && minutes >= 0 && minutes <= 59) {
                cout <<   hour << ":" 
                     << minutes << " AM" << endl;
            } else {
                cout << "Invalid time for AM" << endl;
            }
            break;
        }
        case 'P': {
            if(hour >= 12 && hour <= 23 && minutes >= 00&& minutes <= 59) {
                cout <<  hour << ":" 
                     << minutes << " PM" << endl;
            } else {
                cout << "Invalid time for PM" << endl;
            }
            break;
        }
        default: {
            cout << "Invalid input" << endl;
            break;
        }
    }
    return 0;
}
