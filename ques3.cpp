#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "\nSimple Pyramid:\n";
    for(int i = 1; i <= n; i++) {
        for(int s = 1; s <= n - i; s++)
            cout << " ";
        for(int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }

    cout << "\nFlipped Simple Pyramid:\n";
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }

    cout << "\nInverted Pyramid:\n";
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }

    cout << "\nFlipped Inverted Pyramid:\n";
    for(int i = n; i >= 1; i--) {
        for(int s = 1; s <= n - i; s++)
            cout << " ";
        for(int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }

    cout << "\nTriangle:\n";
    for(int i = 1; i <= n; i++) {
        for(int s = 1; s <= n - i; s++)
            cout << " ";
        for(int j = 1; j <= 2*i - 1; j++)
            cout << "*";
        cout << endl;
    }

    
    cout << "\nInverted Triangle:\n";
    for(int i = n; i >= 1; i--) {
        for(int s = 1; s <= n - i; s++)
            cout << " ";
        for(int j = 1; j <= 2*i - 1; j++)
            cout << "*";
        cout << endl;
    }
  
    cout << "\nDiamond Pattern:\n";
    for(int i = 1; i <= n; i++) {
        for(int s = 1; s <= n - i; s++)
            cout << " ";
        for(int j = 1; j <= 2*i - 1; j++)
            cout << "*";
        cout << endl;
    }
    for(int i = n-1; i >= 1; i--) {
        for(int s = 1; s <= n - i; s++)
            cout << " ";
        for(int j = 1; j <= 2*i - 1; j++)
            cout << "*";
        cout << endl;
    }

    cout << "\nHourglass Pattern:\n";
    for(int i = n; i >= 1; i--) {
        for(int s = 1; s <= n - i; s++)
            cout << " ";
        for(int j = 1; j <= 2*i - 1; j++)
            cout << "*";
        cout << endl;
    }
    for(int i = 2; i <= n; i++) {
        for(int s = 1; s <= n - i; s++)
            cout << " ";
        for(int j = 1; j <= 2*i - 1; j++)
            cout << "*";
        cout << endl;
    }

    cout << "\nNumber Pyramid:\n";
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++)
            cout << i << " ";
        cout << endl;
    }

    cout << "\nPalindrome Triangle:\n";
    for(int i = 1; i <= n; i++) {
        for(int s = 1; s <= n - i; s++)
            cout << " ";
        for(int j = 1; j <= i; j++)
            cout << j;
        for(int j = i-1; j >= 1; j--)
            cout << j;
        cout << endl;
    }

    cout << "\nAlphabet Pyramid:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++)
            cout << char('A' + i) << " ";
        cout << endl;
    }

    cout << "\nContinuous Alphabet Pyramid:\n";
    char ch = 'A';
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    cout<<"Soham Sachdeva(1024150035)"<<endl;  
    return 0;
}
