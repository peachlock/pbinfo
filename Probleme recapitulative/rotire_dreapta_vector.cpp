#include <iostream>
using namespace std;

int main()
{
  int n, v[101], i, aux;

  cin >> n;
  for (i = 1; i <= n; i++)
    cin >> v[i];

  aux = v[n];
  for (i = n; i >= 2; i--)
    v[i] = v[i - 1];

  v[1] = aux;

  for (i = 1; i <= n; i++)
    cout << v[i] << " ";
  return 0;
}
