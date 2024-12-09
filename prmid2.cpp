#include <iostream>
using namespace std;

int main()
{
  int *p;        // wild pointer
  int *c = NULL; // null pointer

  cout << "Size of wild pointer: " << sizeof(p) << " bytes" << endl;
  cout << "Size of null pointer: " << sizeof(c) << " bytes" << endl;

  return 0;
}
