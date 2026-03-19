#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  long long  A,B,C,D;
  cin >> A >> B >> C >> D;
  A%=100;
  B%=100;
  C%=100;
  D%=100;
  long long  res=(A*B*C*D)%100;
  if(res<10)
  cout << 0 ;
  cout << res <<"\n";
  return 0;
}