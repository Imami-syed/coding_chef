#include <iostream>
using namespace std;
#define ll long long int 
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n][n];
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                cin >> a[i][j];
            }
        }
        ll maxtrace=0;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                ll l=i,m=j,sum=0;
                while(l<n && m<n){
                    // cout << a[l][m]  << " ";
                    sum+=a[l][m];
                    l++;
                    m++;
                    maxtrace=max(sum,maxtrace);
                }
            }
        }
        cout << maxtrace << endl;
        
    }
    return 0;
}