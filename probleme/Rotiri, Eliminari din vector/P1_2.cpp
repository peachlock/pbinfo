// rotirea elementelor spre stanga
#include <iostream>
using namespace std;

int main()
{
  int n, v[101], aux, i;

  cin >> n;

  for (i = 1; i <= n; i++)
    cin >> v[i];

  aux = v[1];

  for (i = 1; i <= n - 1; i++)
    v[i] = v[i + 1];

  v[n] = aux;

  for (i = 1; i <= n; i++)
    cout << v[i] << " ";

  return 0;
}
