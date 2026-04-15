#include <iostream>
using namespace std;

int main() 
{
    int N;
    cin >> N; 
    for (int j = 1; j <= 12 ; j++)
    {
        cout << N << " * " << j  << " = " << N * j << endl;
    } 
  
    return 0;
}