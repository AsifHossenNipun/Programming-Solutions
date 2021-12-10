#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
   int t;
   cin >> t;
   unsigned long long a[40];
   a[1] = 1;

   for(int i = 2; i < 32; i++){
        a[i] = 1 << (i-1);
        cout << a[i] << endl;
   }
   while(t--){
        ll n, k;
        cin >> n >> k;



   }

}

