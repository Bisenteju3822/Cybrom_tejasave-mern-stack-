#include <iostream>
using namespace std;

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  std::cout << arr[10] << std::endl; // Error: accessing out-of-bounds element
  return 0;
}
