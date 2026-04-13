#include <iostream>
using namespace std;

int main() {
    float arr[100], temp;
    int n;

    cout << "Enter number of Elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter Elements: ";
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\nSorted Array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
