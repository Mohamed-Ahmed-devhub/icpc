#include <iostream>
using namespace std;
int main() 
{
  int N;
  cin >> N;
  int max = 0;
  for (int i = 0; i < N; i++)
  {
    int X;
    cin >> X;
    if (X > max)
    {
      max = X;
    }
  }
  cout << max << endl;
  return 0;
}