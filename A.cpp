#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
    int a[n];
    int count = 0;
    cin >> a[0];
    for(int i=1; i<n; i++)
    {
        cin >> a[i];
        if(a[i]<a[i-1])
            count++;
    }

    if(count==1 && a[0]>=a[n-1])
        cout << "YES" << endl;
    else if(count==0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;


    
}
 
int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t)
    {
        solve();
        t--;
    }
    return 0;
}
