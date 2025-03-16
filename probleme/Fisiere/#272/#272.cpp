#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("paresort.in");
ofstream fout("paresort.out");

int main()
{
  int n, v[1001], i, j, x[1001], m = 0;

  fin >> n;

  for (i = 1; i <= n; i++)
  {
    fin >> v[i];
  }

  for (i = 1; i <= n; i++)
  {
    if (v[i] % 2 == 0)
    {
      x[++m] = v[i];
    }
  }

  if (m == 0)
    fout >> "Nu exista";
  if (m > 0)
  {
    fout << m << endl;
    for (i = 1; i <= m - 1; i++)
    {
      for (j = i + 1; j <= m; j++)
      {
        if (x[i] > x[j])
        {
          swap(x[i], x[j]);
        }
      }
    }
  }
  else
  {
    fout << "Nu exista";
  }

  for (i = 1; i <= m; i++)
  {
    fout << x[i] << " ";
  }

  return 0;
}
