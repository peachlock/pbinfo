// Sa se stearga dintr-un vector toate elmentele pare

#include <iostream>
using namespace std;

int main()
{
  int n, v[1501], i, p, j;

  cin >> n;

  for (i = 1; i <= n; i++)
    cin >> v[i];

  i = 1;
  while (i <= n)
  {
    if (v[i] % 2 == 0)
    {
      for (j = i; j <= n - 1; j++)
      {
        {
          v[j] = v[j + 1];
        }
      }
      n--;
    }
    else
    {
      i++;
    }
  }

  for (i = 1; i <= n; i++)
    cout << v[i] << " ";

  return 0;
}
