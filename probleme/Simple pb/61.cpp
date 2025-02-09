#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  while (a % b)
  {
    int r = a % b;
    a = b;
    b = r;
  }

  for (int d = 1; d <= b; d++)
  {
    if (b % d == 0)
      cout << d << " ";
  }

  return 0;
}
