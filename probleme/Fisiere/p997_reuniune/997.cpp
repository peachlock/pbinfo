#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("../reuniune.in");
ofstream fout("../reuniune.out");

int main()
{
  int n, m, x[1001], y[1001], z[2001], i, j;

  fin >> n >> m;
  for (i = 1; i <= n; i++)
    fin >> x[i];

  for (i = 1; i <= m; i++)
    fin >> y[i];

  /// interclasarea
  i = 1;
  j = 1;
  int k = 0;
  while (i <= n && j <= m)
  {
    if (x[i] < y[j])
      z[++k] = x[i++];
    else if (x[i] > y[j])
      z[++k] = y[j++];
    else
    {
      z[++k] = x[i++];
      j++;
    }
  }
  while (i <= n)
    z[++k] = x[i++];
  while (j <= m)
    z[++k] = y[j++];

  for (i = 1; i <= k; i++)
    fout << z[i] << " ";

  return 0;
}