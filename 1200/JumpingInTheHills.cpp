#include <iostream>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, u, d;
        cin >> n >> u >> d;
        ll h[n];
        for(ll i=0;i<n;i++)
        {
            cin >> h[i];
        }
        ll parachute=1;
        //cout i+1
        ll jmp=1;
        for(ll i=0;i<n-1;i++)
        {
            if(h[i+1]==h[i])
            {
                jmp++;
            }
            else if(h[i+1] > h[i])
            {
                if((h[i+1]-h[i]) <= u){
                    jmp++;
                }
                else{
                    break;
                }
            }
            else if(h[i+1] < h[i])
            {
                if((h[i]-h[i+1]) <= d){
                    jmp++;
                }
                else{
                    if(parachute==1)
                    {
                        jmp++;
                        parachute--;
                    }
                    else{
                        break;
                    }
                }
            }
        }
        cout << jmp << endl;
    }
    return 0;
}