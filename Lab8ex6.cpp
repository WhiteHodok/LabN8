#include <iostream>

using namespace std;

void increment(int* numPtr) {
    (*numPtr)++; // ����������� ��������, �� ������� ��������� ��������� �� 1
}

int main() {
    int num = 5;
    int* numPtr = &num;

    cout << "Before increment: " << num << endl;
    increment(numPtr);
    cout << "After increment: " << num << endl;

    return 0;
}
