#include <iostream>
#define ll long long int
using namespace std;
ll solve(ll n){
    if(n>=12){
        return  solve(n/2)+solve(n/3)+solve(n/4) ;
    }
    else{
        return n;
    }
}
int main(){
    ll n;
    while(cin >> n)
        cout << solve(n) << endl; 
    return 0;
}