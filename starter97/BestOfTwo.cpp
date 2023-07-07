#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        ll a[3]={0};
        ll b[3]={0};
        // cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

        ll minma=INT64_MAX,minmb=INT64_MAX;
        ll minita=0,minitb=0;
        for(ll i=0;i<3;i++)
        {
            cin >> a[i];
            if(a[i]<minma)
            {
                minma=a[i];
                minita=i;
            }
        }
        for(ll i=0;i<3;i++)
        {
            cin >> b[i];
            if(b[i]<minmb)
            {
                minmb=b[i];
                minitb=i;
            }

        }
        ll alice=0,bob=0;
        for(ll i=0;i<3;i++)
        {
            if(i!=minita){
                alice+=a[i];
            }
        }
        for(ll i=0;i<3;i++)
        {
            if(i!=minitb){
                bob+=b[i];
            }
        }
        if(alice==bob)
        {
            cout << "Tie" << endl;
        }
        else if(alice < bob)
        {
            cout << "BOB" << endl;
        }
        else {
            cout << "ALICE" << endl;
        }
    }
    return 0;
}