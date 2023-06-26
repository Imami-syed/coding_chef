#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
        }
        vector <bool> k(n,false);
        for(ll i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1]){
                k[i]=true;
                k[i+1]=true;
            }
        }
        ll wrng=0;
        for(ll i=0;i<n;i++)
        {
            if(k[i]) wrng++;
        }
        cout << wrng << endl;
    
    }
    return 0;
}