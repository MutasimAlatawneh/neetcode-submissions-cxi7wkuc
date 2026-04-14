class Solution {
public:
    bool binary(int target,vector<int>v){
        int low=0,high=v.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(v[mid]==target)
            return true;
            if(v[mid]>=target)
            high=mid-1;
            else
            low=mid+1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto &v:matrix){
            int n=matrix.size(); 
            if(binary(target,v))
            return true;
        }
        return false;
    }
};
