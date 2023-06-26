#include <iostream>
#include <vector>
#define ll long long int
using namespace std;
bool check(vector <bool> s){
    ll temp=0;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]){
            temp++;
        }
    }
    if(temp==s.size()){
        return true;
    }
    return false;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n];
        vector <bool> clrs(7,false);
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
            
        }
        // VIBGYOR == 1234567
        ll ans=0;
        for(ll i=0;i<n;i++){
            switch (a[i])
            {
            case 1:
                clrs[0]=true;
                break;
            case 2:
                clrs[1]=true;
                break;
            case 3:
                clrs[2]=true;
                break;
            case 4:
                clrs[3]=true;
                break;
            case 5:
                clrs[4]=true;
                break;
            case 6:
                clrs[5]=true;
                break;
            case 7:
                clrs[6]=true;
                break;
            default:
                break;
            }

            if(check(clrs)){
                ans=i+1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}