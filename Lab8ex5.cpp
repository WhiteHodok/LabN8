#include <iostream>

using namespace std;

int countOccurrences(string* arr, int size, string& searchStr) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == searchStr) {
            count++;
        }
    }
    return count;
}

int main() {
    const int SIZE = 5;
    string arr[SIZE] = { "apple", "banana", "orange", "banana", "grape" };
    string searchStr = "banana";
    int count = countOccurrences(arr, SIZE, searchStr);
    cout << "The search string \"" << searchStr << "\" occurs " << count << " times." << endl;
    return 0;
}
