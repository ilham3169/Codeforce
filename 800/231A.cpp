#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;

    vector<char>v;


    int a;
    string b;
    while(t--){
        int result = 0;
        cin >> a >> b;
        for(int i = 0; i < b.length(); i++){
            bool flag = false;
            for(char x : v) {
                if(x == b[i]){
                    flag = true;
                    break;
                }
            }
            if(!flag){ v.push_back(b[i]); }
            
            if(flag){result++;}
            else{result+=2;}
        }
        cout << result << endl;
        v.clear();

    }
}