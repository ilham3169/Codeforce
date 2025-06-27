#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int a,b;
    cin >> a;
    vector<int>v;

    for(int i = 0; i < a; i++){
        cin >> b;
        v.push_back(b);
    }

    int result = 0;

    if(v[0] > 15) {
        cout << 15 << endl;
        return 0;    
    }
    else if(a == 1 && v[0] < 15){ cout << 16 << endl; return 0; }
    else if(a == 1 && v[0] >= 15) { cout << v[0]+15 << endl; return 0; }
    else{
        for(int i = 0; i < a-1; i++){
            if(v[i+1]-v[i] <= 15){ result = v[i+1]; }
            else{
                cout << v[i]+15 << endl; return 0;
            }
        }
        if(result+15>=90) cout << 90;
        else{ cout << result+15; }
    }
}