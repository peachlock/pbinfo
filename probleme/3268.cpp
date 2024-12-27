#include <iostream>
using namespace std;

int main()
{
  int a, b, D, M, ca, cb, rest;
  cin >> a >> b;
  ca = a;
  cb = b;

  while (cb != 0)
  {
    rest = ca % cb;
    ca = cb;
    cb = rest;
  }
  D = ca;
  M = (a * b) / D;

  cout << D << " " << M << " ";

  return 0;
}
