// Made by Cristian Motta
#include <iostream>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e9 + 10;
const int MIN = -MAX;

void solve() {
    int rating;
    cin >> rating;
    
    if(rating >= 1900) {
        cout << "Division 1" << "\n";
    }
    else if(1900 > rating && rating >= 1600) {
        cout << "Division 2" << "\n";
    }
    else if(1600 > rating && rating >= 1400) {
        cout << "Division 3" << "\n"; 
    }
    else {
        cout << "Division 4" << "\n";
    }
}

int32_t main() {
    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}