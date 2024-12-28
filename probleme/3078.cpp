#include <iostream>
using namespace std;

int main()
{
  int n, k, P = 1, u, OK = 0;

  cin >> n >> k;

  while (n > 0)
  {
    u = n % 10;
    if (u != k)
    {
      P = P * u;
      OK = 1;
    }
    n = n / 10;
  }

  if (OK == 0)
  {
    cout << 0 << " ";
  }
  else
  {
    cout << P << " ";
  }
  return 0;
}
