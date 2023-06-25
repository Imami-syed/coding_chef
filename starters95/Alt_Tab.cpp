#include <iostream>
#include <vector>
using namespace std;
int check_present(vector <string> v, string s){
    for(int i=0; i<v.size();i++){
        if(s==v[i])
            return i;
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    string s;
    int it=-1;
    vector <string> v;
    for(int i=0; i<n;i++){
        cin >> s;
        it=check_present(v,s);
        if(it==-1){
            v.push_back(s);
        }
        else{
            v.erase(v.begin()+it);
            v.push_back(s);
        }
    }
    // for(int i=0;i<v.size();i++){
        // cout << v[i] << " ";
    // }
    // cout  << endl;
    string s1, res="";
    for(int i=v.size()-1;i>=0;i--){
        s1=v[i].substr(v[i].length()-2,2);
        // cout << s1 << endl;
        res+=s1;
    }
    cout << res << endl;

}