#include <iostream>
using namespace std;

class CIRCLE
{
  int r;

public:
  CIRCLE(int r) : r(r) {}

  int area() const
  {
    const int pii = 3; // Approximation of pi as an integer
    return pii * r * r;
  }
};

class RECTANGLE : public CIRCLE
{
  int l;

public:
  RECTANGLE(int r, int l) : CIRCLE(r), l(l) {}

  int rect() const
  {
    return l * r;
  }
};

int main()
{
  CIRCLE c(5);
  RECTANGLE d(4, 5);

  cout << "Area of circle: " << c.area() << endl;
  cout << "Area of rectangle: " << d.rect() << endl;

  return 0;
}