// Day of the Programmer

/*
string dayOfProgrammer(int year) {
    string ans="12.09.";
    string ans1="13.09.";
     if (year == 1918) 
     return "26.09.1918";
     
    bool leap;
    if (year < 1918)
        leap = (year % 4 == 0);
    else
        leap = (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
    
if(leap)
{
    ans+=to_string(year);
    return ans;
}else{
    ans1+=to_string(year);
}
return ans1;
}
*/