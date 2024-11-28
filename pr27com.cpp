#include <iostream>
#include <cstring>

using namespace std;

void reverse(char *name)
{
  int len = strlen(name);
  int start = 0;
  int end = len - 1;
  while (start < end)
  {
    swap(name[start], name[end]);
    start++;
    end--;
  }
}

int main()
{
  char name[100];
  cin >> name;

  // Make a copy of the original string
  char original[100];
  strcpy(original, name);

  // Reverse the original string
  reverse(name);

  cout << "Reversed string: " << name << endl;

  // Compare the reversed string with the original
  if (strcmp(name, original) == 0)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "Not equal" << endl;
  }

  return 0;
}
