// Inseraţi în şirul v elementul z pe poziţia p şi apoi afişaţi şirul v.

#include <iostream>
using namespace std;

int main()
{
  int n, v[1001], z, p, i;

  cin >> n;
  cin >> z;
  cin >> p;

  for (i = 1; i <= n; i++)
    cin >> v[i];

  for (i = n; i >= p; i--)
    v[i + 1] = v[i];

  n++;
  v[p] = z;

  for (i = 1; i <= n; i++)
    cout << v[i] << " ";

  return 0;
}
