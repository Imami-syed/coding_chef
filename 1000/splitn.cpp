#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define ll long long int 

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll cnt=0;
        while(n>0){
            if(n%2==0){
                cnt++;
            }
            n/=2;
        }       
        cout << cnt-1 << endl;
    }
    return 0;
}