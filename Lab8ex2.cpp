#include <iostream>

using namespace std;
// ������� ������ ������ ������, � ��� ������ �� Python � Machine Learning
void multiply(int& a, int& b) {
    a *= b;
}

int main() {
    int x = 10;
    int y = 5;

    cout << "Before multiply: x = " << x << ", y = " << y << endl;

    multiply(x, y);

    cout << "After multiply: x = " << x << ", y = " << y << endl;

    return 0;
}
