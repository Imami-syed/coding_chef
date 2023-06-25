#include <iostream>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n=s.length();
        bool ans=false;
        for(int i=0;i<n-2;i++){
            string s1=s.substr(i,3);
            // cout << s1 << endl;
            if(s1=="010" || s1=="101"){
                ans=true;
                break;
            }
        }
        if(ans){
            cout << "Good" << endl;
        }
        else{
            cout << "Bad" << endl;
        }
    }
    return 0;
}