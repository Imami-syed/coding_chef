#include <iostream>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n];
        ll cnteven=0,cntodd=0;
        ll cnt=0;
        for(ll i=0;i<n;i++){
            cin >> a[i];
            if(a[i]%2==0) cnteven++;
            else cntodd++;
        }
        if(cnteven>cntodd){
            for(ll i=0;i<n;i++)
            {
                if(a[i]%2!=0){
                    cnt++;
                }
            }
        }
        else{
            for(ll i=0;i<n;i++)
            {
                if(a[i]%2==0){
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}