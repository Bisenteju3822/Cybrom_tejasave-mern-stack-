#include <iostream>
#include <cstring>

int main()
{
  // Source string
  char source[] = "Hello, World!";

  // Destination string (Make sure it is large enough to hold the source string)
  char destination[20];

  // Copy the source string to the destination string
  strcpy(destination, source);

  // Display the result
  std::cout << "Source: " << source << std::endl;
  std::cout << "Destination: " << destination << std::endl;

  return 0;
}