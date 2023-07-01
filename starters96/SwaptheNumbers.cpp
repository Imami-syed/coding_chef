#include <iostream>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        ll n , k;
        cin >> n >> k;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
        }
        // choose i j \i-j\ >= k and swap Ai and Aj
        for(ll i=0;i<n-k;i++)
        {
            ll tempi=i;
            ll tempj=tempi+k;
            if(a[tempi] > a[tempj]) {
                ll swap=a[tempi];
                a[tempi]=a[tempj];
                a[tempj]=swap;
            }
        }
        for(ll i=0;i<n;i++)
        {
            cout << a[i] << " ";

        }
        cout << endl;
    }
    return 0;
}