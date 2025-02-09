#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cout << "Introdu numerele:" << endl
       << "a = ";
  cin >> a;
  cout << "b = ";
  cin >> b;

  cout << "a) " << a << "+" << b << "=" << a + b << endl;
  cout << "b) " << a;

  if (a > b)
    cout << "<";
  else
    cout << "=";
  cout << b << endl;

  cout << "c) Suma cifrelor numarului ";
  int suma = a + b;
  cout << suma << "este";
  int sum_c = 0;
  while (suma > 0)
  {
    sum_c = sum_c + suma % 10;
    suma = suma / 10;
  }
  cout << sum_c << endl;

  cout << "d) cmmmc( " << a << "," << b << " ) = ";
  int prod = a * b;
  while (b > 0)
  {
    int r = a % b;
    a = b;
    b = r;
  }
  cout << prod / a << endl;
  return 0;
}
