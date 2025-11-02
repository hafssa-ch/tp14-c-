
#include <iostream>
#include <stdexcept>
using namespace std;

int diviser(int a, int b) {
    if (b == 0) throw runtime_error("Division par zero impossible");
    return a / b;
}

int main() {
    int x = 10, y = 2;
    try {
        cout << diviser(x, y) << endl;
        cout << diviser(x, 0) << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
    return 0;
}
