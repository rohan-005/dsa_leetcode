class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        map<int,int> m;
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            m.insert({i,nums[i]});
        }
        
        vector<int> sorted;
        for(int i=0;i<m.size();i++) sorted.push_back(m[i]);
        sort(sorted.begin(),sorted.end());
        for(int i=0;i<sorted.size();i++) cout << sorted[i]<<" ";
        return sorted[n-k];
        // return 0;
    }
};