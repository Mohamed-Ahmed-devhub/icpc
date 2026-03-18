#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    double result = a / b;
    cout << "floor " << a << " / " << b << " = " << floor(result) << "\n";
    cout << "ceil " << a << " / " << b << " = " << ceil(result) << "\n";
    cout << "round " << a << " / " << b << " = " << round(result) << "\n";

    return 0;
}