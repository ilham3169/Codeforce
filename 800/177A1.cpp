#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t,a;
    cin >> t;
    
    vector<vector<int>> v(t, vector<int>(t, 0));    
    for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++){
            cin >> a;
            v[i][j] = a;
        }
    }

    if(t == 1){
        cout << v[0][0] << endl;
        return 0;
    }


    int result = 0;




    result += v[t/2-1][t/2-1];
    result += v[t/2-1][t/2];
    result += v[t/2-1][t/2+1];
    
    result += v[t/2][t/2-1];
    result += v[t/2][t/2];
    result += v[t/2][t/2+1];
    
    result += v[t/2+1][t/2-1];
    result += v[t/2+1][t/2];
    result += v[t/2+1][t/2+1];

    
    if(t == 3){
        cout << result << endl;
        return 0;
    }

    int k = 0;
    for(int i = 0; i < t; i+=2){
        result+=v[0][i];
        result+=v[t-1][i];
    }

    for(int i = 2; i < t-2; i+=2){
        result+=v[i][0];
        result+=v[i][t-1];
    } 

    cout << result;
    


}

