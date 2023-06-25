#include <iostream>
#include <algorithm>
#define ll long long int 
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a, a+n);
        ll num_op=0;
        for(ll i=0;i<n;i++){
            if(i+1 > a[i]){
                num_op += (i+1)-a[i];
            }
            else if(i+1 < a[i]){
                // 1 1 2 3
                num_op=-1;break;
            }
        }
        cout << num_op << endl;
    }
    return 0;
}