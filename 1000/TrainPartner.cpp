#include <iostream>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        // 1cmp -- 1 - 8
        // 2cmp -- 9 - 16
        // i cmp -- 8(i-1)+1 - 8*i
        // 1lb,2mb,3ub,4lb,5mb,6ub,7sl,8su
        // 3-6, 2-5, 1-4,7-8
        ll n;
        cin >> n;
        ll r=n%8;
        if(r==7)
        {
            cout << n+1 << "SU" << endl;
        }
        else if(r==0){
            cout << n-1 << "SL" << endl;
        }
        else if(r==1){
            cout << n+3 << "LB"<< endl;
        }
        else if(r==2){
            cout << n+3 << "MB"<< endl;
        }
        else if(r==3){
            cout << n+3 << "UB"<< endl;
        }
        else if(r==4){
            cout << n-3 << "LB"<< endl;
        }
        else if(r==5){
            cout << n-3 << "MB"<< endl;
        }
        else if(r==6){
            cout << n-3 << "UB"<< endl;
        }


    }
    return 0;
}