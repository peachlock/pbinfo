// cautare binara

#include <iostream>
using namespace std;

int main()
{
  int n, v[1001], ok = 0, i, z;

  cin >> n; // numarul de elemente din sir
  cin >> z; // numarul pe care il cautam
  for (i = 1; i <= n; i++)
    cin >> v[i];

  for (i = 1; i <= n; i++)
  {
    if (v[i] == z)
      ok = 1;
  }

  if (ok == 1)
  {
    cout << "Exista numarul " << z << " in sir ";
  }
  else
  {
    cout << "Nu exista " << z << " in sir ";
  }

  return 0;
}
