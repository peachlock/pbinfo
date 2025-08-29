#include <iostream>
using namespace std;

int main()
{
  int n, v[1001], i, sp = 0, si = 0, ep, ed;

  cin >> n;

  for (i = 1; i <= n; i++)
    cin >> v[i];

  // a) maximul dintre suma el de pe poz pare si impare
  cout << "a) ";
  for (i = 1; i <= n; i++)
    if (i % 2 != 0)
      si = si + v[i];
    else
      sp = sp + v[i];

  if (sp > si)
    cout << sp << " ";
  else
    cout << si << " ";
  cout << endl;

  // b) cmm el din priima jumatate si cmm el din a doua jumatate
  cout << "b) ";

  ep = v[1];
  for (i = 1; i <= n / 2; i++)
    if (v[i] > ep)
      ep = v[i];
  cout << ep << " ";
  ed = v[n / 2 + 1];
  for (i = n / 2 + 1; i <= n; i++)
    if (v[i] > ed)
      ed = v[i];

  cout << ed << " ";
  cout << endl;

  // c) primul element par din sir, daca exista, sau mesaj corespunztor daca nu
  cout << "c) ";
  int ok = 0; // exista nr par in sir
  int idx = -1;
  for (i = 1; i <= n && ok == 0; i++)
    if (v[i] % 2 == 0)
    {
      ok = 1;
      idx = i;
    }
  if (ok == 1)
    cout << v[idx] << " ";
  else
    cout << "Nu exista numere pare in sir ";

  cout << endl;

  // d) de cate ori apare ultima valoar din sir in sir

  cout << "d) ";
  int cnt = 0;
  for (i = 1; i <= n; i++)
    if (v[i] == v[n])
      cnt++;
  cout << cnt << " ";
  cout << endl;

  return 0;
}
