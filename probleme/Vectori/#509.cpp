#include <iostream>
using namespace std;

int main()
{
  int n, v[1001], i;

  cin >> n;
  for (i = 1; i <= n; i++)
    cin >> v[i];

  for (i = 1; i <= n - 1; i++)
    for (int j = i + 1; j <= n; j++)
      if (v[i] > v[j])
      {
        int aux = v[i];
        v[i] = v[j];
        v[j] = aux;
      }

  for (i = 1; i <= n; i++)
    cout << v[i] << " ";

  return 0;
}
