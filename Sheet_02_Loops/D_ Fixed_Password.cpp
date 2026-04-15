#include <iostream>
using namespace std;
int main()
{
  int pas = 1999;
  int X;
  while (true)
  {
    cin >> X;
    if (X == pas)
    {
      cout << "Correct" << endl;
      break;
    }
    else
    {
      cout << "Wrong" << endl;
    }
  }
  return 0;
}