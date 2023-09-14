#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) {
            cout << "BUKAN\n";
            continue;
        }

        // if (x == 2) {
        //     cout << "YA\n";
        //     continue;
        // } 

        // if (x % 2 == 0) {
        //     cout << "BUKAN\n";
        //     continue;
        // }

        // misal x = 91
        // 91 prima atau bukan?
        // cek 3 sampai dengan 90 ada yg membagi 91 atau tidak?
        // skip kelipatan 2
        bool prima = true;
        for (int j = 2; j <= sqrt(x); j++) {
            if (x % j == 0) {
                prima = false;
                break;
            }
        }

        if (prima == true) {
            cout << "YA\n";
        }
        else {
            cout << "BUKAN\n";
        }

        // 64

        // 1 64
        // 2 32
        // 4 16
        // 8 8
        // kiri <= sqrt(64)

        // a*b = x
        // misal a <= b
        // maka a <= sqrt(x)

        // a > akar(x)
        // b > akar(x)
        // a*b > akar(x)*akar(x)
        // a*b > x
    }

}