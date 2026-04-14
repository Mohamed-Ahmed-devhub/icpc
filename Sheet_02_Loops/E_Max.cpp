#include <iostream>
using namespace std;
int main() 
{
  int a, b, c, d;
  cin >> a >> b >> c >> d ;
  int max1 = max(a, b);
  int max2 = max(c, d);
  int final_max = max(max1, max2);
  cout << final_max << endl;

  return 0;
}