// Sales by Match

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<int, int>x;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        x[t]++;
    }
    int sum=0;
    for(auto &i:x){
        sum+=(i.second/2);
        
    }
    cout<<sum<<endl;
    return 0;
}
