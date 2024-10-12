#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n)
{
  if (n <= 1)
  {
    return false;
  }
  for (int i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}

// Function to check for primes in a 2D array
void checkPrimesIn2DArray(int arr[][3], int rows, int cols)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (isPrime(arr[i][j]))
      {
        cout << arr[i][j] << " at (" << i << "," << j << ") is a prime number." << endl;
      }
      else
      {
        cout << arr[i][j] << " at (" << i << "," << j << ") is not a prime number." << endl;
      }
    }
  }
}

// Main function
int main()
{
  int arr[3][3] = {{2, 3, 4}, {3, 5, 5}, {7, 10, 11}};
  checkPrimesIn2DArray(arr, 3, 3);

  return 0;
}
