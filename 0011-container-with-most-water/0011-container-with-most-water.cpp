class Solution {
public:
    int maxArea(vector<int>& height) {
        int area,start=0,end=height.size()-1;
        int ans=INT_MIN;
        while(start<end){
            area=(end-start)*min(height[start],height[end]);
            ans=max(ans,area);
                
            if(height[start]>height[end]) end--;
            else start++;
        }             
        return ans;
    }
};