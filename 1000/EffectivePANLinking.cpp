#include <iostream>
#define ll  double 
using namespace std;
void fn(){
    string s;
    cin >> s;
    ll len = s.length();
    int newres=0, ans=0;
    string res;
    if(len < 2)
    {   
        newres=stoi(s);
        // ans=newres;
    }
    else{
        res=s.substr(len-2, 2);
        newres=stoi(res);
    }
    cout << newres%20 << endl;

}
int main(){
    ll t;
    cin >> t;
    while(t--){
        fn();
    }
    return 0;
}