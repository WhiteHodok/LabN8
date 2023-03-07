#include <iostream>

using namespace std;
// oh no �������� �� 4 ���� � ���������� ������� ��������� ����������
// ��������� ��� ������ �� ���������� �������� , �� ���������� 1 ������� � 2 , ���� 2 ������ 1 , �������� ��� �������
// ���� ������� ��� �� ��� ���, ���� ���� �������� �� �������������
void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = { 5, 3, 9, 1, 7 };
    int size = sizeof(arr) / sizeof(int);

    cout << "Before sorting: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    sortArray(arr, size);

    cout << "After sorting: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
