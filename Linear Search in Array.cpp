#include <iostream>
using namespace std;

int main() {
    int arr[100], n, key  ;
    cout << "Enter the number of elements in the array: ";
    cin >> n ;  
    for (int i = 0; i < n; i++) {
        cout << "Enter the elements of the array: " ;
        cin >> arr[i] ;
    }
    cout << "Enter the element to search for: ";
    cin >> key ;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index: " << i << "\n";
            return 0;
        }
    }
    cout << "Element not found in the array.\n";
    return 0;
}
