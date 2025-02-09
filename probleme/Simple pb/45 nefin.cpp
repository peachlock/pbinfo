#include <iostream>

using namespace std;

int main()
{

  int n, d = 1, ok = 1;

  cin >> n;

  while (d * d <= n and ok == 1)
  {
    if (n % d == 0)
    {
      ok = 0;
    }

    else
    {
      d = d + 1;
    }
  }

  if (ok == 1)
  {
    cout << "Da \n
            ";
  }
  else
  {
    cout << "Nu \n";
  }

  return 0;
}