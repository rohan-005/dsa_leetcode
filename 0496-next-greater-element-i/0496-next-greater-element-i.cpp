class Solution {
public:

    int nextGreater(vector<int> nums, int key, int start){
        for(int i = start;i<nums.size();i++){
            if(nums[i]>key) return nums[i];
        }
        return -1;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        vector<int> idx;
        vector<int> res;
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(nums1[i]==nums2[j]) idx.push_back(j);
            }
        }   
        for(int i=0;i<n1;i++) cout << idx[i] <<" ";
        for(int i=0;i<n1;i++) {
            int next = nextGreater(nums2,nums2[idx[i]],idx[i]);
            res.push_back(next);
        }
        return res; 
    }
};