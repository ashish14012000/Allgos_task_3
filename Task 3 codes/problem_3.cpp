#include<bits/stdc++.h>
using namespace std;

int main()
{ ios_base::sync_with_stdio(false);

 bool a[100001];
 int i,j,n,c=0;
 cin>>n;
 for(i=0;i<100001;i++)
    a[i]=true;

 a[0]=a[1]=false;

 for(i=2;i*i<=n;i++)
 {  if(a[i])
    {
     for(j=i*i;j<=n;j+=i)
     a[j]=false;
    }
 }
 for(i=2;i<=n;i++)
 {
     if(a[i])
        c++;
 }
 cout<<(c*(c+1))/2<<endl;
}
