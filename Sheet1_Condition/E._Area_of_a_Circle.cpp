#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    double R;
    cin >> R;
    double PI = 3.141592653;
    double Area = PI * R *R;
    cout << fixed << setprecision(9);
    cout << Area << endl;
    return 0;
}