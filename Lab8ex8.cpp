#include <iostream>

using namespace std;

int countChars(char* strPtr) {
    int count = 0;
    while (*strPtr != '\0') { // пока не достигнут конец строки
        count++; // увеличиваем счетчик символов
        strPtr++; // переходим к следующему символу
    }
    return count;
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int charCount = countChars(str);
    cout << "The string \"" << str << "\" has " << charCount << " characters." << endl;

    return 0;
}
