#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int bilangan = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << bilangan;
            bilangan++;
            if (bilangan==10) bilangan = 0;
        }
        cout << endl;
    }
}