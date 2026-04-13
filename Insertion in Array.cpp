#include <iostream>
using namespace std;

int main() {
    int arr[100], n, value, pos;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter value to insert: ";
    cin >> value;

    cout << "Enter position (0 to " << n << "): ";
    cin >> pos;

    // Validation
    if (pos < 0 || pos > n) {
        cout << "Invalid position";
        return 1;
    }

    // Shift elements right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert value
    arr[pos] = value;
    n++;

    // Print updated array
    cout << "Updated array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
