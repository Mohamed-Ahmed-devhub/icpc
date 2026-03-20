#include<iostream>
using namespace std;
int main()
{
  int N;
  cin >> N;
  int years = N/365;
  int mo = N%365;
  int months = mo/30;
  int days = mo%30;
  cout << years << " years\n";
  cout << months << " months\n";
  cout << days << " days\n";
  return 0;
}