#include <iostream>
using namespace std;
int target(int arr[], int n)
{
  int target, a, b, c, d;
  target = 8;
  for (int i = 0; i < n - 3; i++)
  {
    //	 for(int j=i+1;j<n-2;j++){
    //	for(int k=j+1;k<n;k++){
    //	 		for(int l=k+1;l<n;k++)
    //		 }
    //	 }
    //	}
    cout << arr[i] << endl;
  }
}
int main()
{
  int arr[5] = {2, 3, 1, 4, 3};
  int n = sizeof(arr) / sizeof(arr[0]);

  target(arr, n);

  return 0;
}
