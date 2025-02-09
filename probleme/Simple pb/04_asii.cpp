// C++ program to display "Hello World"

// Header file for input output functions
#include <iostream>
using namespace std;

// Main() function: where the execution of
// program begins
int main()
{
  int a, b, sum, dif, prod, cat;

  cout << "Introduceti primul numar: ";

  cin >> a ;

  cout << "Introduceti al doilea numar: ";

  cin >> b ;

  sum = a + b ;

  cout << "Suma numerelor " << a << " + " << b << " = " << sum << endl ;

  dif = a - b ;

  cout << "Diferenta numerelor " << a << " - " << b << " = " << dif << endl ;

  prod = a * b ;

  cout << "Produsul numerelor " << a << " * " << b << " = " << prod << endl ;

  cat = a / b ;

  cout << "Catul numerelor " << a << " / " << b << " = " << cat << endl ; 

  return 0;
}
