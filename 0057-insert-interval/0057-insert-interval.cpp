class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n= intervals.size();
        vector<vector<int>>res;

        int i=0;
         int nStart = newInterval[0];
         int nEnd = newInterval[1];

         while(i<n && nStart > intervals[i][1]){
            res.push_back(intervals[i]);
            i++;

         }
         while(i<n  && intervals[i][0]<= nEnd){
             nStart = min(intervals[i][0],nStart);
             nEnd = max( intervals[i][1], nEnd);
             i++;

         }
            res.push_back({nStart, nEnd});

         while( i<n){
             res.push_back(intervals[i]);
             i++;

         }
         return res;

        
    }
};