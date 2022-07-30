class KthLargest {
   priority_queue<int,vector<int>,greater<int>>mnq;
int k;
public:
    KthLargest(int k, vector<int>& v) {
        this->k=k;
        int x=v.size()-k;
for(auto &i:v){
    mnq.push(i);
}
        while(x-->0)  mnq.pop();
    }
    
    int add(int val) {
//      if(mnq.size()<k){
//          mnq.push(val);
//      }
// if(val>mnq.top()){
//     mnq.push(val);
//         mnq.pop();
// }  
//         return mnq.top();
                mnq.push(val);
        if (mnq.size() > k) mnq.pop();
        return mnq.top();

    }
};

/**
 KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for (auto &n : nums) {
            pq.push(n);
        }
        while (pq.size() > k) pq.pop();
    }
    
    int add(int val) {
        pq.push(val);
        if (pq.size() > k) pq.pop();
        return pq.top();
    }
 */
