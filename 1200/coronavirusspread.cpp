#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll x[n];
        for(ll i=0;i<n;i++)
        {
            cin >> x[i];
        }
        // n people 1 to n 
        // ith person xi
        sort(x,x+n);
        ll least=0, worst=0;
    }
    return 0;
}