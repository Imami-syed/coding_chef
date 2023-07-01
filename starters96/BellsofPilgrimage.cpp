#include <iostream>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        ll n , x, k , p;
        cin >> n >> x >> k >> p;
        ll ans=p;
        ll i=0;
        while(i<k && i < x){
            ans+=10;
            i++;
        }
        while(i<k){
            ans+=5;
            i++;
        }
        if(n==(i)){
            ans+=20;
        }
        cout << ans << endl;
    }
    return 0;
}