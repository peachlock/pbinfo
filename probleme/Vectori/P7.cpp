#include <iostream>
using namespace std;

int main()
{
  int v[101], n, i, sp = 0, si = 0;

  cin >> n;
  for (i = 1; i <= n; i++)
    cin >> v[i];

  // a) valoarea maxima dintre suma elementelor de pe pozitii pare, respectiv cea de pe pozitii impare din sir

  cout << "a) ";
  for (i = 1; i <= n; i++)
    if (i % 2 == 0)
      sp = sp + v[i];
    else
      si = si + v[i];

  if (sp > si)
    cout << sp << endl;
  else
    cout << si << endl;

  // b) cel mai mare element din prima jumatate a sirului si respeciv din a doua jumatate a sirului

  cout << "b) ";
  int max1 = v[1], max2 = v[n];
  for (i = 1; i <= n / 2; i++)
    if (v[i] > max1)
      max1 = v[i];

  cout << max1 << " ";

  for (i = n; i >= n / 2; i--)
    if (v[i] > max2)
      max2 = v[i];

  cout << max2 << " " << endl;

  // c) primul element par din sir, daca exista, sau mesaj corespunzator in caz ca nu

  cout << "d) ";
  for (i = 1; i <= n; i++)
  {
    if (v[i] % 2 == 0)
    {
      cout << v[i] << endl;
      return 0;
    }
    else
      cout << "Nu exista" << endl;
  }

  return 0;
}
