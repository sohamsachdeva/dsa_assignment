#include <iostream>
using namespace std;

int main() {
    int n, index, x;
    int arr[100];
    
    cout << "Enter number of elements: ";
    cin >> n;
    
    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
        
    cout << "Enter index and new value: ";
    cin >> index >> x;
    
    if(index >= 0 && index < n) {
        arr[index] = x;
        cout << "Updated array:\n";
        for(int i = 0; i < n; i++)
            cout << arr[i] << " "<<endl;
    } else {
        cout << "Invalid index"<<endl;
    }
    cout<<"Soham Sachdeva(1024150035)"<<endl;
    return 0;
}
