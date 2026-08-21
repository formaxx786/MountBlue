// Diagonal Difference

/*
int diagonalDifference(vector<vector<int>> arr) {
int sum1=0,sum2=0;
for(int i=0;i<arr.size();i++){
    sum1+=arr[i][i];
}
int k=0;
for(int i=arr[0].size()-1;i>=0;i--){
    sum2+=arr[k][i];
    k++;
}
return abs(sum2-sum1);


}
*/