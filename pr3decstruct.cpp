#include <iostream>
using namespace std;

struct Table
{
  int number;
  int products[10];
};

Table computeTable(int number)
{
  Table table;
  table.number = number;
  for (int i = 0; i < 10; ++i)
  {
    table.products[i] = number * (i + 1);
  }
  return table;
}

void printTable(const Table &table)
{
  for (int i = 0; i < 10; ++i)
  {
    cout << table.products[i] << endl;
  }
}

int main()
{
  int num;
  cout << "Enter a number to print its multiplication table: ";
  cin >> num;

  Table result = computeTable(num);

  cout << "Multiplication Table for " << num << ":" << endl;
  printTable(result);

  return 0;
}
