#include <iostream>
#include <vector>

#define ll long long int
using  namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n ,k ;
        cin >> n >> k;
        ll temp;
        ll votes[n]={0};
        for(ll i=0;i<n;i++)
        {
            cin >> temp;
            if(temp==i+1){
                votes[temp-1]=-1;
            }
            else{
                if(votes[temp-1]!=-1)
                {
                    votes[temp-1]++;
                }
            }
        }
        ll cnt=0;
        for(ll i=0;i<n;i++)
        {
            if(votes[i] >=k){
                cnt++;
            }
        }
        cout << cnt << endl;

    }
    return 0;
}