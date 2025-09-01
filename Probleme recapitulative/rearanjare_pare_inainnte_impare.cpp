#include <iostream>
using namespace std;

int main()
{
  int n, a[101], b[101], c[101], i, pb = 0, pc = 0;
  cin >> n;
  for (i = 1; i <= n; i++)
    cin >> a[i];

  for (i = 1; i <= n; i++)
  {
    if (a[i] % 2 == 0)
      b[pb++] = a[i]; // vector pentru pare
    else
      c[pc++] = a[i]; // vector pentru impare
  }

  for (i = 0; i < pb; i++)
    cout << b[i] << " ";

  for (i = 0; i < pc; i++)
    cout << c[i] << " ";

  return 0;
}
