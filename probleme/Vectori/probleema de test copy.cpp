#include <iostream>
using namespace std;

int main()
{
  int v[100], n, min = 0, max = 0, s = 0;

  cin >> n;

  for (int i = 1; i < n; i++)
  {
    cin >> v[i];
  }

  // gasirea elementelor prime din vctor
  for (int i = 1; i <= n; i++)
  {
    int nrdiv = 0, ok = 1;

    if (v[i] <= 1)
    {
      ok = 0;
    }
    else
    {
      for (int d = 1; d <= v[i]; d++)
      {
        if (v[i] % d == 0)
        {
          nrdiv++;
        }
      }
      if (nrdiv != 2)
      {
        ok = 0;
      }
    }

    if (ok == 1)
    {
      min = v[i];
    }
  }

  cout << min;

  return 0;
}
