#include <algorithm>
#include <iostream>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        ll N;
        cin >> N;
        ll a[N];
        for(ll i=0;i<N;i++)
        {
            cin >> a[i];
        }
        ll gcdof4=__gcd(a[0],a[1]);
        for(ll i=0;i<N;i++)
        {
            gcdof4=__gcd(a[i],gcdof4);
        }
        // cout << gcdof4 << endl; 
        for(ll i=0;i<N;i++)
        {
            a[i]=a[i]/gcdof4;
            cout << a[i] << " " ;
        }
        cout << endl;
    }
    return 0;
}