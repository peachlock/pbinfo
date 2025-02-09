#include <iostream>
using namespace std;
int main()
{

  int v[101], n, i;

  // citire sir
  cin >> n;
  for (i = 1; i <= n; i++)
    cin >> v[i];

  // a) afisare sir
  cout << "a) ";
  for (i = 1; i <= n; i++)
    cout << v[i] << " ";

  // b) elementele sirului in ordinea inversa citirii
  cout << endl
       << "b) ";
  for (i = n; i >= 1; i--) // mers descrescator
    cout << v[i] << " ";

  cout << endl;

  // c) elementele pare din sir
  cout << "c) ";
  for (i = 1; i <= n; i++)
  {
    if (v[i] % 2 == 0)
      cout << v[i] << " ";
  }
  cout << endl;

  // d) elementele de pe pozitii impare
  cout << "d) ";
  for (i = 1; i <= n; i++)
  {
    if (i % 2 != 0)
      cout << v[i] << " ";
  }
  cout << endl;

  // e) pozitiile elem strict negative
  cout << "e) ";
  for (i = 1; i <= n; i++)
  {
    if (v[i] < 0)
      cout << i << " ";
  }
  cout << endl;

  // f) primul si ultimul element din sir
  cout << "f) ";
  cout << v[1] << " " << v[n] << endl;

  // g) element sau elementele din mijlocul sirul
  cout << "g) ";
  if (n % 2)
    cout << v[n * (2 + 1)];
  else
    cout << v[n / 2] << " " << v[n / 2 + 1];

  cout << endl;

    return 0;
}