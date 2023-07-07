#include <iostream>
#include <bits/stdc++.h>
#include <string>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n ;
        string s;
        cin>> s;
        ll cnt=0,flag=0,a=0;
        for(auto &ch:s)
        {
            if(ch==':' and a==0){
                flag=1;
            }
            else if(ch == ':' and a==1)
            {
                cnt++;
                a=0;
            }
            else if(ch==')' and flag==1)
            {
                a=1;
            }
            else if(ch=='(')
            {
                a=0;
                flag=0;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}