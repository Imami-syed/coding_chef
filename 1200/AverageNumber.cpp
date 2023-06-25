#include <iostream>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, k, v;
        cin >> n >> k >> v;
        ll val; 
        ll sum=0;
        for(ll i=0;i<n;i++){
            cin >> val;
            sum+=val;
        }
        //  v is avg of n+k
        //  all k elements value is same
        ll intsum=v*(n+k);
        ll diff =intsum-sum;
        if(diff%k==0 && diff/k>0){
            cout << diff/k << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }

    return 0;
}