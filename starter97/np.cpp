#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        string s="1";
        ll sum=1;
        if(n==k){
            sum=2;
        }
        cout << sum << endl;
    }
    return 0;
}