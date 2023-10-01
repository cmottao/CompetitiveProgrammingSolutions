// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

bool isOperator(string s) {
    return s == "+" || s == "-" || s == "*" || s == "/";
}

int operate(int a, int b, string o) {
    int ans;

    if(o == "+") {
        ans = a + b;
    }
    else if(o == "-") {
        ans = a - b;
    }
    else if(o == "*") {
        ans = a * b;
    }
    else if(o == "/") {
        ans = a / b;
    }
    return ans;
}

void solve() {
    stack<string> exp;
    stack<int> ans;
    string x;
    
    while(cin >> x) {
        exp.push(x);
    }

    while(!exp.empty()) {
        string x = exp.top(); exp.pop();

        if(isOperator(x)) {
            int a = ans.top(); ans.pop(); 
            int b = ans.top(); ans.pop();
            ans.push(operate(a, b, x));
        }
        else {
            ans.push(stoi(x));
        }
    }
    cout << ans.top();
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}