#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#define ll long long int
using namespace std;
ll mex(ll arr[], ll N)
{

  // sort the array
  sort(arr, arr+N);

  int mex = 0;
  for (int idx = 0; idx < N; idx++)
  {
    if (arr[idx] == mex)
    {
      // Increment mex
      mex += 1;
    }
  }

  // Return mex as answer
  return mex;
}

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
        }
        ll k=n-1;
        ll mexarr[k];
        ll initb;
        for(ll i=0;i<k;i++)
        {
            mexarr[i]=a[i];
        }
        initb=mex(mexarr,k);
        cout << initb << endl;


    }
    return 0;
}