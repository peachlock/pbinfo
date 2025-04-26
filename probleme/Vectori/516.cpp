#include <iostream>
using namespace std;

int main()
{
  int n, v[1001], ok = 0, i, s = 0, min = 0, max = 0;

  cin >> n;
  for (i = 1; i <= n; i++)
  {
    cin >> v[i];
    if (v[i] % 2 != 0 && ok == 0)
    {
      min = i;
      ok = 1;
    }
    else if (v[i] % 2 != 0)
    {
      max = i;
    }
  }

  for (i = 1; i <= n; i++)
    if (i >= min && i <= max)
      s = s + v[i];

  cout << s << " ";

  return 0;
}
