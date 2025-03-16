#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("../date.in");
ofstream fout("../date.out");

int main()
{
  int a, b, s = 0;
  fin >> a >> b;

  s = a + b;

  fout << s;
  fout.close();

  return 0;
}
