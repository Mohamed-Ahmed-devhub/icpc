#include <iostream>
using namespace std;
int main() 
{
  long long n,k,a;
  cin >> n >> k >> a;
  long long num = n*k;
  if(num % a!=0)
  {
    cout <<"double\n";
  }
  else {
    long long result = num / a;
    if(result <=2147483647)
    {
      cout << "int\n";
    }
    else {cout << "long long\n";}
  }
  
  return 0;
}