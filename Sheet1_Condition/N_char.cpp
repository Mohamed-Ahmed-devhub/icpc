#include <iostream>
using namespace std;
int main() {
    char X;
    cin >> X;
    if (X >= 'A' && X <= 'Z') {
        X = X + 32; 
    } 
    else {
        X = X - 32; 
    }

    cout << X << endl;

    return 0;
}