// Breaking The records
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c1=0,c2=0;
    int maxx=0;
    int minn=0;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        
        if(i==0)
        {
            maxx=t;
            minn=t;
        }
        if(maxx<t){
        c1++;
        maxx=t;
        }
        if(minn>t){
        c2++;
        minn=t;
        }
    }
    cout<<c1<<" "<<c2<<endl;
  
return 0;
}
