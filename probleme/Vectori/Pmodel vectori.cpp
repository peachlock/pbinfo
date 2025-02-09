#include <iostream>
using namespace std;

int main()
{
  int v[101], n, i;

  // citire sir
  cin >> n;
  for (i = 1; i <= n; i++)
  {
    cin >> v[i];
  }

  // a) afisare sir
  cout << "a) ";
  for (i = 1; i <= n; i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;

  // b) elementele in ordinea inversa citirii
  cout << "b) ";
  for (i = n; i >= 1; i--)
  {
    cout << v[i] << " ";
  }
  cout << endl;

  // c) suma elementelor pare
  cout << "c) ";
  int s = 0;
  for (i = 1; i <= n; i++)
  {
    if (v[i] % 2 == 0)
    {
      s = s + v[i];
    }
  }
  cout << s << endl;

  // d) pozitiile elementelor impare
  cout << "d) ";
  for (i = 1; i <= n; i++)
  {
    if (v[i] % 2 != 0)
    {
      cout << i << " ";
    }
  }
  cout << endl;

  // e) primul si ultimul element din sir
  cout << "e) " << v[1] /* primul element, se afla pe pozitia 1 */ << " " << v[n] /* eltimul element, elementul n */ << endl;

  // f) elementul sau cele doua elemente din mijlocul sirului
  cout << "f) ";
  if (n % 2)
    cout << v[n * (2 + 1)];
  else
    cout << v[n / 2] << " " << v[n / 2 + 1];

  cout << endl;

  return 0;
}
