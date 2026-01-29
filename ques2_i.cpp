#include <iostream>
using namespace std;
int main() {
    int n;
    int arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int first = arr[0];
    for(int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;

    cout << "Array after left rotation:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " "<<endl;
    cout<<"Soham Sachdeva(1024150035)"<<endl;

    return 0;
}
