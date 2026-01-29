#include <iostream>
using namespace std;

int main() {
    int n, index;
    int arr[100];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter index: ";
    cin >> index;
    if(index >= 0 && index < n)
        cout << "Element at index " << index << " is " << arr[index]<<endl;
    else
        cout << "Invalid index"<<endl;
    cout<<"Soham Sachdeva(1024150035)"<<endl;
    return 0;
}
