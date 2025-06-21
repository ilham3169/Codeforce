#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, l;
    string a;
    cin >> t;

    while (t--) {
        cin >> l >> a;
        int k = 0, f = 1, o = 0;
        while (true) {
            if (a[k] == '1' && a[l - f] == '0') {
                k++; f++; o++;
            }
            else if (a[k] == '0' && a[l - f] == '1') {
                k++; f++; o++;
            }
            else {
                if( l - o*2 <= 0) { cout << 0 << endl; break;}
                cout << l - o * 2 << endl;
                break;
            }
        }
    }
    return 0;
}