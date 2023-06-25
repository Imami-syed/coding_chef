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
        ll cnt=0;
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i] < 0) cnt++;
        }

        if(cnt==0 || cnt ==n){
            cout << n << " " << n << endl;
        }   
        else if(cnt > abs(n-cnt)){
            cout << cnt << " " << n-cnt << endl;
        }   
        else{
            cout << n-cnt << " " << cnt << endl;
        }  
    }
    return 0;
}