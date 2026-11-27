class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ans=-1,l,r;
        for(int i=0; i<nums.size(); i++){
            int s1=0, s2=0;
            for(int j=0; j<i; j++){
                s1+=nums[j];
            }
            for(int k=i+1; k<nums.size(); k++){
                s2+=nums[k];
            }
            if(s1==s2){
                ans=i;
                break;
            }
        }
        return ans;
    }
};