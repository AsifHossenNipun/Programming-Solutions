#include<bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;


int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        bool ml = false;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(i != 0 and i != n -1 and n > 1){
                if(a[i] == n) ml = true;
            }
        }
        int p;
        if(ml){
            cout << -1 << endl;
            continue;
        }
        if(n == 1) {cout << a[0] << endl; continue; }
        if(a[0] == n){
            for(int i = n - 1; i >= 1; i--) cout << a[i] << " ";
            cout << n << endl;
        }
        else if(a[n-1] == n){
            for(int i = n - 2; i >= 0; i--) cout << a[i] << " ";
            cout << n << endl;
        }



    }

    return 0;


}



