// tle

long long getInversions(long long *arr, int n){
    // Write your code here.
    long long cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j])  cnt++;
        }
    }
    return cnt;
}
