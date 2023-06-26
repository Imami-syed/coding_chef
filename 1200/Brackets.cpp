#include <iostream>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        ll maxbrac=0,o=0;
        for(ll i=0;i<a.length();i++)
        {
          if(a[i]=='(')
          {
            o++;
          }
          else if(a[i]==')')
          {
            o--;
          }
          maxbrac=max(maxbrac, o);
        }
        for(ll i=0;i<maxbrac;i++)
        {
            cout << '(';
        }
        for(ll i=0;i<maxbrac;i++)
        {
            cout << ')';
        }
        cout << endl;
        // cout << a << endl;
    }
    return 0;
}