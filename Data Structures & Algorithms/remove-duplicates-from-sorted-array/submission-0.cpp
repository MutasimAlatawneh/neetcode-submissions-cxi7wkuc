class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>v;
        set<int>s;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i])==s.end()){
                s.clear();
                s.insert(nums[i]);
                v.push_back(nums[i]);
            }
            else{
                s.insert(nums[i]);
            }
        }
        nums=v;
        return nums.size();
    }
};