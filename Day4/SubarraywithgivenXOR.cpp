
int Solution::solve(vector<int> &a, int b) {
    long long int maxl=0;
    long long int xorsum;
    int n=a.size();
    for(int i=0;i<n;i++){
        xorsum=0;
        //  if(xorsum==b)  maxl=max(maxl,1);
        for(int j=i;j<n;j++){
            xorsum^=a[j];
            if(xorsum==b)  maxl++;
            
        }
    }
    return maxl;
}
