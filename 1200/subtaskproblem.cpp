#include <iostream>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, m, k;
        cin >>  n >> m >> k;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
           
        }
        ll num=n;
        for(ll i=0;i<n;i++)
        {
            if(a[i]==0){
                num=i;
                break;
            }
        }
        if(num==n)
        {
            cout << 100 << endl;
        }
        else if(num >= m){
            cout << k << endl;
        }
        else{
            cout << 0 << endl;
        }

    }
    return 0;
}