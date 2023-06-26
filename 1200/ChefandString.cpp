#include <iostream>
#define ll long long int
using namespace std;
string lofx(string s){
    string res="";
    char temp=s[0];
    for(ll i=0;i<s.length()-1;i++)
    {
        res+=s[i+1];
    }
    res+=s[0];
    // cout << res << endl;
    return res;
}
string rofx(string s){
    string res;
    char temp=s[s.length()-1];
    res+=temp;
    for(ll i=1;i<s.length();i++)
    {
        res+=s[i-1];
    }
    // cout << res << endl;
    return res;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        // l(x) moving all chars of X one step towards 
        // left and 1 to end
        // string -- trings
        // r(x) -- string -- gstrin
        // yes if r(x)==l(x)
        string ls,rs;
        ls=lofx(s);
        rs=rofx(s);
        if(ls==rs)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}