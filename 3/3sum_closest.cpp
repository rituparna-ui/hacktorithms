class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int ans;
        int diff=INT_MAX;
        
        for(int i=0;i<n;i++){
            int first = nums[i];
            int start=i+1;
            int end=n-1;
            
            while(start<end){
                if(first+nums[start]+nums[end]==target) return target;
                
                if(abs(nums[start]+first+nums[end]-target)<diff){
                    diff = abs(nums[start]+first+nums[end]-target);
                    ans=nums[start]+first+nums[end];
                }
                if(nums[start]+first+nums[end]>target)end--;
                else start++;
            }
        }
        return ans;
    }
};
