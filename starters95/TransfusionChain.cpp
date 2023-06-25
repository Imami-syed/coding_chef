// #include <iostream>
// #include <map>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         // a -- a ab
//         // b -- b ab
//         // ab -- ab
//         // o -- a b ab
//         int n;
//         cin >> n;
//         string s[n];
//         map <string, int> m;
//         for(int i=0;i<n;i++){
//             cin >> s[i];
//             m[s[i]]++;
//         }
//         int len=0,maxm=0;
//         string start;
//         for(int i=0;i<n;i++)
//         {
//             maxm=max(maxm,m[s[i]]);
//             start=s[i];
//         }
//         len = maxm;
//         if(start=="A"){
//             len+=m["AB"];
//             len+=m["O"];
//         }
//         else if(start=="B"){
//             len += m["AB"];
//             len+=m["O"];
//         }
//         else if( start == "O"){
//             len = maxm;
//         }
//         else if(start=="AB"){
//             len += m["O"];
//         }
//         cout << len << endl;
//     }
//     return 0;
// }


#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        int a=0,b=0,ab=0,o=0;
        int max_chain, max_ochain=0;
        for(int i=0;i<n;i++){
            cin >> s;
            if(s=="A") a++;
            else if(s=="B") b++;
            else if(s=="O") o++;
            else ab++;
        }
        max_chain=max(a+ab, b+ab);
        max_ochain=max(o+ab, max(o+a+ab, o+b+ab));
        max_chain = max(max_chain, max_ochain);
        cout << max_chain << endl;
    }
    return 0;
}