#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int test = 0; test < t; ++test) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int rs = (b > a) + (c > a) + (d > a);
        cout << rs << endl;
    }
    return 0;
}
