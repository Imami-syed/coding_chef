#include <iostream>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n%2==0){
            cout << 2*(n/2)*(n/2) << endl;
        }
        else{
            cout << 2*((n-1)/2)*(((n-1)/2)+1) << endl;
        }
    }
    return 0;
}