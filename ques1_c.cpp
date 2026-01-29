#include <iostream>
using namespace std;
int main() {
    int n, pos, x;
    int arr[100];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter position and element to insert: ";
    cin >> pos >> x;
    if(pos < 0 || pos > n) {
        cout << "Invalid index";
        return 0;
    }
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = x;
    n++;
    cout << "Array after insertion:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<"Soham Sachdeva(1024150035)"<<endl;
    return 0;
}
