#include <iostream>
using namespace std;

int main()
{
  int n, a[101], i, d, cnt = 0, s = 0;
  cin >> n;
  for (i = 1; i <= n; i++)
    cin >> a[i];

  // a) el vect in ordine inversa
  cout << "a) ";
  for (i = n; i >= 1; i--)
    cout << a[i] << " ";

  // b) nr de elem perfecte
  cout << endl;
  cout << "b) ";

  for (i = 1; i <= n; i++)
  {        // parcurgem toate elementele vectorului
    s = 0; // resetăm suma pentru fiecare element
    for (d = 1; d < a[i]; d++)
    { // divizorii proprii ai lui a[i]
      if (a[i] % d == 0)
        s = s + d;
    }
    if (s == a[i]) // dacă suma divizorilor = numărul
      cnt++;
  }

  cout << cnt << endl;

  return 0;
}
