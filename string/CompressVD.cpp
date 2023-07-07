#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<int> a;
        ll temp;
        for(ll i=0;i<n;i++)
        {
            cin >> temp;
            a.push_back(temp);
        }
        for(ll i=0;i<n;i++)
        {
            if(a[i]==a[i+1]){
                a.erase(a.begin()+i, a.begin()+i+1);
            }
        }
        // for(ll i=0;i<a.size();i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;
        cout << a.size() << endl;
    }
    return 0;
}