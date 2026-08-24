// Strong Password

/*
int minimumNumber(int n, string password) {
    int ans=0;
      bool x = any_of(password.begin(), password.end(), [](char c) {
        return ispunct(c);
    });
    if(x==0)
    ans++;
       bool y = any_of(password.begin(), password.end(), [](char c) {
        return isdigit(c);
    });
    if(y==0)
    ans++;
  
int f=0;
for(char c:password)
{
    if(c>='a'&&c<='z'){
    f=1;
    break;}
}
if(f==0)
ans++;
int d=0;
for(char c:password)
{
    if(c>='A'&&c<='Z'){
    d=1;
    break;}
}
if(d==0)
ans++;
    
    int z=ans+n;
    if(z>=6)
    return ans;
    
    return (6-n);
    
    

}
*/