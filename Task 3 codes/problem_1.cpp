#include<bits/stdc++.h>
using namespace std;


int fun(int n)
{
  int s=0;
  while(n)
    {
      s+=n%10;
      n=n/10;
    }
  return s;
}
int main()
{ ios_base::sync_with_stdio(false);

 string s;
 cin>>s;
 int n=0,c=1,i;
  for(i=0;i<s.size();i++)
  {
      n+=s[i]-'0';
  }
  while(n/10)
    {
      c++;
      n=fun(n);
    }
  cout<<c;
}

