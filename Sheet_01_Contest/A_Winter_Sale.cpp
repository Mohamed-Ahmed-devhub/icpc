#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  double X,P;
  cin >> X >> P;
  double BeforSale = P / (1 - (X / 100.0));
  cout << fixed << setprecision(2);
  cout << BeforSale ;
  return 0;
}