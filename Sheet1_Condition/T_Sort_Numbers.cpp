#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  long long A,B,C;
  cin >> A >> B >> C;
  int smal = min({A,B,C});
  int Large = max({A,B,C});
  int middel = (A+B+C)-(smal+Large);
  cout << smal <<endl;
  cout << middel <<endl;
  cout << Large<<endl;
  cout <<endl;
  cout << A <<"\n";
  cout << B <<"\n";
  cout << C <<"\n";
  return 0;
}