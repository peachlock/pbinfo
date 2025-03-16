#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("../divizor.txt");

int main()
{
  int n, d;
  fin >> n;

  for (d = n; d >= 2; d--)
  {
    if (n % d == 0)
    {
      int e = 0;
      while (n % d == 0)
      {
        e++;
        n = n / d;
      }
      cout << d << " ";
    }
  }

  return 0;
}
