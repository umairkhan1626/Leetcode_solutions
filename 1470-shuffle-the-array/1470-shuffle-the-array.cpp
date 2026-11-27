class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int half = nums.size()/2;
        vector<int> v1,v2,v3;
        for(int i=0; i<half; i++){
            v1.push_back(nums[i]);
        }
        for(int i=half; i<nums.size(); i++){
            v2.push_back(nums[i]);
        }
        for(int i=0; i<half; i++){
            v3.push_back(v1[i]);
            v3.push_back(v2[i]);
        }
        return v3;
    }
};