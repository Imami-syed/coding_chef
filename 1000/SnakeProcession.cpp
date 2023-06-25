#include <iostream>
#include <stack>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string snake;
        cin >> snake;
        string a;
        for(int i=0;i<n;i++){
            if(snake[i]!='.')   a+=snake[i];
        } 
        bool ans=true;
        if(a.length()%2!=0) ans=false;
        else{
            for(int i=0;i<a.length();i++){
                if(i%2==0 && a[i]!='H') 
                {
                    ans=false;break;
                }
                else if(i%2!=0 && a[i]!='T')
                {
                    ans=false;break;
                } 

            }
        }
        if(ans) cout << "Valid" << endl;
        else cout << "Invalid" << endl;
    }
    return 0;
}