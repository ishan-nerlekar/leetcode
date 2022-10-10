class Solution {
public:
    int pivotIndex(vector<int>& nums) {
		int l=0,r=0;
		int n=nums.size();
		for(int i=0;i<n;i++) r+=nums[i];
		for(int i=0;i<n;i++){
			r-=nums[i];
			if(r==l) return i;
			l+=nums[i];
		}
		return -1;
	}
};