#include <iostream>
using namespace std;
int main() 
{ 
  double a,b ,c,d;
  cin >> a >> b >> c >> d;  
  double final = (a+b+c+d)/4;  
  if (final>=50)  
  {
    cout << "PASS" << "final " << " = "  << final << endl;
  }
  else
  {
    cout << "FAIL" << "final " <<  " = " << final << endl;
  }
  return 0;
}