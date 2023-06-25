#include <iostream>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n , k;
        cin >> n >> k;
        ll w[n];
        ll cntcry=0;
        for(ll i=0;i<n;i++)
        {
            cin >> w[i];
            if(w[i] > k) cntcry=0;
        }
        

    }
    return 0;
}