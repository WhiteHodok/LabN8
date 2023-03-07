#include <iostream>

using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int stamina = 1;
    int money = 100;

    cout << "Do obeda: stamina = " << stamina << ", money = " << money << endl;

    swap(stamina, money);

    cout << "Pokushal: stamina = " << stamina << ", money = " << money << endl;

    return 0;
}
