// Se dau două şiruri a şi b, cu n, respectiv m elemente, numere naturale, ordonate crescător.
// Să se construiască un al treilea şir, c, care să conţină, în ordine crescătoare, elementele din şirurile a şi b.

#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("../interclasare.in");
ofstream fout("../interclasare.out");

int main()
{
  int n, m, a[1001], b[1001], c[2001], i, j, k;

  // citim din fisier numerele si sirurile
  fin >> n;
  for (i = 1; i <= n; i++)
    fin >> a[i];

  fin >> m;
  for (i = 1; i <= n; i++)
    fin >> b[i];
  fin.close();

  // incepem interclasarea
  i = j = 1;
  k = 0;
  while (i <= n && j <= m)
  {
    if (a[i] <= b[j])
    {
      c[++k] = a[i++];
    }
    else
    {
      c[++k] = b[j++];
    }
  }

  while (i <= n)
    c[++k] = a[i++];

  while (j <= m)
    c[++k] = b[j++];

  // afisarea noului sir
  for (i = 1; i <= k; i++)
  {
    fout << c[i] << " ";
    if (i % 10 == 0)
      fout << endl;
  }

  return 0;
}
