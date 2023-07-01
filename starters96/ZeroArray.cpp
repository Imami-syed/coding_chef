#include <iostream>
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
        // choose k 
        // subtract 1 frm ak a(k+1) mod n
        // if convert all to 0 then YES else NO
        // 2 2 4 4 6 
        // a[i] = a[i-1] + a[i+1]
        // a[0] = a[1] + a[n-1]
        // a[n-1] = a[0] + a[n-2]
        ll cnt=0;
        for(ll i=0;i<n;i++)
        {
           
        }
    }
    return 0;
}