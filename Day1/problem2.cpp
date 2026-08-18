// Simple Array Sum
#include<bits/stdc++.h>
using namespace std;
int simpleArraySum(int n){
    int sum=0;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        sum+=t;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<simpleArraySum(n)<<endl;
    return 0;
}
