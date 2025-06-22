#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    
    string a;
    while(t--){
        int result = 0;
        cin >> a;
        int f = a[0] - '0';
        result += (f-1)*10;
        for(int j = 1; j < a.length()+1; j++){
            result+=j;
        }
        cout << result << endl;
    }
}