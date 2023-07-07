#include <iostream>
#include <bits/stdc++.h>
#include <string>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        // a=s[1,n/2] , b=s[n/2+1,n]
        if(n%2!=0)
        {
            cout << "NO" << endl;
        }
        else{
            string a,b;
            a=s.substr(0,n/2);
            b=s.substr(n/2,n/2);
            // cout << a << " " << b << endl;
            if(a==b){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}