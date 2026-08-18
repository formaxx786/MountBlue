// Compare the triplets
#include <bits/stdc++.h>

using namespace std;


int main()
{
   int x1,x2,x3;
   cin>>x1>>x2>>x3;
   int y1,y2,y3;
   cin>>y1>>y2>>y3;
   int aans=0,bans=0;
   if(x1>y1)
   aans++;
   if(x2>y2)
   aans++;
   if(x3>y3)
   aans++;
     if(x1<y1)
   bans++;
   if(x2<y2)
   bans++;
   if(x3<y3)
   bans++;
   cout<<aans<<" "<<bans<<endl;
    return 0;
}
