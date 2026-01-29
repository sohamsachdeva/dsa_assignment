#include <iostream>
using namespace std;
int main() {
    int n, x;
    int arr[100];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Enter element to search: ";
    cin >> x;
    int low = 0, high = n - 1, index = -1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] == x) {
            index = mid;
            break;
        }
        else if(arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if(index != -1)
        cout << "Element found at index: " << index<<endl;
    else
        cout << "Element not found"<<endl;
    cout<<"Soham Sachdeva(1024150035)"<<endl;
    return 0;
}
