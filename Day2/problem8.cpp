// Between Two Sets

#include <bits/stdc++.h>

using namespace std;
int main()
{
    
 int n,m;
 cin>>n>>m;
 int l=1;
 for(int i=0;i<n;i++)
 {
    int t;
    cin>>t;
    l=lcm(l,t);
 }
 vector<int>x;
 for(int i=0;i<m;i++){
    int t;
    cin>>t;
    x.push_back(t);
 }
 int p=x[0];
 if(m!=1){
    for(int i=1;i<m;i++){
        p=__gcd(p,x[i]);
    }
    
 }
 vector<int>pans;
 for(int i=l;i<=p;i=i+l){
    pans.push_back(i);
 }

 vector<int>ans;
 for(int i:pans){
    int f=0;
    for(int j:x){
        if(j%i!=0)
        f=1;
    }
    if(f==0)
    ans.push_back(i);
 }
 cout<<ans.size()<<endl;

    return 0;
}
