// Migratory Birds

// Only function solution
/*
int migratoryBirds(vector<int> arr) {
map<int,int>x;
for(int i:arr){
    x[i]++;
}
int bi=0;
int ans=0;
for(auto i:x){
        if(i.second>bi){
        ans=i.first;
        bi=i.second;
    }
}
return ans;
}
*/