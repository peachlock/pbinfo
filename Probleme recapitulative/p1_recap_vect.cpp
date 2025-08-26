#include <iostream>
using namespace std;

int main()
{
  int n, v[101], i;

  cin >> n;
  for (i = 1; i <= n; i++)
    cin >> v[i];

  // a) el din prima jumatate
  cout << "a) ";
  for (i = 1; i <= n / 2; i++)
    cout << v[i] << " ";

  cout << endl;

  // b) el din a doua jum a sirului in ordinea inversa citirii
  cout << "b) ";
  for (i = n; i >= n / 2 + 1; i--)
    cout << v[i] << " ";

  cout << endl;

  // c) el diviziblie cu 3
  cout << "c) ";
  for (i = 1; i <= n; i++)
    if (v[i] % 3 == 0)
      cout << v[i] << " ";

  cout << endl;

  // d) el impare de pe pozitii pare
  cout << "d) ";
  for (i = 1; i <= n; i++)
    if (i % 2 == 0)
      if (v[i] % 2 != 0)
        cout << v[i] << " ";

  cout << endl;

  // e) poz el de o sg cifra
  cout << "e) ";
  for (i = 1; i <= n; i++)
    if (v[i] % 10 == v[i])
      cout << v[i] << " ";

  cout << endl;

  // f) ultimele doua el
  cout << "f) " << v[n - 1] << " " << v[n] << endl;

  // g) suma el din sir
  cout << "g) ";
  int s = 0;
  for (i = 1; i <= n; i++)
    s = s + v[i];

  cout << s << " " << endl;

  // h) nr de aparitii a primei valori din sir in sir
  cout << "h) ";
  int ap = 1;
  for (i = 2; i <= n; i++)
    if (v[i] == v[1])
      ap++;
  cout << ap << " " << endl;

  // i) primul element urmat de ultimul, al doilea urmat de penultimul, etc
  cout << "i) ";
  int j;
  for (i = 1; i <= n / 2; i++)
    cout << v[i] << " " << v[n + 1 - i] << " ";

  if (n % 2)
    cout << v[n / 2 + 1];

  return 0;
}
