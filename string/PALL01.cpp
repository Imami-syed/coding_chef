#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        string n;
        cin >> n;
        ll len=n.length();
        ll cnt=0;
        for(ll i=0;i<len;i++)
        {
            if(n[i]==n[len-i-1])
                cnt++;
        }
        if(cnt==len) cout << "wins" << endl;
        else cout << "loses" << endl;
    }
    return 0;
}