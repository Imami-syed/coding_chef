#include <iostream>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        string d;
        cin >> d;
        ll cntones=0,cntzeros=0;
        for(ll i=0;i<d.length();i++){
            if(d[i]=='0') cntzeros++;
            else if(d[i]=='1') cntones++;
        }
        if(cntzeros==1 || cntones==1){
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}