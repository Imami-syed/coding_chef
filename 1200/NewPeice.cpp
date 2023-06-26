#include <iostream>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        ll a, b, p, q;
        cin >> a >> b >> p >> q;
        // i+j -- white if i+j even
        // i+j -- white if i+j even
        bool pab=false,ppq=false;
        if((a+b)%2==0) pab=true;
        if((p+q)%2==0) ppq=true;
        
        if(a==p && b==q){
            cout << 0 << endl;
        }
        else if(pab&&ppq){
            cout << 2 << endl;
        }
        else if(!pab&&!ppq){
            cout << 2 << endl;
        }
        else if(pab&&!ppq){
            cout << 1 << endl;
        }
        else if(!pab&&ppq){
            cout << 1 << endl;
            
        }
    }

    return 0;
}