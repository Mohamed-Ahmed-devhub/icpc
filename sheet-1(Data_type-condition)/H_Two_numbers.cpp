#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  double a,b;
  cout << "ENter the number one :\n";
  cin >> a;
  cout << "Enter the number tow :\n";
  cin >>b;
  if(1<=a,b<=10^3)
  {
    cout << "Floor " << a << "/" << b << "= " << floor(a/b) <<"\n";
  cout << "ceil " << a << "/" << b << "= " << ceil(a/b) <<"\n";
  cout << "round " << a << "/" << b << "= " << round(a/b) <<"\n";
  }
  return 0;
}                 