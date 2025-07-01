#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;

    int a,b;
    char c;
    while(t--){
        cin >> a >> c >> b;
        if(a > b && c == '>') cout << a << c << b << endl;
        else if(a < b && c == '<') cout << a << c << b << endl;
        else if(a == b && c == '=') cout << a << c << b << endl;
        else if(a > b && c != '>') cout << a << '>' << b << endl;
        else if(a < b && c != '<') cout << a << '<' << b << endl;
        else if(a == b && c != '=') cout << a << '=' << b << endl;
    }
}