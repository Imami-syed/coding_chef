#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;
int main()
{
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
        sort(a,a+n);
        ll cnt=0;
        for(ll i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i] > 1){
                cout << "NO" <<endl;
                break;
            }
            else {
                cnt++;
            }
        }
        if(cnt==n-1){
            cout << "YES" << endl;
        }
    }
    return 0;
}