// Minimum Absolute Difference in an Array

/*
int minimumAbsoluteDifference(vector<int> arr) {
sort(begin(arr),end(arr));
long long dif=INT_MAX;
for(int i=0;i<arr.size()-1;i++){
    long long x=abs(arr[i]-arr[i+1]);
    dif=min(dif,x);
}
return dif;
}

*/