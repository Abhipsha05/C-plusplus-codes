
#include<iostream>
using namespace std;

int main() {
    int i = 1, n = 4;
    while (i <= n) {
        for (int j = 1; j <= n; j++) {
            cout << j;
        }
        cout << endl; // Add a newline after each row
        i++;
    }
   cout<<endl;
    i = 1; // Reusing the existing variable i
    while (i <= n) {
        for (int k = n; k >= 1; k--) {
            cout << k;
        }
        cout << endl;
        i++;
    }
cout<<endl;
    i = 1; // Reusing the existing variable i
    int count = 1;
    while (i <= n) {
        for (int k = 1; k <= n; k++) {
            cout<<count<<" ";
            count++;
        }
        cout << endl;
        i++;
    }

    return 0;
}

 