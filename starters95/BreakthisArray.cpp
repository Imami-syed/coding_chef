#include <iostream>
#include <cstdlib>

#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin >> a[i];
        }
        string s;
        cin >> s;
        // operations - k 
        srand((unsigned) time(NULL));
        ll x = 1+(rand()%n);
        // cout << x << endl;
    }
    return 0;
}