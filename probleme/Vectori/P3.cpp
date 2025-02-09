#include <iostream>

using namespace std;

int main()
{
  int n, v[101], i;

  cin >> n;
  for (i = 1; i <= n; i++)
    cin >> v[i];

  /// a) elementele din prima jumatate a sirului
  cout << "a) ";
  for (i = 1; i <= n / 2; i++)
    cout << v[i] << " ";
  cout << endl;

  /// b) elementele din a doua jumatate a sirului in ordinea inversa citirii
  cout << "b) ";
  for (i = n; i > n / 2; i--)
    cout << v[i] << " ";
  cout << endl;

  /// c) elementele divizibile cu 3 din sir
  cout << "c) ";
  for (i = 1; i <= n; i++)
  {
    if (v[i] % 3 == 0)
      cout << v[i] << " ";
  }
  cout << endl;

  /// d) elementele impare de pe poziţii pare din şir
  cout << "d) ";
  for (i = 1; i <= n; i++)
  {
    if (v[i] % 2 != 0 && i % 2 == 0)
      cout << v[i] << " ";
  }
  cout << endl;

  /// e) poziţiile elementelor de o singură cifră din şir
  cout << "e) ";
  for (i = 1; i <= n; i++)
  {
    if (-10 < v[i] && v[i] < 10)
      cout << i << " ";
  }
  cout << endl;

  /// f) ulimele doua elemente din sir
  cout << "f) ";
  cout << v[n - 1] << " ";
  cout << v[n] << " ";
  cout << endl;

  /// g) suma elementelor din sir
  cout << "g) ";
  int sum = 0;
  for (i = 1; i <= n; i++)
    sum = sum + v[i];
  cout << sum << " ";
  cout << endl;

  /// h) numărul de apariţii a primei valori din şir în şir
  cout << "h) ";
  int cnt = 0;
  for (i = 1; i <= n; i++)
    if (v[1] == v[i])
      cnt++;
  cout << cnt << " ";
  cout << endl;

  /// i) primul element urmat de ultimul, al doilea urmat de penultimul, etc.
  cout << "i) ";
  for (i = 1; i <= n / 2; i++)
    cout << v[i] << " " << v[n + 1 - i] << " ";
  if (n % 2 != 0)
    cout << v[n / 2 + 1] << " ";
  cout << endl;

  return 0;
}
