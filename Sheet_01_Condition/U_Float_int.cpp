#include<iostream>
using namespace std;
int main()
{
  double N;
  cin >> N;
  int X=int(N);
  if(N-X==0)
  {
  cout << "int " << X <<"\n";
  }
  else 
  {
    cout << "float " << X << " "<< N-X <<endl;
  }
  return 0;
}