#include <iostream>
using namespace std;

class A
{
public:
  void foo() { std::cout << "A::foo" << std::endl; }

protected:
  void bar() { std::cout << "A::bar" << std::endl; }
};

class B
{
public:
  void baz() { std::cout << "B::baz" << std::endl; }

protected:
  void qux() { std::cout << "B::qux" << std::endl; }
};

class C : private A, private B
{
public:
  void test()
  {
    foo(); // OK
    bar(); // OK
    baz(); // OK
    qux(); // OK
  }
  // Provide public access to methods from B if needed
  void callBaz() { baz(); }
};

int main()
{
  C s;
  s.callBaz(); // Correct way to access baz() through C
  return 0;
}
