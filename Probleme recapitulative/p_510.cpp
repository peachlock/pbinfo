#include <iostream>
using namespace std;

int main()
{
  int n, v[101], i, j, d, s, ok = 1;

  cin >> n;

  for (i = 1; i <= n; i++)
    cin >> v[i];

  for (i = 1; i <= n - 1; i++)
    for (j = i + 1; j <= n; j++)
      if (v[i] > v[j])
        swap(v[i], v[j]);

  for (i = 1; i <= n; i++)
  {
    ok = 1;
    for (d = 2; d * d <= v[i] && ok == 1; d++)
    {
      if (v[i] % d == 0)
        ok = 0;
    }
    if (ok == 1 && v[i] >= 2)
      cout << v[i] << " ";
  }

  return 0;
}
