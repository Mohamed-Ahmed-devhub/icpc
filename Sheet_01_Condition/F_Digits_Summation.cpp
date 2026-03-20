
#include <iostream>
using namespace std;
int main() {
    long long n, m,result ;
    cin >> n >> m;
    result = (n % 10) + (m % 10);
    cout << result << endl;
    return 0;
}