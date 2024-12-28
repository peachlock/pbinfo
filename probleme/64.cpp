#include <iostream>
using namespace std;

int main()
{
  int n, div = 0, s = 0;
  cin >> n;

  for (div = 1; div * div < n; div++)
  {
    if (n % div == 0)
    {
      s = s + div + n / div;
    }
    if (div * div == n)
      s = s + div;
  }

  if (s - n == n)
  {
    cout << n << " " << "este perfect" << " ";
  }
  else
  {
    cout << n << " " << "nu este perfect" << " ";
  }

  return 0;
}
