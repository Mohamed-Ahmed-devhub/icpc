#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int A,B;
  char S;
  cin >> A >> S >> B;
  if(S=='+')
  {
    cout << A+B << "\n";
  }
  else if(S=='-')
  {
    cout << A-B << "\n";
  }
  else if(S=='*')
  {
    cout << A*B << "\n";
  }
  else if(S=='/')
  {
    cout << A/B << "\n";
  }
  return 0;
}    