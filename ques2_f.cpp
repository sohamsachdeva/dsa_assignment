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

    int min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < min)
            min = arr[i];
    }

    cout << "Minimum element is: " << min<<endl;
    cout<<"Soham Sachdeva(1024150035)"<<endl;

    return 0;
}
