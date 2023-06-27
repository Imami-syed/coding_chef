#include <iostream>
#include <string>
#include <algorithm>
#define ll long long int
using namespace std;
ll bintoint(string s){
    ll res;
    // 100101
    for(ll i=s.length()-1;i>=0;i--)
    {
        ll temp=0;
        char charc=s[i];
        temp=pow(2,temp)*atoi(charc);

    }
    return res;
}
int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        string s;
        cin >> n >> s;
        
    }
    return 0;
}