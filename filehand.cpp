#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream outFile("example.txt"); // Open file for writing
  outFile << "Hello, file!" << endl;
  outFile.close(); // Close file

  ifstream inFile("example.txt"); // Open file for reading
  string line;
  while (getline(inFile, line))
  {
    cout << line << endl;
  }
  inFile.close(); // Close file
  return 0;
}