#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    int b;
    char c;
    cin >> a;
    cin >> b;
    cin >> c;
    if(c=='+'){
        cout << a+b << endl;
    }
    else if(c=='-'){
        cout << a-b << endl;
    }
    else if(c=='*'){
        cout << a*b << endl;
    }
    else if(c=='/'){
        // cout << fixed << setprecision(7) << a/b << endl;
        cout << setprecision(2) << (a/b) << endl;
    }
}