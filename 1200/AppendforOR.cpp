#include <iostream>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,y;
        cin >> n >> y;
        ll a[n], oroperator=0;
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
            oroperator = (oroperator | a[i]);
            // cout << oroperator/ << endl;
        }
        ll i=0;
        while(i<=y){
            if((i | oroperator) == y){
                cout << i << endl;
                // cout << (i | oroperator) << endl;
                // cout << "continuing" << endl;
                break;
            }
            if(i==y){
                cout << -1 << endl;
                break;
            }
            i++;
        }        
    }
    return 0;
}