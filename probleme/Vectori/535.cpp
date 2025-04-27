#include <iostream>

using namespace std;

int main()
{
  int n, v[1001], i, T, C = 0;

  cin >> n >> T;

  for (i = 1; i <= n; i++)
    cin >> v[i];

  for (i = 1; i <= n; i++)
    C = C + T / v[i];

  cout << C << " ";

  return 0;
}
