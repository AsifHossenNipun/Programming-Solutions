//In the name of Allah, most Gracious, most Merciful

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define Asif ios::sync_with_stdio(0);cin.tie(0);


using namespace std;

void solve();


int main(){
    Asif


    vector <int> nazmul;
    vector <int> asif;
    vector <int> raihan;
    //int total_meal;
    double per_meal_cost;
    cout << "Koto din  Bazar hoice ??" << endl;
    int day;
    cin >> day;
    vector <int> bazar(day);
    int cost = 0;
    cout << "kon din koto takar bazar hoice" << endl;
    for(int i = 0; i < day; i++){
        int x; cin >> x;
        cost += x;
    }
    int cn = 0, ca = 0, cr = 0;
    cout << "nazmul kotodin khaise" << endl;
    int nd; cin >> nd;
    cout << "kon din koto meal ekta ekta dao" << endl;
    for(int i = 0; i < nd; i++){
        int y; cin >> y;
        cn += y;
    }
    cout << "nazmul mot khaise =  " << cn << endl;

    cout << "asif kotodin khaise" << endl;
    int na; cin >> na;
    cout << "kon din koto meal ekta ekta dao" << endl;
    for(int i = 0; i < na; i++){
        int y; cin >> y;
        ca += y;
    }
    cout << "asif mot khaise  = " << "   " << ca << endl;

    cout << "raihan kotodin khaise" << endl;
    int nr; cin >> nr;
    cout << "kon din koto meal ekta ekta dao" << endl;
    for(int i = 0; i < nr; i++){
        int y; cin >> y;
        cr += y;
    }

    cout << "raihan mot khaise " << cr << endl;


    per_meal_cost = cost / (ca + cn + cr) ;
    cout << "Total meal =  " << ca + cn + cr << endl << endl;
    cout << "Per meal cost =  " << per_meal_cost << endl << endl;

    cout << "Nazmul cost " << per_meal_cost * cn << endl;
    cout << "Asif cost " << per_meal_cost * ca << endl;
    cout << "Raihan cost " << per_meal_cost * cr << endl;



    return 0;


}






// Alhamdulillah  - All praise to my Lord, the First & the Last
