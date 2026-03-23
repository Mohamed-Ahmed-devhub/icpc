#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
  
    int first = N / 10;   
    int last = N % 10;   
    if (last == 0) {
        cout << "YES" << endl;
    }
    else if (first % last == 0 || last % first == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}