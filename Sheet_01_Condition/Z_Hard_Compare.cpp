#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
  long long A, B, C, D;
  cin>> A >> B >> C >>D;
  double log1=B*log10(A);
  double log2=D*log10(C);
  if(log1>log2)
  {
  cout <<"YES\n";
  }
  else
  cout <<"NO\n";
  return 0;
}