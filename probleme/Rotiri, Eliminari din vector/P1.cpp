// rotirea elementelor spre stanga si apoi afisarea noului sir

#include <iostream>
using namespace std;

int main()
{
  int v[1501], i, n, aux;

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
