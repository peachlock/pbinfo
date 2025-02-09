#include <iostream>
using namespace std;

int main()
{
  long long s = 0, n;
  cin >> n;

  if (n != 0)
  {
    while (n > 0)
    {
      s = s + n;
      n = n / 10;
    }

    cout << s << " ";
  }
  return 0;
}
