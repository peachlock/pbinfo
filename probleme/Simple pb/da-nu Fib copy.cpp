#include <iostream>
using namespace std;

int main()
{
  int n, a, b;
  cin >> n;

  if (n == 1 || n == 2)
  {
    cout << "Da, este";
  }
  else
  {
    a = 1;
    b = 1;
    while (a + b < n)
    {
      int c = a + b;
      a = b;
      b = c;
    }

    if (a + b == n)
      cout << "Da, este";
    else
      cout << "Nu este";
  }

  return 0;
}