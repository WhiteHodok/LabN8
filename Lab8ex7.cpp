#include <iostream>

using namespace std;

void swap(int* num1Ptr, int* num2Ptr) {
     int temp = *num1Ptr; // сохраняем значение первого числа во временной переменной
    *num1Ptr = *num2Ptr; // копируем значение второго числа в первое
    *num2Ptr = temp; // копируем сохраненное значение первого числа во второе
}

int main() {
    int num1 = 5;
    int num2 = 10;

    int* num1Ptr = &num1;
    int* num2Ptr = &num2;

    cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << endl;
    swap(num1Ptr, num2Ptr);
    cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
