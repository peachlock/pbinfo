// rotirea primei jumatati o poz spre dreapta, iar a doua, o poz spre stanga si afisare

#include <iostream>
using namespace std;

int main()
{
  int v[1501], i, n, aux1, aux2;

  cin >> n;

  for (i = 1; i <= n; i++)
    cin >> v[i];

  aux1 = v[n / 2];
  for (i = n / 2; i >= 2; i--)
    v[i] = v[i - 1];

  v[i] = aux1;

  aux2 = v[n / 2 + 1];

  for (i = n / 2 + 1; i <= n - 1; i++)
    v[i] = v[i + 1];

  v[n] = aux2;

  for (i = 1; i <= n; i++)
    cout << v[i] << " ";

  return 0;
}
