#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll q;
    cin >> q;
    while(q--)
    {
        ll n;
        string s,t,u;
        cin >> n;
        cin >> s >> t >> u;
        ll shift=0;
        // for(ll i=0;i<n;i++)
        // {
            // shift=t[i]-s[i];
        // }
        shift=t[0]-s[0];
        if(shift < 0) shift+=26;
        if(shift >26) shift-=26;
        // cout << shift << endl;
        string res;
        for(ll i=0;i<n;i++)
        {
            // cout << u[i] <<" "<< endl;
            // cout << u[i]+1 <<" "<<char(u[i]+1)<< endl;
            // cout << u[i]+shift <<" "<< endl;
            if((u[i]+shift) > 122 )  
            {
                cout << char(((u[i]+shift)-26));
            }
            else{
                cout << char((u[i]+shift));
            }
            // if(temp < 0  )  
        }
        cout << endl;
    }
    return 0;
}