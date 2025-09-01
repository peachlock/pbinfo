#include <iostream>
using namespace std;

int main()
{
  int n, x[101], i, aux, aux2;

  cin >> n;

  for (i = 1; i <= n; i++)
    cin >> x[i];

  aux = x[n / 2];
  for (i = n / 2; i >= 2; i--)
    x[i] = x[i - 1];
  x[1] = aux;

  aux2 = x[n / 2 + 1];
  for (i = n / 2 + 1; i <= n; i++)
    x[i] = x[i + 1];
  x[n] = aux2;

  for (i = 1; i <= n; i++)
    cout << x[i] << " ";

  return 0;
}
