#include <iostream>
using namespace std;

int main()
{
  int n, sp = 0, si = 0, sd = 0, cs = 0, sc = 0, u;
  cin >> n;
  int cn = n;
  while (n > 0)
  {
    u = n % 10;
    sp = sp + u * u;
    if (u % 2 != 0)
    {
      si = si + u;
    }
    if (u % 3 == 0)
    {
      sd = sd + u;
    }
    if (u > 5)
    {
      cs = cs + 1;
    }
    n = n / 10;
  }

  sc = sc + cn % 10;
  while (cn >= 10)
  {
    cn = cn / 10;
  }
  sc = sc + cn;

  cout << sp << " " << si << " " << sd << " " << cs << " " << sc << " ";

  return 0;
}
