// Afişarea pe câte o linie cele n şiruri care se obţin prin rotirea repetată a elementelor şirului x cu o poziţie spre stânga.

#include <iostream>
using namespace std;

int main()
{
  int v[1501], i, n, aux, cnt;

  cin >> n;
  for (i = 1; i <= n; i++)
    cin >> v[i];
  cnt = n;

  for (i = 1; i <= n; i++)
  {
    while (cnt > 0)
    {
      aux = v[1];

      for (i = 1; i <= n - 1; i++)
        v[i] = v[i + 1];

      v[n] = aux;

      for (i = 1; i <= n; i++)
        cout << v[i] << " ";

      cout << endl;
      cnt--;
    }
  }

  return 0;
}
