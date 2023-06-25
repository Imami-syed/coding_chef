#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n;
        cin >> s;
        int len=n;
        if(len%2!=0){
            len = len-1;
        }
        for(int i=0; i<len;i=i+2){
            int temp;
            temp=s[i];
            s[i]=s[i+1];
            s[i+1]=temp;
        }
        for(int i=0; i<n;i++){
            s[i] = 'z' - s[i] + 'a';
        }
        cout << s << endl;
    }
    return 0;
}