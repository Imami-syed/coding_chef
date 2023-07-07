#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--)    
    {
        ll n, q;
        cin >> n >> q;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
        }
        ll quer[q];
        for(ll i=0;i<q;i++)
        {
            cin >> quer[i];
        }
        ll tri[n];
        for(ll i=0;i<n;i++)
        {
            if(i==n-1){
                tri[i]=min(a[i],a[0]);
                tri[i]=min(tri[i],a[1]);
            }
            else if(i==n-2)
            {
                tri[i]=min(a[i],a[i+1]);
                tri[i]=min(tri[i],a[0]);
            }
            else{
                tri[i]=min(a[i],a[i+1]);
                tri[i]=min(tri[i],a[i+2]);
            }
        }
        sort(tri,tri+n);
        for(ll i=0;i<q;i++){
            cout << tri[quer[i]-1] << endl;
        }
    }
    return 0;
}