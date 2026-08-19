// Super Reduced String

#include <bits/stdc++.h>

using namespace std;
int main()
{
string s;
cin>>s;
string x;
for(char ch:s){
  
   if(!x.empty()&&ch==x.back())
   x.pop_back();
   else
   x.push_back(ch);
    
}
if(x.empty())
cout<<"Empty String"<<endl;
else
cout<<x<<endl;

    return 0;
}
