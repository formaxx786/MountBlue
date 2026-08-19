// Quicksort 1 - Partition
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
cin>>n;
    vector<int>x;
    
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        x.push_back(t);
    }
    int c = x[0];
   
    vector<int>e,l,r;
    for(int i:x){
        if(i==c)
        e.push_back(i);
        if(i>c)
        r.push_back(i);
        if(i<c)
        l.push_back(i);
    }
    vector<int>ans;
    for(int i:l)
    ans.push_back(i);
    for(int i:e)
    ans.push_back(i);
    for(int i:r)
    ans.push_back(i);
    for(int i:ans)
    cout<<i<<" ";
    return 0;
}
