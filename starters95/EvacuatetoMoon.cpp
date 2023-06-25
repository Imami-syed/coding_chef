#include <iostream>
#include <vector>
using namespace std;
vector<long long int> remove_element(vector <long long int> v){
    long long int minm = v[0];
    long long int min_i=0;
    for(long long int i=0;i<v.size();i++){
        if(v[i]<minm){
            minm=v[i];
            min_i=i;
        }
    }
    v.erase(v.begin()+min_i);
    return v;
}
vector<long long int> remove_max_element(vector <long long int> v){
    long long int maxm = v[0];
    long long int max_i=0;
    for(long long int i=0;i<v.size();i++){
        if(v[i]>maxm){
            maxm=v[i];
            max_i=i;
        }
    }
    v.erase(v.begin()+max_i);
    return v;
}
long long int find_max(vector <long long int> v){
    long long int maxm = v[0];
    for(long long int i=0;i<v.size();i++){
        if(v[i]>maxm){
            maxm=v[i];
        }
    }
    return maxm;
}
int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int n, m , h;
        cin >> n >> m >> h;
        vector <long long int> a;
        long long int temp;
        long long int result=0;
        for(long long int i=0;i<n;i++){
            cin >> temp;
            a.push_back(temp);
        }
        vector <long long int> b;
        for(long long int i=0;i<m;i++){
            cin >> temp;
            b.push_back(temp);
        }
        long long int max_en=0;
        if(n>m){
            long long int rem=n-m;
            for(long long int i=0;i<rem;i++){
                a=remove_element(a);
            }

        }
        else{
            long long int rem=m-n;
            for(long long int i=0;i<rem;i++){
                b=remove_element(b);
            }
        }
        // for(long long int i=0;i<a.size();i++){
        //     cout << a[i] << " ";
        // }
        // cout << endl;

        long long int temp_b=0,temp_a=0;
        // cout << a.size() << endl;
        long long int dum=a.size();
        for(long long int i=0;i<dum;i++){
            temp_b=find_max(b);
            b=remove_max_element(b);
            temp_b=temp_b*h;
            temp_a=find_max(a);
            a=remove_max_element(a);
            // cout << temp_a <<" "<< temp_b << endl;
            if(temp_a>temp_b){
                result+=temp_b;
            }
            else{
                result+=temp_a;
            }
            continue;
        }
        cout << result << endl;
    }
    return 0;
}