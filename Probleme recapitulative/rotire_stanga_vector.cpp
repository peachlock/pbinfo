#include <iostream>
using namespace std;

int main()
{
  int n, x[101], i, aux;

  cin >> n;
  for (i = 1; i <= n; i++)
    cin >> x[i];

  aux = x[1];
  for (i = 1; i <= n - 1; i++)
    x[i] = x[i + 1];

  x[n] = aux;
  for (i = 1; i <= n; i++)
    cout << x[i] << " ";

  return 0;
}
