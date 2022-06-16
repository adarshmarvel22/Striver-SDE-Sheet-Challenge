bool isposs(vector<int>&a,int m,int k){
    int total=0;
    int cnt=0;
    for(int i=0;i<a.size();i++){
        if(total+a[i]>m)
        {
            total=a[i];
            cnt++;
            if(total>m)  return false;
        }
        else{
            total+=a[i];
        }
    }
    if(cnt<k)  return 1;
    return 0;
}

int Solution::books(vector<int> &a, int k) {
     if (k > a.size()) return -1;
    int l=0,h=0;
    for(int i=0;i<a.size();i++){
      l=min(l,a[i]);
      h+=a[i];
    }
    int m;
    while(l<=h){
m=(l+h)>>1;
if(isposs(a,m,k))
   h=m-1;
else 
   l=m+1;   
        
    }
return l;

}
