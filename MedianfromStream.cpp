class MedianFinder {
   priority_queue<int,vector<int>,greater<int>>minheap;
    priority_queue<int>maxheap;
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
       if(minheap.size()==maxheap.size()){
           if(maxheap.size()==0){
               maxheap.push(num);
               return;
           }
           
           if(num<maxheap.top()){
               maxheap.push(num);
           }
           else{
               minheap.push(num);
           }
       }
        else{
            if(maxheap.size()>minheap.size()){
                if(num>=maxheap.top()){
                    minheap.push(num);
                }
                else{
                    int temp=maxheap.top();
                    maxheap.pop();
                    minheap.push(temp);
                    maxheap.push(num);
                }
            }
            else{
                if(num<=minheap.top()){
                    maxheap.push(num);
                }
                else{
                    int temp=minheap.top();
                    minheap.pop();
                    maxheap.push(temp);
                    minheap.push(num);
                }
            }
        }
    }
    
    double findMedian() {
       if(maxheap.size()==minheap.size()){
           return (minheap.top()+maxheap.top())/2.0;
       }
        else if(maxheap.size()>minheap.size()){
            return maxheap.top();
        }
        else{
            return minheap.top();
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
