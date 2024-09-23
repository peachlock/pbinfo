// C++ program to display "Hello World"

// Header file for input output functions
#include <iostream>
using namespace std;

// Main() function: where the execution of
// program begins
int main()
{
  int a, b, dif ;

  cout << "Introduceti primul numar: ";

  cin >> a;

  cout << "Introduceti al doilea numar: ";

  cin >> b;

  dif = a - b ;

  cout << "Diferenta " << a << " - " << b << " = " << dif << endl;


  return 0;
}
