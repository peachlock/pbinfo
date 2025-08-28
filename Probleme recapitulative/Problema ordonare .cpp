#include <iostream>
using namespace std;

int main()
{
  int n, v[1001], i, sp = 0, si = 0;

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
    cout << sp;
  else
    cout << si;
  return 0;
}
