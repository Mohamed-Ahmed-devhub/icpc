#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  float x, y;
  cout << "Enter two numbers X and Y : \n";
  cin >> x >> y;
  if( 1<= x,y <= 10^10 )
  {
      cout << x << " + " << y << " = " << x+y << "\n";
      cout << x << " * " << y << " = " << x*y << "\n";
      cout << x << " - " << y << " = " << x-y << "\n";
      cout << x << " / " << y << "=  " << x/y << "\n";
  }
  return 0;
}