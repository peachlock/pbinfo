// rotirea elementelor cu o pozitie la dreapta si afisarea sirului
#include <iostream>
using namespace std;

int main()
{
  int v[1501], n, i, aux;

  cin >> n;

  for (i = 1; i <= n; i++)
    cin >> v[i];

  aux = v[n];

  for (i = n; i >= 2; i--)
    v[i] = v[i - 1];

  v[i] = aux;

  for (i = 1; i <= n; i++)
    cout << v[i] << " ";

  return 0;
}
