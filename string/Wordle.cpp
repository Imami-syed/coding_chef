#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        string s, t;
        cin >> s >> t;
        // correct G , wrong B
        string M ="";
        for(ll i=0;i<s.length();i++)
        {
            if(s[i]==t[i])
            {
                M+="G";
            }
            else{
                M+="B";
            }
        }
        cout << M << endl;
    }
    return 0;
}