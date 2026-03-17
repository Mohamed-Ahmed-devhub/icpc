#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int a,b,c;
  cin >> a >> b >> c;
  if(a>b&&a>c)
  {
    cout << b << c << a << "\n";
  }
else if(b>c&&b>a)
{
  cout << c << b << "\n";
}
else 
cout << c << "\n";

  return 0;
}            