#include <iostream>
using namespace std;
#define ll long long int 
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll w1,w2,x1,x2,M;
        // 1 crt 0 faulty
        cin >> w1 >> w2 >> x1 >> x2 >> M;
        ll diff = w2-w1;
        ll mininc=M*x1;
        ll maxinc=M*x2;
        if(diff >= mininc && diff <= maxinc){
            cout << "1" << endl;
        }
        else{
            cout << "0" << endl;
        }
    }
    return 0;
}