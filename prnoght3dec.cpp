#include <iostream>
using namespace std;
/*int cube(int a){
  return a*a*a;
}
int main(){
int a;
cout<<"enter your number=";
cin>>a;
cout<<"the cube a number="<<cube(a);




  return 0;
}*/
/*int diameter(int r){
  return r*r;

}
int circumference(int r){
  const  float pii=3.14;
  return 2*pii*r;
}
int area(int r){
  const float pii=3.14;
  return pii*r*r;
}
int main(){
int r;
cout<<"Enter radius of circle"<<endl;
cin>>r;
cout<<"diameter of circle::"<<diameter(r)<<endl;
cout<<"circumference of circle::"<<circumference(r)<<endl;
cout<<"area of circle::"<<area(r)<<endl;

}
*/
/*int max(int a,int b){
  return (a>b)?a:b;

}
int min(int a,int b){
  return (a<b)?a:b;

}
int main(){
  int a,b;
  cout<<"Enter value of a and b::"<<endl;
  cin>>a>>b;
  cout<<"max ::"<<max(a,b)<<endl;
  cout<<"min ::"<<min(a,b)<<endl;

}*/
/*bool even(int n){
  if(n%2==0){
    return true;
   }
   else{
    return false;
   }

}
bool odd(int n){
    if(n%2!=0){
    return true;
   }
   else{
    return false;
   }

}


#include <iostream>
using namespace std;

// Function to check if a number is even
bool even(int n) {
    return n % 2 == 0;
}

// Function to find and print if elements in the array are even or odd
void find(bool (*even)(int), int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        if (even(arr[i])) {
            cout << arr[i] << " is Even" << endl;
        } else {
            cout << arr[i] << " is Odd" << endl;
        }
    }
}

int main() {
    int arr[5];
    int n = 5;
    cout << "Enter your array elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    find(even, n, arr);
    return 0;
}*/

// Function to check if a number is even
bool even(int n)
{
  return n % 2 == 0;
}

// Function to find and print if elements in the array are even or odd
/*void find(bool (*even)(int), int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        if (even(arr[i])) {
            cout << arr[i] << " is Even" << endl;
        } else {
            cout << arr[i] << " is Odd" << endl;
        }
    }
}

int main() {
    int arr[5];
    int n = 5;
    cout << "Enter your array elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    find(even, n, arr);
    return 0;
}*/

// Function to check if a number is prime
/*bool prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
     return false;
    }
    return true; // Moved outside the loop
}

int main() {
    int n;
    cout << "Enter a number:" << endl;
    cin >> n;
    cout << (prime(n) ? "true" : "false") << endl; // Proper ternary output
    return 0;
}
*/
int armstrong(int n)
{
  int sum = 1;
  int r;
  int original = n;
  while (n != 0)
  {
    r = n % 10;
    sum += r * r * r;
    n /= 10;
  }
  return sum == original;

  int main()
  {
    int n;
    cout << "Enter a number:" << endl;
    cin >> n;
    cout << (armstrong(n) ? "true" : "false") << endl;
  }
