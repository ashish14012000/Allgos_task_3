#include<bits/stdc++.h>
#define ll int64_t

using namespace std;

int main()
{ ios_base::sync_with_stdio(false);

ll n,x;
cin>>x>>n;

ll a[n],i;
for(i=0;i<n;i++)
    cin>>a[i];

priority_queue<ll, vector<ll>, greater<ll> > m,r;

sort(a,a+n);
ll b[n-x];

for(i=0;i<n-x;i++)
    b[i]=a[i];

for(i=n-x;i<n;i++)
    m.push(a[i]);

ll p;
for(i=n-x-1;i>=0;i--)
{
    p=m.top();
    m.pop();
    m.push(p+b[i]);
}

vector<ll> v;
ll sum=0;
for(i=0;i<n-x;i++)
{
    sum+=b[i];
    if(sum>b[n-x-1])
    break;
}
for(i=i+1;i<n-x;i++)
{
    v.push_back(b[i]);
}
v.push_back(sum);

for(i=n-x;i<n;i++)
    r.push(a[i]);

for(i=v.size()-1;i>=0;i--)
{
    p=r.top();
    r.pop();
    r.push(p+v[i]);
}
cout<<max((r.top()),(m.top()))<<endl;

}
