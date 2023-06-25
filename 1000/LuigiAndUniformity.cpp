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
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
        }
        ll gcdall=a[0];
        for(ll i=1;i<n;i++)
        {
            gcdall=__gcd(gcdall,a[i]);
        }
        ll res=0;
        for(ll i=0;i<n;i++)
        {
            if(a[i] != gcdall){
                res++;
            }
        }
        cout << res << endl;

    }
    return 0;
}