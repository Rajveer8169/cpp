#include<iostream>
using namespace std;

void swap(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main() {
    int n;
    cout << "Enter size of array: " << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter " << i + 1 << " Element: " << endl;
        cin >> arr[i];
    }
    swap(arr, n);
    cout << "Reversed array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
