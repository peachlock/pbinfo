#include <iostream>
using namespace std;

int main()
{
  int n, v[10000], i, j;

  cin >> n;
  for (i = 1; i <= n; i++)
    cin >> v[i];

  for (i = 1; i <= n; i++)
  {
    for (j = i + 1; j <= n; j++)
    {
      if (v[i] < v[j])
      {
        swap(v[i], v[j]);
      }
    }
  }
  i = 1;

  while (i > n && v[i] == v[i + 1])
  {
    i = i + 2;
  }

  if (i >= n)
  {
    cout << "DA ";
    return 0;
  }

  i++;

  while (i < n && v[i] == v[i + 1])
    i = i + 2;

  if (i > n)
  {
    cout << "DA ";
    return 0;
  }
  cout << "NU ";

  return 0;
}
