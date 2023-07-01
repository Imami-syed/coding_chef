#include <iostream>
#define ll long long int
using namespace std;
ll fibdp[200]={-1};
ll fibonacci(ll n){
    if(n==0 || n==1){
        return n;
    }
    if(fibdp[n] != -1){
        return fibdp[n];
    }
    ll res=fibdp[n-1]+fibdp[n-2];
    fibdp[n]=res;
    return res;
}
int main(){
    ll t;
    cin >> t;
    cout << fibonacci(t) << endl;
}