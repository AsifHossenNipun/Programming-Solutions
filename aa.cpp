
#include<bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;


int main(){

    int t;
    cin >> t;
    while(t--){
        int n, r, l, k;
        cin >> n >> l >>  r >> k;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];

        }
        int x;
        sort(a, a+n);
        for(int i = 0; i < n; i++){
            if(a[i] >= l){
                x = a[i];
                cout << x << endl; break;
            }
        }

        cout << k / x <<endl;
    }
    return 0;


}


