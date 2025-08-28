#include <iostream>
using namespace std;

int main()
{
  int n, i, j, v[101];

  cin >> n;
  for (i = 1; i <= n; i++)
    cin >> v[i];

  for (i = 1; i <= n - 1; i++)
    for (j = i + 1; j <= n; j++)
      if (v[i] < v[j])
        swap(v[i], v[j]);

  for (i = 1; i <= n; i++)
    cout << v[i] << " ";
  return 0;
}
