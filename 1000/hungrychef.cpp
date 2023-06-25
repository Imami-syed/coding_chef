#include <iostream>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll x,y,n,r;
        cin >> x >> y >> n >> r;
        ll np=-1;
        if(x*n>r){
            cout << np << endl;
        }
        else if(y*n <= r){
            cout << 0 << " " << n << endl;
        }
        else{
            ll b=0;
            b=min(n,((r-x*n)/(y-x)));
            cout << n-b << " " << b << endl;
        }
    }
    return 0;
}