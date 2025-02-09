
#include <iostream>
using namespace std;

int main()
{
  int n, div = 0;
  cin >> n;

  for (int d = 1; d * d <= n; d++)
  {
    if (n % d == 0)
    {
      div++;
      if (d != n / d)
      {
        div++;
      }
    }
  }
  cout << div << endl;
  return 0;
}
