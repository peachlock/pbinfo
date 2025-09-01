#include <iostream>
using namespace std;

int main()
{
  int n, v[101], i;
  cin >> n;
  for (i = 1; i <= n; i++)
    cin >> v[i];

  if (n >= 8)
  {
    for (i = 8; i <= n - 1; i++)
      v[i] = v[i + 1];
    n--;
  }
  for (i = 3; i <= n - 1; i++)
    v[i] = v[i + 1];
  n--;
  for (i = 1; i <= n; i++)
    cout << v[i] << " ";
  return 0;
}
