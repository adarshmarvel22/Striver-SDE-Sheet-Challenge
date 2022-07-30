vector<int> Solution::dNums(vector<int> &a, int b) {
    int n=a.size();
    vector<int>v;
    map<int,int>mp;
    
    if(b>n)  return v;
     
     for(int i=0;i<b;i++)   mp[a[i]]++;
     v.push_back(mp.size());
     
     int x=0;
     for(int i=b;i<n;i++){
         mp[a[i]]++;
         if(mp[a[x]]==1)  mp.erase(a[x]);
         else  mp[a[x]]--;
         x++;
         v.push_back(mp.size());
     }
     
     return v;
}
