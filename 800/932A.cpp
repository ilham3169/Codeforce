#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin >> a;

    string k = "";
    string f = "";

    for(int i = 0; i < a.length(); i++){
        k+=a[i];
        f+=a[a.size()-1-i];
    }

    if(f==k){
        cout << a << endl;
        return 0;
    }
    else{
        string o = "";
        for(int i = a.size()-2; i >= 0; i--){
            o+=a[i];
        }
        cout << a << o << endl;
    }

}

// abba
