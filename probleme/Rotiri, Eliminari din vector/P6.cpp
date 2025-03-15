// C++ program to display "Hello World"

#include <iostream>
using namespace std;

int main()
{
  int n, v[101], i, aux, cnt;

  cin >> n;

  for (i = 1; i <= n; i++)
    cin >> v[i];

  cout << endl;

  cnt = n;

  for (i = 1; i <= n; i++)
  {
    while (cnt > 0)
    {
      aux = v[n];

      for (i = n; i >= 2; i--)
        v[i] = v[i - 1];

      v[1] = aux;

      for (i = 1; i <= n; i++)
        cout << v[i] << " ";

      cout << endl;
      cnt--;
    }
  }
  return 0;
}
