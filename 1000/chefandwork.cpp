#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n , k;
        cin >> n >> k;
        ll w[n];
        ll maxm=0;
        for(ll i=0;i<n;i++)
        {
            cin >> w[i];
            maxm=max(maxm,w[i]);
        }
        if(maxm>k){
            cout << -1 << endl; 
        }
        else{
            ll cnt=0,i=0;
            while(true){
                ll sum=0;
                while(sum+w[i]<=k){
                    sum+=w[i];
                    i++;
                }
                cnt++;
                if(i>n-1){
                    cout << cnt << endl;
                    break;
                }
            }
        }

    }
    return 0;
}