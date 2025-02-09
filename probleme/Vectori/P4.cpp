#include <iostream>

using namespace std;

int main()
{
  int v[101], n, i, ok = 1;

  /// citirea sirului
  cin >> n;
  for (i = 1; i <= n; i++)
    cin >> v[i];

  /// mesaj daca este sau nu palindrom
  for (i = 1; i <= n / 2; i++)
  {
    if (v[i] != v[n + 1 - i])
      ok = 0;
  }

  if (ok == 1)
    cout << "DA";
  else
    cout << "NU";

  return 0;
}
