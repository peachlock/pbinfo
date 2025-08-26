#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("divizor.txt");

int main()
{
  int n, i, d, cnt;
  fin >> n;
  for (i = n; i >= 1; i--)
  {
    if (n % i == 0)
    {
      cnt = 0;
      for (d = 1; d <= i; d++)
        if (i % d == 0)
          cnt++;
      if (d == 2)
        cout << i << " ";
    }
  }
  return 0;
}
