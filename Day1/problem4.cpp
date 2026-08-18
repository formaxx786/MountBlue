// Number Line Jumps
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int x1,x2,v1,v2;
   cin>>x1>>v1>>x2>>v2;
   int c=0;
  for(int i=0;i<=10000;i++){
    if(x1==x2)
    c=1;
    x1+=v1;
    x2+=v2;
  }
  if(c==1)
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;
   return 0;
}

