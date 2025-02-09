#include <iostream>
using namespace std;

int main()
{
  int n, m, cnt;
  cin >> m >> n;
  cnt = n;
  for (int i = 1; i < m; i++)
  {
    n = n + cnt;
  }
  for (int i = 1; i <= m; i++)
  {
    cout << n << " ";
    n = n - cnt;
  }
  return 0;
}
