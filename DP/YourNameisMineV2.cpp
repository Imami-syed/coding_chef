// #include <iostream>
// #include <stack>
// #include <algorithm>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        string s1,s2;
        cin >> s1 >> s2;
        if(s2.length() > s1.length())
        {
            swap(s1,s2);
        }
        stack<char> s;
        for(ll i=0;i<s2.length();i++)
        {
            s.push(s2[i]);
        }
        for(ll i=s1.length()-1;i>=0;i--)
        {
            if((s.top()==s1[i]) && !s.empty()){
                s.pop();
            }
        }
        if(s.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}