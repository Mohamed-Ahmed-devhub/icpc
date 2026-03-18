#include<iostream>
using namespace std;
int main()
{
  long long X;
  cin >> X;
  int first_digit=X/1000;
  cout << ((first_digit%2==0) ?"EVEN":"ODD")<<"\n"; 
  return 0;
}   