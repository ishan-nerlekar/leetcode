class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        unordered_map<int,int> map;
        vector<int> ans;
        
        for(int i=0;i<nums2.size();i++){
            while(!s.empty() && nums2[i]>s.top()){
                int x=s.top();
                s.pop();
                map.insert({x,nums2[i]});
            }
            s.push(nums2[i]);
        }
        
        for(int i=0;i<nums1.size();i++){
            if(map.find(nums1[i])==map.end()){
                ans.push_back(-1);
            }
            else{
                ans.push_back(map[nums1[i]]);
            }
        }
        return ans;
    }
};