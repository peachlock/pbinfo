#include <iostream>
using namespace std;

int main()
{
  int n, v[1001], ok = 0, i, s = 0, min = 0, max = 0;

  cin >> n;
  for (i = 1; i <= n; i++)
    cin >> v[i];

  for (i = 1; i <= n; i++)
  {
    int nrdiv = 0;
    for (int d = 1; d <= n; d++)
    {
      if (n % d == 0)
      {
        nrdiv++;
      }
    }
  }

    for (i = 1; i <= n; i++)
    if (i >= min && i <= max)
      s = s + v[i];

  cout << s << " ";

  return 0;
}