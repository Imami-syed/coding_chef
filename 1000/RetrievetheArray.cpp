#include <iostream>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll b[n];
        ll asum=0;
        for(ll i=0;i<n;i++)
        {
            cin >> b[i];
            asum+=b[i];
        }
        asum=asum/(n+1);
        // f(i) = a1+a2..ai
        // g(i) = ai+... an
        // bi=fi+gi
        // bi=a1 + ... an + ai
        // b1+b2 ... bn = (n+1)(a1+a2...an)
        // a1+a2+a3+a4..an= sigma b/(n+1)
        // ai = bi-asum
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cout << b[i]-asum << " ";
        }
        cout << endl;
    }
}