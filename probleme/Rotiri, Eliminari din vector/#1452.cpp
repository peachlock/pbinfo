// Sa se elimine din şirul x elementul de pe poziţia p şi apoi afişze şirul x
#include <iostream>
using namespace std;

int main()
{
  int n, p, x[1501], i;

  cin >> n;

  cin >> p;

  for (i = 1; i <= n; i++)
    cin >> x[i];

  for (i = p; i <= n - 1; i++)
    x[i] = x[i + 1];
  n--;

  for (i = 1; i <= n; i++)
    cout << x[i] << " ";

  return 0;
}
