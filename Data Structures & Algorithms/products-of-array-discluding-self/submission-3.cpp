class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>pre(nums.size());
        vector<int>suff(nums.size());
        int c=1;
        for(int i=0;i<nums.size();i++){
            pre[i]=c;
            c*=nums[i];
        }
        c=1;
        for(int i=nums.size()-1;i>=0;i--){
            suff[i]=c;
            c*=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=suff[i]*pre[i];
        }
        return nums;
    }
};
