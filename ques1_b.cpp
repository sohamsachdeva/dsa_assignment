#include <iostream>
using namespace std;

int main() {
    int n, x;
    int arr[100];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter element to insert at end: ";
    cin >> x;
    arr[n] = x;
    n++;
    cout << "Array after insertion:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<"Soham Sachdeva(1024150035)"<<endl;
    return 0;
}
