// rotirea el. situate pe pozitii de la 2 la n-1 cu o poz spre dreapta si afisarea sirului sirul

#include <iostream>
using namespace std;

int main()
{
  int v[1501], n, i, aux;

  cin >> n;

  for (i = 1; i <= n; i++)
    cin >> v[i];

  aux = v[n - 1];

  for (i = n - 1; i >= 2; i--)
    v[i] = v[i - 1];

  v[2] = aux;

  for (i = 1; i <= n; i++)
    cout << v[i] << " ";

  return 0;
}
