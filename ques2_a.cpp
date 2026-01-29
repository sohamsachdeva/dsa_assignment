#include <iostream>
using namespace std;
int main() {
    int n, s;
    int arr[100];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter element to search: ";
    cin >> s;
    int index = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == s) {
            index = i;
            break;
        }
    }
    if(index != -1)
        cout << "Element found at index: " << index<<endl;
    else
        cout << "Element not found";
        cout<<"Soham Sachdeva(1024150035)"<<endl;
    return 0;
}
