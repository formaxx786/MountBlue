// Caesar Cipher
/*
string caesarCipher(string s, int k) {
    string ans;
    for(char i:s){
        char ch;
      
        if(i>='a'&&i<='z'){
            ch='a'+((i-'a'+k)%26);
        }
        else if(i>='A'&&i<='Z'){
            ch = 'A'+((i-'A'+k)%26);
        }
          else{
            ans+=i;
        continue;
        }
        ans+=ch;
    }
    
return ans;
}
*/