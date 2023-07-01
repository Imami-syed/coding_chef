#include <iostream>
#define ll long long int
#include <algorithm>
using namespace std;
bool issubseq(string m , string w){
    ll lenss=w.length();
    ll check=0;
    ll k2=0;
    // cout << lenss << endl;
    for(ll i=0;i<lenss;i++)
    {
        char find=w[i];
        for(ll k=0+k2;k<m.length();k++)
        {
            if(m[k]==find){
                check++;
                k2=k+1;
                // cout << find << " " << m[k] << " " << k2 << endl;
            }
            if(check==lenss) return true;
        }
        // cout << i << endl;
    }
    return false;
}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        string m, w;
        cin >> m >> w;
        // m is subsequence of w 
        // w is subsequence of m
        bool ans=false;
        if(m.length() > w.length()){
            ans=issubseq(m,w);
        }
        else{
            ans=issubseq(w,m);
        }
        if(ans)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}