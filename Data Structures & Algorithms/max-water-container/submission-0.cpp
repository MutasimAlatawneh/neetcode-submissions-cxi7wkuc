class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0,j=heights.size()-1;
        int ans=0;
        while(i<j){
            int mn=min(heights[i],heights[j]);
            ans=max(ans,(j-i)*mn);
            if(heights[i]<heights[j])
            i++;
            else if(heights[i]>heights[j]){
                j--;
            }
            else {
                i++;j--;
            }
        }
        return ans;
    }
};
