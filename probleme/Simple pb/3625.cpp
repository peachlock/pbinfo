
#include <iostream>
using namespace std;

int main()
{
  int n, u, a = 0, b = 0, c = 0, d = 0, e = 1, f = 0, cn;
  cin >> n;
  cn = n;

  while (n > 0)
  {
    u = n % 10;
    a = a + u * u;

    if (u % 2 != 0)
      b = b + u;

    if (u % 3 == 0)
      c = c + u;

    if (u > 5)
      d = d + 1;

    if (u != 0)
      e = e * u;

    n = n / 10;
  }

  f = cn % 10 + u;

  cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " ";

  return 0;
}