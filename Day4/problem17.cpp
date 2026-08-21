// Grading Students

/*
vector<int> gradingStudents(vector<int> grades) {
    vector<int>g;
for(int i:grades){
    int ld=i%10;
    if(i<38)
    {
        g.push_back(i);
        continue;
    }
    else if(ld>5&&ld>=8)
    {
        int p=10-ld;
        int j=i+p;
        g.push_back(j);
    }
    else if(ld<5&&ld>=3)
    {
        int p=5-ld;
        int j=i+p;
        g.push_back(j);
    }
    else{
        g.push_back(i);
    }
}
return g;
}
*/