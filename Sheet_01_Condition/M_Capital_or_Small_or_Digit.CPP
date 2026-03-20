#include<iostream>
using namespace std;
int main()
{
  char x;
  cin >> x;
  if(x>='A'&&x<='Z')
  {
cout << "ALPHA\n";
cout << "IS CAPITAL\n";
  }
  else 
  if(x>='a'&&x<='z')
  {
    cout << "ALPHA\n";
    cout << "IS SMALL\n";
  }
  else if(x>='0'&&x<='9')
  {
    cout << "IS DIGIT\n";
  }
  return 0;
}    