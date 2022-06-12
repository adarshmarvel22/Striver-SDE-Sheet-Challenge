// } Driver Code Ends
class Solution
{
     class meeting{
        public:
        int s,e,p;
    };
    bool static comparator(class meeting m1,meeting m2){
         if (m1.e < m2.e) return true;
         else if (m1.e > m2.e) return false;
        //  else if (m1.p < m2.p) return true;
         return false;
    }
    
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        meeting meet[n];
      for (int i = 0; i < n; i++) {
         meet[i].s = start[i], meet[i].e = end[i];
        //  meet[i].p = i + 1;
      }

      sort(meet, meet + n, comparator);

    //   vector < int > ans;

      int limit = meet[0].e;
    //   ans.push_back(meet[0].pos);
int cnt=1;
      for (int i = 1; i < n; i++) {
         if (meet[i].s > limit) {
            limit = meet[i].e;
            // answer.push_back(meet[i].p);
            cnt++;
         }
      }
     return cnt;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends
