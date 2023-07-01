#include <iostream>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
        }
        ll max=a[n-1];
        if(max+k<=m) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}