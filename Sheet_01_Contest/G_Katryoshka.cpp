#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    long long n,m,k,total=0;
    cin >> n >> m >> k;
    long long res1 = min(n, min(m, k));
    total+=res1;
    n-=res1;
    m-=res1;
    k-=res1;
    long long eyes = n/2;
    long long res2 = min(eyes,k);
    total += res2;
    cout << total << endl;
    return 0;
}