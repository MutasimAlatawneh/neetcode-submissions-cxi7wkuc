class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>Map;
        for(int i=0;i<nums.size();i++){
            Map[nums[i]]++;
        }
        vector<pair<int,int>>vec;
        /*
            1:1 , 1
        */
        for(auto &[a,b]:Map){
            vec.push_back({a,b});
        }
        sort(vec.begin(),vec.end(),[](pair<int,int>&a,pair<int,int>&b){
            return a.second>b.second;
        });
        vector<int>ans;
        for(int i=0;i<k;i++)
        ans.push_back(vec[i].first);
        return ans;
    }
};
