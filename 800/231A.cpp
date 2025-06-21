#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int k;
    cin >> k;

    int a,b,c;
    int result = 0;

    while(k--){
        cin >> a >> b >> c;
        if(a+b+c >= 2) result++;    
    }

    cout << result << endl;
}