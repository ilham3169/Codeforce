#include <bits/stdc++.h>
using namespace std;

int main() {
    long long d, l, v1, v2;
    cin >> d >> l >> v1 >> v2;
    double result = (l - d) / (double)(v1 + v2);
    cout << fixed << setprecision(9) << result;
}