class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> fin;
        for(int i=0;i<nums1.size();i++){
            fin.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            fin.push_back(nums2[i]);
        }
        sort(fin.begin(),fin.end());
        for(int i=0;i<fin.size();i++){
            cout<<fin[i];
        }
        if(fin.size()%2!=0){
            return (double) fin[ceil(fin.size()/2)];
        }
        else{
            return (double) (fin[fin.size()/2]+fin[fin.size()/2-1])/2;
        }
        
        return 0;
    }
};