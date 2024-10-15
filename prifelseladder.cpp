
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int s;
  double gs;
  cin >> s;

  if (s <= 1000)
  {
    gs = s * (0.20) * (0.30); // 20% * 30%
    cout << gs << endl;
  }
  else if (s <= 2000)
  {
    gs = s * (0.30) * (0.40); // 30% * 40%
  }
  else
  {
    gs = s * (0.50) * (0.60); // 50% * 60%
  }

  cout << gs << endl;
  return 0;
}
