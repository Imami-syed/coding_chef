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
        string s="";
        for(ll i=0;i<k;i++)
        {   
            s+='0';
        }
        // cout << s << endl;
        ll dif=n-k;
        if(dif%2==0)
        {
            for(ll i=0;i<dif/2;i++)
            {
                s+="10";
            }
        }
        else{
            for(ll i=0;i<dif/2;i++)
            {
                s+="10";
            }
            if(dif/2 == 0 )
            {
                s+='1';
            }
            else{
                s+='0';
            }
        }
        // cout << s << endl;
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]==1)
            {
                sum+=1;
            }
        }
        cout << sum << endl;

    }
    return 0;
}